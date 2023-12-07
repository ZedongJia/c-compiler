%error-verbose
%locations
%{
    #include "stdio.h"
    #include "stdlib.h"
    #include "math.h"
    #include "string.h"
    #include "ext.h"
    void yyerror(const char* fmt, ...);
%}

%union {
    struct Node* node;
    char *string;
}

%type <node> Program
%type <node> GlobalStmts LocalStmts GlobalStmt LocalStmt Stmt StructMemStmts StructMemStmt
%type <node> VarDefStmt FuncDefStmt StructDefStmt
%type <node> VarDecStmt FuncDecStmt
%type <node> VarDef StructDef
%type <node> VarDec ArgDecs ArgDec
%type <node> Var
%type <node> Stars
%type <node> ArrayDims ArrayDim
%type <node> Initializer InitializerList BraceInitializer
%type <node> Args
%type <node> Exp
%type <node> TypeSpecifier 
%type <string>Type Modifier
%type <node> If Else While For ForStartStmt ForCondStmt ForIterExp StmtBlock

/* key work */
%token <node> KW_CONST KW_EXTERN KW_INT KW_FLOAT KW_CHAR KW_VOID KW_RETURN KW_IF KW_ELSE KW_WHILE KW_FOR KW_BREAK KW_CONTINUE KW_TYPEDEF KW_STRUCT
/* identify */
%token <node> ID
/* symbol */
%token <node> GREATER SMALLER GREATER_EQUAL SMALLER_EQUAL EQUAL NOT_EQUAL AND OR NOT
%token <node> ASSIGN
%token <node> SAND
%token <node> PLUS MINUS DPLUS FDPLUS BDPLUS DMINUS FDMINUS BDMINUS MULTIPLY DIV DELIVERY
%token <node> SEMI COMMA LP RP LC RC LB RB
%token <node> DOT POINTER STAR
/* variable type */
%token <node> INT FLOAT OCT HEX CHAR STRING
/* pretreatment key word */
%token <node> INCLUDE DEFINE


/* just for enumurate */
%token PROGRAM

/* pretreatment */
%token PRE_INCLUDE PRE_DEFINE
/* declare (can be many) */
%token VAR_DEC ARG_DEC INITIALIZER BRACE_INITIALIZER FUNC_DEC
/* define (only once) */
%token VAR_DEF STRUCT_DEF FUNC_DEF
/* modifier */
%token MODIFIER SPECIFIER
/* var */
%token VAR
/* type, <key,val> */
%token TYPE
/* array */
%token ARRAY_DIM
/* statment, statments */
%token FUNC_CALL
%token STMTS STMT

/* exp */
%token GET_ADDR GET_DATA

/* return */
%token RETURN

%token ARG
/* if else if else */
%token IF ELSE WHILE FOR FOR_START_STMT FOR_COND_STMT FOR_ITER_EXP

/* priority */
%left COMMA
%left ID INT FLOAT CHAR
%left ASSIGN
%left GREATER SMALLER GREATER_EQUAL SMALLER_EQUAL EQUAL NOT_EQUAL AND OR
%left PLUS MINUS
%left STAR DIV
%left LP RP LC RC
%left DOT POINTER
%right NOT DPLUS DMINUS SAND

/* no priority */
%nonassoc KW_ELSE

%nonassoc KW_BREAK KW_CONTINUE
%%
Program : GlobalStmts {
            $$ = NULL;
            astTree = createNode(PROGRAM, NULL, $1->line, level, 1, $1);
        }
        ;

/*
    statments level -> control the variable defination and declare

*/

GlobalStmts : GlobalStmt {
                if ($1 != NULL) {
                    $$ = createNode(STMTS, NULL, $1->line, level, 1, $1);
                } else {
                    $$ = createNode(STMTS, NULL, yylineno, level, 0);
                }
            }
            | GlobalStmt GlobalStmts {
                if ($1 != NULL) {
                    prependNode($2,$1);
                }
                $$ = $2;
            }
            ;

GlobalStmt  : VarDefStmt {
                $$ = $1;
            }
            | VarDecStmt {
                $$ = $1;
            }
            | FuncDefStmt {
                $$ = $1;
            }
            | FuncDecStmt {
                $$ = $1;
            }
            | StructDefStmt {
                $$ = $1;
            }
            | SEMI {
                $$ = NULL;
            }
            | error SEMI {
                $$ = NULL;
            }
            ;

