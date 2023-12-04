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
%type <node> VarDefStmt VarDef FuncDefStmt FuncDef
%type <node> VarDecStmt VarDec FuncDecStmt FuncDec
%type <node> Initializer InitializerList BraceInitializer
%type <node> Exp
%type <node> TypeSpecifier

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
%token VAR_DEC_STMT VAR_DEC FUNC_DEC_STMT FUNC_DEC INITIALIZER_LIST
/* define (only once) */
%token VAR_DEF_STMT VAR_DEF STRUCT_DEF_STMT STRUCT_DEF  FUNC_DEF_STMT FUNC_DEF
/* statment, statments */
%token STMTS STMT

/* priority */
%left LCOMMA
%left COMMA
%left ID INT FLOAT CHAR
%left ASSIGN
%left GREATER SMALLER GREATER_EQUAL SMALLER_EQUAL EQUAL NOT_EQUAL AND OR
%left PLUS MINUS
%left STAR DIV
%left LP RP LC RC
%left DOT POINTER
%right UMINUS NOT DPLUS DMINUS

/* no priority */
%nonassoc LOWER_THEN_ELSE
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
            | Stmt {
                $$ = $1;
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
            | error SEMI {
                $$ = NULL;
            }
            ;

/* declare */
VarDecStmt  : TypeSpecifier VarDec SEMI {
                $$ = createNode(VAR_DEC_STMT, NULL, $1->line, level, 2, $1, $2);
            }
            | KW_CONST TypeSpecifier VarDec SEMI {
                $$ = createNode(VAR_DEC_STMT, NULL, $1->line, level, 3, $1, $2, $3);
            }
            | KW_EXTERN TypeSpecifier VarDec SEMI {
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

FuncDecStmt : {
                d
            }
            ;

FuncDec : {
            d
        }
        ;

/* defination */

VarDefStmt  : TypeSpecifier VarDef SEMI {
                $$ = createNode(VAR_DEF_STMT, NULL, $1->line, level, 2, $1, $2);
            }
            | KW_CONST TypeSpecifier VarDef SEMI {
                $$ = createNode(VAR_DEF_STMT, NULL, $1->line, level, 3, $1, $2, $3);
            }
            | KW_EXTERN TypeSpecifier VarDef SEMI {
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

FuncDefStmt : {}
            ;
FuncDef : {}
        ;

/* initializer */
Initializer : INT {
                $$ = createNode(INITIALIZER_LIST, NULL, $1->line, level, 1, $1);;
            }
            | FLOAT {
                $$ = createNode(INITIALIZER_LIST, NULL, $1->line, level, 1, $1);;
            }
            | CHAR {
                $$ = createNode(INITIALIZER_LIST, NULL, $1->line, level, 1, $1);;
            }
            | STRING {
                $$ = createNode(INITIALIZER_LIST, NULL, $1->line, level, 1, $1);;
            }
            ;

BraceInitializer    : LC InitializerList RC {
                        $$ = $2;
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
Stmt    : Exp SEMI {}
        ;


/* expression */
/* TODO: assign exp left can not be int / float / char / string */
/* %token <node> 

%token <node> DOT POINTER
 */
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

%%
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}
