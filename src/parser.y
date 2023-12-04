%error-verbose
%locations
%{
    #include "stdio.h"
    #include "math.h"
    #include "string.h"
    #include "ext.h"
    void yyerror(const char* fmt, ...);
%}

%union {
    struct Node* node;
}

%type <node> Program
%type <node> GlobalStmts LocalStmts GlobalStmt LocalStmt Stmt
%type <node> VarDefStmt FuncDefStmt
%type <node> VarDecStmt FuncDecStmt ArrayDecStmt
%type <node> VarDef
%type <node> VarDec ArrayDec ArgDecs ArgDec
%type <node> ArrayDim
%type <node> Initializer InitializerList BraceInitializer
%type <node> Args
%type <node> Exp
%type <node> TypeSpecifier
%type <node> If Else While For ForStartStmt ForCondStmt ForIterExp StmtBlock
%type <node> Modifier

/* key work */
%token <node> KW_CONST KW_EXTERN KW_INT KW_FLOAT KW_CHAR KW_VOID KW_RETURN KW_IF KW_ELSE KW_WHILE KW_FOR KW_BREAK KW_CONTINUE KW_TYPEDEF KW_STRUCT
/* identify */
%token <node> ID
/* symbol */
%token <node> GREATER SMALLER GREATER_EQUAL SMALLER_EQUAL EQUAL NOT_EQUAL AND OR NOT
%token <node> ASSIGN
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
%token VAR_DEC ARG_DEC INITIALIZER_LIST ARRAY_DEC
/* define (only once) */
%token VAR_DEF STRUCT_DEF_STMT STRUCT_DEF
/* modifier */
%token MODIFIER
/* array */
%token ARRAY_DIM
/* statment, statments */
%token VAR_DEC_STMT VAR_DEF_STMT
%token ARRAY_DEC_STMT
%token FUNC_DEC_STMT FUNC_DEF_STMT FUNC_CALL
%token STMTS STMT

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
%right NOT DPLUS DMINUS

/* no priority */
%nonassoc KW_ELSE

%nonassoc KW_BREAK KW_CONTINUE
%%
Program : GlobalStmts {
            $$ = NULL;
            astTree = createNode(PROGRAM, NULL, $1->line, level, 1, $1);
        }
        ;

GlobalStmts : GlobalStmt {
                $$ = createNode(STMTS, NULL, $1->line, level, 1, $1);
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
            | SEMI {
                $$ = createNode(STMT, NULL, $1->line, level, 0);
            }
            | error SEMI {
                $$ = NULL;
            }
            ;

LocalStmts  : LocalStmt {
                $$ = createNode(STMTS, NULL, $1->line, level, 1, $1);
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
                $$ = createNode(STMT, NULL, $1->line, level, 0);
            }
            | error SEMI {
                $$ = NULL;
            }
            ;

/* declare */
VarDecStmt  : Modifier TypeSpecifier VarDec SEMI {
                $$ = createNode(VAR_DEC_STMT, NULL, $1->line, level, 3, $1, $2, $3);
            }
            ;

VarDec  : ID {
            $$ = createNode(VAR_DEC, NULL, $1->line, level, 1, $1);
        }
        | ID COMMA VarDec {
            $$ = createNode(VAR_DEC, NULL, $1->line, level, 2, $1, $3);
        }
        ;

FuncDecStmt : Modifier TypeSpecifier ID LP ArgDecs RP SEMI {
                $$ = createNode(FUNC_DEC_STMT, NULL, $1->line, level, 4, $1, $2, $3, $5);
            }
            | Modifier TypeSpecifier ID LP RP SEMI {
                $$ = createNode(FUNC_DEC_STMT, NULL, $1->line, level, 3, $1, $2, $3);
            }
            ;

ArgDecs : ArgDec {
            $$ = $1;
        }
        | ArgDec COMMA ArgDecs {
            $$ = createNode(ARG_DEC, NULL, $1->line, level, 2, $1, $3);
        }
        ;

ArgDec  : Modifier TypeSpecifier ID {
            $$ = createNode(ARG_DEC, NULL, $1->line, level, 3, $1, $2, $3);
        }
        ;


ArrayDecStmt    : Modifier TypeSpecifier ArrayDec SEMI {
                    $$ = createNode(VAR_DEC_STMT, NULL, $1->line, level, 3, $1, $2, $3);
                }
                ;

ArrayDec    : {}
            | {}
            ;

/* defination */

VarDefStmt  : Modifier TypeSpecifier VarDef SEMI {
                $$ = createNode(VAR_DEF_STMT, NULL, $1->line, level, 3, $1, $2, $3);
            }
            ;

VarDef  : ID ASSIGN Initializer {
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 2, $1, $3);
        }
        | ID ASSIGN BraceInitializer {
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 2, $1, $3);
        }
        | ID ASSIGN BraceInitializer COMMA ID {
            Node *node = createNode(VAR_DEF, NULL, $5->line, level, 1, $5);
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 3, $1, $3, node);
        }
        | ID ASSIGN Initializer COMMA ID {
            Node *node = createNode(VAR_DEF, NULL, $5->line, level, 1, $5);
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 3, $1, $3, node);
        }
        | ID COMMA VarDef {
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 2, $1, $3);
        }
        | ID ASSIGN Initializer COMMA VarDef {
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 3, $1, $3, $5);
        }
        | ID ASSIGN BraceInitializer COMMA VarDef {
            $$ = createNode(VAR_DEF, NULL, $1->line, level, 3, $1, $3, $5);
        }
        ;