LocalStmts  : LocalStmt {
                if ($1 != NULL) {
                    $$ = createNode(STMTS, NULL, $1->line, level, 1, $1);
                } else {
                    $$ = createNode(STMTS, NULL, yylineno, level, 0);
                }
            }
            | LocalStmt LocalStmts {
                if ($1 != NULL) {
                    prependNode($2,$1);
                }
                $$ = $2;
            }
            ;

LocalStmt   : VarDefStmt {
                $$ = $1;
            }
            | VarDecStmt {
                $$ = $1;
            }
            | Stmt {
                $$ = $1;
            }
            | SEMI {
                $$ = NULL;
            }
            | error SEMI {
                $$ = NULL;
            }
            ;

StructMemStmts  : StructMemStmt {
                    if ($1 != NULL) {
                        $$ = createNode(STMTS, NULL, $1->line, level, 1, $1);
                    } else {
                        $$ = createNode(STMTS, NULL, yylineno, level, 0);
                    }
                }
                | StructMemStmt StructMemStmts {
                    if ($1 != NULL) {
                        prependNode($2,$1);
                    }
                    $$ = $2;
                }
                ;

StructMemStmt   : VarDefStmt {
                    $$ = $1;
                }
                | VarDecStmt {
                    $$ = $1;
                }
                | SEMI {
                    $$ = NULL;
                }
                | error SEMI {
                    $$ = NULL;
                }
                ;


/* declare */
VarDecStmt  : TypeSpecifier VarDec SEMI {
                addType($2, $1);
                $$ =$2;
            }
            ;

VarDec  : Var {
            $$ = createNode(VAR_DEC, NULL, $1->line, level, 1, $1);
        }
        | Var COMMA VarDec {
            appendNodes($1, $3);
            $$ = createNode(VAR_DEC, NULL, $1->line, level, 1, $1);
        }
        ;

FuncDecStmt : TypeSpecifier Var LP ArgDecs RP SEMI {
                addType($2, $1);
                $$ = createNode(FUNC_DEC, NULL, $2->line, level, 2, $2, $4);
            }
            | TypeSpecifier Var LP RP SEMI {
                addType($2, $1);
                $$ = createNode(FUNC_DEC, NULL, $2->line, level, 1, $2);
            }
            ;

ArgDecs : ArgDec {
            $$ = $1;
        }
        | ArgDec COMMA ArgDecs {
            appendNodes($1, $3);
            $$ = $1;
        }
        ;

ArgDec  : TypeSpecifier Var {
            addType($2, $1);
            $$ = createNode(ARG_DEC, NULL, $2->line, level, 1, $2);
        }
        ;

/* defination */

VarDefStmt  : TypeSpecifier VarDef SEMI {
                addType($2, $1);
                $$ = $2;
            }
            ;

VarDef  : Var ASSIGN Initializer {
            $1->initializer = $3;
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 1, $1);
        }
        | Var ASSIGN BraceInitializer {
            $1->initializer = $3;
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 1, $1);
        }
        | Var ASSIGN BraceInitializer COMMA Var {
            $1->initializer = $3;
            appendNode($1, $5);
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 1, $1);
        }
        | Var ASSIGN Initializer COMMA Var {
            $1->initializer = $3;
            appendNode($1, $5);
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 1, $1);
        }
        | Var COMMA VarDef {
            appendNodes($1, $3);
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 1, $1);
        }
        | Var ASSIGN Initializer COMMA VarDef {
            $1->initializer = $3;
            appendNodes($1, $5);
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 1, $1);
        }
        | Var ASSIGN BraceInitializer COMMA VarDef {
            $1->initializer = $3;
            appendNodes($1, $5);
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 1, $1);
        }
        ;

FuncDefStmt : TypeSpecifier Var LP ArgDecs RP LC LocalStmts RC {
                addType($2, $1);
                $$ = createNode(FUNC_DEF, NULL, $2->line, level, 3, $2, $4, $7);
            }
            | TypeSpecifier Var LP RP LC LocalStmts RC {
                addType($2, $1);
                $$ = createNode(FUNC_DEF, NULL, $2->line, level, 3, $2, $6);
            }
            | TypeSpecifier Var LP ArgDecs RP LC RC {
                addType($2, $1);
                $$ = createNode(FUNC_DEF, NULL, $2->line, level, 3, $2, $4);
            }
            | TypeSpecifier Var LP RP LC RC {
                addType($2, $1);
                $$ = createNode(FUNC_DEF, NULL, $2->line, level, 1, $2);
            }
            ;