FuncDefStmt : Modifier TypeSpecifier ID LP ArgDecs RP LC LocalStmts RC {
                $$ = createNode(FUNC_DEF_STMT, NULL, $1->line, level, 5, $1, $2, $3, $5, $8);
            }
            | Modifier TypeSpecifier ID LP RP LC LocalStmts RC {
                $$ = createNode(FUNC_DEF_STMT, NULL, $1->line, level, 4, $1, $2, $3, $7);
            }
            | Modifier TypeSpecifier ID LP ArgDecs RP LC RC {
                $$ = createNode(FUNC_DEF_STMT, NULL, $1->line, level, 4, $1, $2, $3, $5);
            }
            | Modifier TypeSpecifier ID LP RP LC RC {
                $$ = createNode(FUNC_DEF_STMT, NULL, $1->line, level, 3, $1, $2, $3);
            }
            ;

/* modifier */
Modifier    : {
                $$ = createNode(MODIFIER, NULL, yylineno, level, 0)
            }
            | KW_EXTERN {
                $$ = createNode(MODIFIER, NULL, $1->line, level, 1, $1);
            }
            | KW_CONST {
                $$ = createNode(MODIFIER, NULL, $1->line, level, 1, $1);
            }
            ;


/* array dimension */
ArrayDim    : {}
            ;


/* initializer */
Initializer : INT {
                $$ = createNode(INITIALIZER_LIST, NULL, $1->line, level, 1, $1);
            }
            | FLOAT {
                $$ = createNode(INITIALIZER_LIST, NULL, $1->line, level, 1, $1);
            }
            | CHAR {
                $$ = createNode(INITIALIZER_LIST, NULL, $1->line, level, 1, $1);
            }
            | STRING {
                $$ = createNode(INITIALIZER_LIST, NULL, $1->line, level, 1, $1);
            }
            | Exp {
                $$ = createNode(INITIALIZER_LIST, NULL, $1->line, level, 1, $1);
            }
            ;

/* 
    {1,1,1}
    {}
 */
BraceInitializer    : LC InitializerList RC {
                        $$ = $2;
                    }
                    | LC RC {
                        $$ = createNode(INITIALIZER_LIST, NULL, $1->line, level, 0);
                    }
                    ;

InitializerList : Initializer {
                    $$ = $1
                }
                | BraceInitializer {
                    $$ = $1;
                }
                | Initializer COMMA InitializerList {
                    prependNode($3, $1);
                    $$ = $3;
                }
                | BraceInitializer COMMA InitializerList {
                    prependNodes($3, $1);
                    $$ = $3;
                }
                ;
/* type specifier */
TypeSpecifier   : KW_INT {
                    $$ = $1;
                }
                | KW_FLOAT {
                    $$ = $1;
                }
                | KW_CHAR {
                    $$ = $1;
                }
                | KW_VOID {
                    $$ = $1;
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
        $$ = createNode(DOT, NULL, $1->line, level, 2, $1, $3);
    }
    | Exp POINTER Exp {
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
        $$ = createNode(FUNC_CALL, NULL, $1->line, level, 0);
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
                $$ = createNode(STMTS, NULL, $1->line, level, 1, $1);
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