StructDefStmt   : StructDef SEMI {
                    removeNode($1, 0);
                    $$ = $1;
                }
                | StructDef VarDef SEMI {
                    addType($2, $1->children[0]);
                    removeNode($1, 0);
                    appendNode($1, $2);
                    $$ = $1;
                }
                | StructDef VarDec SEMI {
                    addType($2, $1->children[0]);
                    removeNode($1, 0);
                    appendNode($1, $2);
                    $$ = $1;
                }
                ;

StructDef   : KW_STRUCT ID LC StructMemStmts RC {

                char *type = (char*)malloc(sizeof(char)*strlen($2->val) + sizeof(char) * 7);
                strcpy(type, "struct_");
                strcat(type, $2->val);

                Node *specifier = createNode(SPECIFIER, NULL, $1->line, level, 0);
                specifier->valType = type;
                specifier->valModifier = "default";

                $$ = createNode(STRUCT_DEF, NULL, $1->line, level, 2, specifier, $4);
                $$->lexeme = $2->val;
            }
            | KW_STRUCT ID LC RC {
                char *type = (char*)malloc(sizeof(char)*strlen($2->val) + sizeof(char) * 7);
                strcpy(type, "struct_");
                strcat(type, $2->val);

                Node *specifier = createNode(SPECIFIER, NULL, $1->line, level, 0);
                specifier->valType = type;
                specifier->valModifier = "default";

                $$ = createNode(STRUCT_DEF, NULL, $1->line, level, 1, specifier);
                $$->lexeme = $2->val;
            }
            ;

/* variable */
Var : ID {
        $$ = createNode(VAR, NULL, $1->line, level, 0);
        $$->valType = "_var";
        $$->lexeme = $1->val;
    }
    | ID ArrayDims {
        $$ = createNode(VAR, NULL, $1->line, level, 0);
        $$->valType = "_arr";
        $$->lexeme = $1->val;
        $$->arrayDim = $2;
    }
    | Stars ID {
        $$ = createNode(VAR, NULL, $1->line, level, 0);
        $$->valType = "_ptr";
        $$->lexeme = $2->val;
        $$->ptrStar = atoi($1->val);
    }
    | LP Stars ID RP {
        $$ = createNode(VAR, NULL, $1->line, level, 0);
        $$->valType = "_ptr";
        $$->lexeme = $3->val;
        $$->ptrStar = atoi($2->val);
    }
    | LP Stars ID ArrayDims RP {
        $$ = createNode(VAR, NULL, $1->line, level, 0);
        $$->valType = "_ptr_arr";
        $$->lexeme = $3->val;
        $$->ptrStar = atoi($2->val);
        $$->arrayDim = $4;
    }
    | LP Stars ID RP ArrayDims {
        $$ = createNode(VAR, NULL, $1->line, level, 0);
        $$->valType = "_arr_ptr";
        $$->lexeme = $3->val;
        $$->ptrStar = atoi($2->val);
        $$->arrayDim = $5;
    }
    | Stars ID ArrayDims {
        $$ = createNode(VAR, NULL, $1->line, level, 0);
        $$->valType = "_ptr_arr";
        $$->lexeme = $2->val;
        $$->ptrStar = atoi($1->val);
        $$->arrayDim = $3;
    }
    ;

/* stars */
Stars   : STAR {
            $$ = createNode(STAR, "1", $1->line, level, 0);
        }
        | STAR Stars {
            int num = atoi($2->val);
            itoa(num + 1, $2->val, 10);
            $2->line = $1->line;
            $$ = $2;
        }
        ;


/* array dimension */
ArrayDims   : ArrayDim {
                $$ = $1;
            }
            | ArrayDim ArrayDims {
                appendNode($1, $2);
                $$ = $1;
            }
            ;

ArrayDim    : LB INT RB {
                $$ = createNode(ARRAY_DIM, NULL, $1->line, level, 1, $2);
            }
            | LB ID RB {
                $$ = createNode(ARRAY_DIM, NULL, $1->line, level, 1, $2);
            }
            | LB RB {
                $$ = createNode(ARRAY_DIM, NULL, $1->line, level, 0);
            }
            ;


/* initializer */
Initializer : INT {
                $$ = createNode(INITIALIZER, NULL, $1->line, level, 1, $1);
            }
            | FLOAT {
                $$ = createNode(INITIALIZER, NULL, $1->line, level, 1, $1);
            }
            | CHAR {
                $$ = createNode(INITIALIZER, NULL, $1->line, level, 1, $1);
            }
            | STRING {
                $$ = createNode(INITIALIZER, NULL, $1->line, level, 1, $1);
            }
            | Exp {
                $$ = createNode(INITIALIZER, NULL, $1->line, level, 1, $1);
            }
            ;

/* 
    {1,1,1}
    {}
 */
BraceInitializer    : LC InitializerList RC {
                        $$ = createNode(BRACE_INITIALIZER, NULL, $1->line, level, 1, $2);
                    }
                    | LC RC {
                        $$ = createNode(BRACE_INITIALIZER, NULL, $1->line, level, 0);
                    }
                    ;

InitializerList : Initializer {
                    $$ = $1;
                }
                | BraceInitializer {
                    $$ = $1;
                }
                | Initializer COMMA InitializerList {
                    prependNodes($3, $1);
                    $$ = $3;
                }
                | BraceInitializer COMMA InitializerList {
                    prependNodes($3, $1);
                    $$ = $3;
                }
                ;
/* type specifier */
Modifier    : {
                $$ = "default";
            }
            | KW_EXTERN {
                $$ = "extern";
            }
            | KW_CONST {
                $$ = "const";
            }
            ;


TypeSpecifier   : Modifier Type {
                    $$ = createNode(SPECIFIER, NULL, -1, -1, 0);
                    $$->valType = $2;
                    $$->valModifier = $1;
                }
                | Type Modifier {
                    $$ = createNode(SPECIFIER, NULL, -1, -1, 0);
                    $$->valType = $1;
                    $$->valModifier = $2;
                }
                ;

Type    : KW_INT {
            $$ = "int";
        }
        | KW_FLOAT {
            $$ = "float";
        }
        | KW_CHAR {
            $$ = "char";
        }
        | KW_VOID {
            $$ = "void";
        }
        | KW_STRUCT ID {
            char *type = (char*)malloc(sizeof(char)*strlen($2->val) + sizeof(char) * 7);
            strcpy(type, "struct_");
            strcat(type, $2->val);
            $$ = type;
        }
        ;

/* statment */
Stmt    : Exp SEMI {
            $$ = $1;
        }
        | If {
            $$ = $1;
        }
        | While {
            $$ = $1;
        }
        | For {
            $$ = $1;
        }
        | KW_RETURN Exp SEMI {
            $$ = createNode(RETURN, NULL, $1->line, level, 1, $2);
        }
        | KW_RETURN SEMI {
            $$ = createNode(RETURN, NULL, $1->line, level, 0);
        }
        ;

/* arguments */
Args    : Exp {
            $$ = createNode(ARG, NULL, $1->line, level, 1, $1);
        }
        | Exp COMMA Args {
            $$ = createNode(ARG, NULL, $1->line, level, 2, $1, $3);
        }
        ;

/* expression */
/* TODO: assign exp left can not be int / float / char / string */
Exp : Exp ASSIGN Exp {
        $$ = createNode(ASSIGN, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp PLUS Exp {
        $$ = createNode(PLUS, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp MINUS Exp {
        $$ = createNode(MINUS, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp STAR Exp {
        $$ = createNode(MULTIPLY, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp DIV Exp {
        $$ = createNode(DIV, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp DELIVERY Exp {
        $$ = createNode(DELIVERY, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp GREATER Exp {
        $$ = createNode(GREATER, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp SMALLER Exp {
        $$ = createNode(SMALLER, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp GREATER_EQUAL Exp {
        $$ = createNode(GREATER_EQUAL, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp SMALLER_EQUAL Exp {
        $$ = createNode(SMALLER_EQUAL, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp EQUAL Exp {
        $$ = createNode(EQUAL, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp NOT_EQUAL Exp {
        $$ = createNode(NOT_EQUAL, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp AND Exp {
        $$ = createNode(AND, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp OR Exp {
        $$ = createNode(OR, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp DOT Exp {
        // specific for ID
        $$ = createNode(DOT, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp POINTER Exp {
        // specific for ID
        $$ = createNode(POINTER, NULL, $1->line, level, 2, $1, $3);
    }
    /* unary operator */
    | MINUS Exp {
        Node *node = createNode(INT, "0", $1->line, level, 0);
        $$ = createNode(MINUS, NULL, $1->line, level, 2, node, $2);
    }
    | DPLUS Exp {
        $$ = createNode(FDPLUS, NULL, $2->line, level, 1, $2);
    }
    | Exp DPLUS {
        $$ = createNode(BDPLUS, NULL, $1->line, level, 1, $1);
    }
    | DMINUS Exp {
        $$ = createNode(FDMINUS, NULL, $2->line, level, 1, $2);
    }
    | Exp DMINUS {
        $$ = createNode(BDMINUS, NULL, $1->line, level, 1, $1);
    }
    | NOT Exp {
        $$ = createNode(NOT, NULL, $2->line, level, 1, $2);
    }
    | LP Exp RP {
        $$ = $1;
    }
    | ID LP Args RP {
        $$ = createNode(FUNC_CALL, NULL, $1->line, level, 2, $1, $3);
    }
    | ID LP RP {
        $$ = createNode(FUNC_CALL, NULL, $1->line, level, 1, $1);
    }
    | STAR ID {
        $$ = createNode(GET_ADDR, NULL, $2->line, level, 1, $2);
    }
    | SAND ID {
        $$ = createNode(GET_DATA, NULL, $2->line, level, 1, $2);
    }
    /* base type */
    | INT {
        $$ = $1;
    }
    | FLOAT {
        $$ = $1;
    }
    | CHAR {
        $$ = $1;
    }
    | STRING {
        $$ = $1;
    }
    | ID {
        $$ = $1;
    }
    ;

/* if else if... else */
/* 
    if ()
        stmt
    if ();
    if () 
    {
        stmts
    }
    if ()
    {

    }

 */
If  : KW_IF LP Exp RP StmtBlock {
        $$ = createNode(IF, NULL, $1->line, level, 2, $3, $5);
    }
    | KW_IF LP Exp RP StmtBlock Else {
        $$ = createNode(IF, NULL, $1->line, level, 3, $3, $5, $6);
    }
    ;
Else    : KW_ELSE StmtBlock {
            $$ = createNode(ELSE, NULL, $1->line, level, 1, $2);
        }
        ;

/* while */
While   : KW_WHILE LP Exp RP StmtBlock {
            $$ = createNode(WHILE, NULL, $1->line, level, 2, $3, $5);
        }
        ;

/* for */
For : KW_FOR LP ForStartStmt ForCondStmt ForIterExp RP StmtBlock {
        $$ = createNode(FOR, NULL, $1->line, level, 4, $3, $4, $5, $7);
    }
    | KW_FOR LP ForStartStmt ForCondStmt RP StmtBlock {
        $$ = createNode(FOR, NULL, $1->line, level, 3, $3, $4, $6);
    }
    ;
ForStartStmt    : VarDefStmt {
                    $$ = createNode(FOR_START_STMT, NULL, $1->line, level, 1, $1);
                }
                | Exp SEMI {
                    $$ = createNode(FOR_START_STMT, NULL, $1->line, level, 1, $1);
                }
                | SEMI {
                    $$ = createNode(FOR_START_STMT, NULL, $1->line, level, 0);
                }
                ;
ForCondStmt     : Exp SEMI {
                    $$ = createNode(FOR_COND_STMT, NULL, $1->line, level, 1, $1);
                }
                | SEMI {
                    $$ = createNode(FOR_COND_STMT, NULL, $1->line, level, 0);
                }
                ;

ForIterExp      : Exp {
                    $$ = createNode(FOR_ITER_EXP, NULL, $1->line, level, 1, $1);;
                }
                ;

/* 
    {
        stmts
    }
    - or -
    stmtsa
    - or -
    {

    }
    -> align to STMS
 */
StmtBlock   : LocalStmt {
                if ($1 != NULL) {
                    $$ = createNode(STMTS, NULL, $1->line, level, 1, $1);
                } else {
                    $$ = createNode(STMTS, NULL, yylineno, level, 0);
                }
            }
            | LC LocalStmts RC {
                $$ = $2;
            }
            | LC RC {
                $$ = createNode(STMTS, NULL, $1->line, level, 0);
            }
            ;
%%
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}
