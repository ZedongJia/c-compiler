%{
#include <ext.h>
#define DEBUG 0
#define YY_USER_ACTION yylloc.first_line=yylloc.last_line=yylineno;\
                        yylloc.first_column=yycolumn;\
                        yylloc.last_column=yycolumn+yyleng-1; yycolumn+=yyleng;

int yycolumn = 1;
int level = 0;

void formatPrint(int line, const char* token, char* val) {
    if (DEBUG == 1) 
    {
        if (strcmp(token, "ERROR") == 0)
            printf("\033[31m<line:%3d, token:%-10s, val:%s\n\033[0m", line, token, val);
        else if (strcmp(token, "SGPS") == 0)
            printf("\033[35m<line:%3d, token:%-10s, val:%s\n\033[0m", line, token, "ignore");
        else if (strcmp(token, "DBPS") == 0)
            printf("\033[35m<line:%3d, token:%-10s, val:%s\n\033[0m", line, token, "ignore");
        else
            printf("\033[32m<line:%3d, token:%-10s, val:%s\n\033[0m", line, token, val);
    }
}
void setToken(int type, char*val) {
    Node *node = createNode(type, val, yylineno, level, 0);
    if (DEBUG)
    {
        printNode(node, 0);
        deleteNode(node);
    } else
    {
        yylval.node = node;
    }
}
%}
%option yylineno
%option noyywrap

/* 子结构 */
letter 		 [a-zA-Z]
digit 		 [0-9]
/* float的四种情况，小数点，e */
f_dot_f	     {digit}+(\.){digit}*
f_dot_b      {digit}*(\.){digit}+
f_e_f		 {digit}*(\.)?{digit}+("e"|"E")("+"|"-")?{digit}*
f_e_b		 {digit}+(\.)?{digit}*("e"|"E")("+"|"-")?{digit}*
/* 三种情况，小数点，正常 */
h_dot_f		 0("x"|"X")[0-9a-fA-F]+\.[0-9a-fA-F]*("p"|"P")("+"|"-")?[0-9]+
h_dot_b		 0("x"|"X")[0-9a-fA-F]*\.[0-9a-fA-F]+("p"|"P")("+"|"-")?[0-9]+
h_n		     0("x"|"X")[0-9a-fA-F]+(("p"|"P")("+"|"-")?[0-9]+)?


/* 识别token */
/* 大写为关键字 */
id 			 ({letter}|_)({letter}|_|{digit})* 
int 		 [1-9]{digit}+|{digit}
float		 ({f_dot_f}|{f_dot_b}|{f_e_f}|{f_e_b})("f"|"F")?
oct			 0[0-7]*
hex			 ({h_dot_f}|{h_dot_b}|{h_n})("f"|"F")?
string		 \"((\\\")|[^\"])*\"
char 		 \'((\\[trn\?\'\"\\abv])|.?)\'
SGPS 		 \/\/.*
DBPS 		 \/\*(((\**[^\*\/]+\/*))*|([^*]*)*|([^\/]*)*)\*\/

/* ------------------------------------------------------------------------------------------------------------------------ */
%%
{SGPS}       {formatPrint(yylineno, "SGPS", yytext);}
{DBPS}       {formatPrint(yylineno, "DBPS", yytext);}
{int}        {formatPrint(yylineno, "int", yytext);setToken(INT, yytext);if (!DEBUG) return INT;}
{float}      {formatPrint(yylineno, "float", yytext);setToken(FLOAT, yytext);if (!DEBUG)return FLOAT;}
{char}       {formatPrint(yylineno, "char", yytext);setToken(CHAR, yytext);if (!DEBUG)return CHAR;}
{oct}      	 {formatPrint(yylineno, "oct", yytext);setToken(OCT, yytext);if (!DEBUG)return FLOAT;}
{hex}      	 {formatPrint(yylineno, "hex", yytext);setToken(HEX, yytext);if (!DEBUG)return FLOAT;}
{string}	 {formatPrint(yylineno, "string", yytext);setToken(STRING, yytext);if (!DEBUG)return STRING;}
"const"      {formatPrint(yylineno, "KW_const", yytext);setToken(KW_CONST, NULL);if (!DEBUG)return KW_CONST;}
"extern"     {formatPrint(yylineno, "KW_extern", yytext);setToken(KW_EXTERN, NULL);if (!DEBUG)return KW_EXTERN;}
"void"		 {formatPrint(yylineno, "KW_void", yytext);setToken(KW_VOID, NULL);if (!DEBUG)return KW_VOID;}
"int"        {formatPrint(yylineno, "KW_int", yytext);setToken(KW_INT, NULL);if (!DEBUG)return KW_INT;}
"float"      {formatPrint(yylineno, "KW_float", yytext);setToken(KW_FLOAT, NULL);if (!DEBUG)return KW_FLOAT;}
"char"       {formatPrint(yylineno, "KW_char", yytext);setToken(KW_CHAR, NULL);if (!DEBUG)return KW_CHAR;}
"return"     {formatPrint(yylineno, "KW_return", yytext);setToken(KW_RETURN, NULL);if (!DEBUG)return KW_RETURN;}
"if"         {formatPrint(yylineno, "KW_if", yytext);setToken(KW_IF, NULL);if (!DEBUG)return KW_IF;}
"else"       {formatPrint(yylineno, "KW_else", yytext);setToken(KW_ELSE, NULL);if (!DEBUG)return KW_ELSE;}
"while"      {formatPrint(yylineno, "KW_while", yytext);setToken(KW_WHILE, NULL);if (!DEBUG)return KW_WHILE;}
"for"        {formatPrint(yylineno, "KW_for", yytext);setToken(KW_FOR, NULL);if (!DEBUG)return KW_FOR;}
"break"      {formatPrint(yylineno, "KW_break", yytext);setToken(KW_BREAK, NULL);if (!DEBUG)return KW_BREAK;}
"continue"   {formatPrint(yylineno, "KW_continue", yytext);setToken(KW_CONTINUE, NULL);if (!DEBUG)return KW_CONTINUE;}
"typedef"	 {formatPrint(yylineno, "KW_typedef", yytext);setToken(KW_TYPEDEF, NULL);if (!DEBUG)return KW_TYPEDEF;}
"struct"	 {formatPrint(yylineno, "KW_struct", yytext);setToken(KW_STRUCT, NULL);if (!DEBUG)return KW_STRUCT;}
{id}         {formatPrint(yylineno, "ID", yytext);setToken(ID, yytext);if (!DEBUG)return ID;}
";"			 {formatPrint(yylineno, "SEMI", yytext);setToken(SEMI, NULL);if (!DEBUG)return SEMI;}
","			 {formatPrint(yylineno, "COMMA", yytext);setToken(COMMA, NULL);if (!DEBUG)return COMMA;}
">"          {formatPrint(yylineno, "GREATER", yytext);setToken(GREATER, yytext);if (!DEBUG)return GREATER;}
"<"          {formatPrint(yylineno, "SMALLER", yytext);setToken(SMALLER, yytext);if (!DEBUG)return SMALLER;}
">="         {formatPrint(yylineno, "GREATER_EQUAL", yytext);setToken(GREATER_EQUAL, yytext);if (!DEBUG)return GREATER_EQUAL;}
"<="         {formatPrint(yylineno, "SMALLER_EQUAL", yytext);setToken(SMALLER_EQUAL, yytext);if (!DEBUG)return SMALLER_EQUAL;}
"=="         {formatPrint(yylineno, "EQUAL", yytext);setToken(EQUAL, yytext);if (!DEBUG)return EQUAL;}
"!="         {formatPrint(yylineno, "NOT_EQUAL", yytext);setToken(NOT_EQUAL, yytext);if (!DEBUG)return NOT_EQUAL;}
"="			 {formatPrint(yylineno, "ASSIGNOP", yytext);setToken(ASSIGN, NULL);if (!DEBUG)return ASSIGN;}
"+"			 {formatPrint(yylineno, "PLUS", yytext);setToken(PLUS, NULL);if (!DEBUG)return PLUS;}		
"-"			 {formatPrint(yylineno, "MINUS", yytext);setToken(MINUS, NULL);if (!DEBUG)return MINUS;}
"%"          {formatPrint(yylineno, "DELIVERY", yytext);setToken(DELIVERY, NULL);if (!DEBUG)return DELIVERY;}
"++"		 {formatPrint(yylineno, "DPLUS", yytext);setToken(DPLUS, NULL);if (!DEBUG)return DPLUS;}
"--"		 {formatPrint(yylineno, "DMINUS", yytext);setToken(DMINUS, NULL);if (!DEBUG)return DMINUS;}
"*"			 {formatPrint(yylineno, "STAR", yytext);setToken(STAR, NULL);if (!DEBUG)return STAR;}
"/"			 {formatPrint(yylineno, "DIV", yytext);setToken(DIV, NULL);if (!DEBUG)return DIV;}
"&&"         {formatPrint(yylineno, "AND", yytext);setToken(AND, NULL);if (!DEBUG)return AND;}
"||"         {formatPrint(yylineno, "OR", yytext);setToken(OR, NULL);if (!DEBUG)return OR;}
"!"			 {formatPrint(yylineno, "NOT", yytext);setToken(NOT, NULL);if (!DEBUG)return NOT;}
"("			 {formatPrint(yylineno, "LP", yytext);setToken(LP, NULL);if (!DEBUG)return LP;}
")"			 {formatPrint(yylineno, "RP", yytext);setToken(RP, NULL);if (!DEBUG)return RP;}
"{"			 {formatPrint(yylineno, "LC", yytext);setToken(LC, NULL);level++;if (!DEBUG)return LC;}
"}"			 {formatPrint(yylineno, "RC", yytext);setToken(RC, NULL);level--;if (!DEBUG)return RC;}
"["			 {formatPrint(yylineno, "LB", yytext);setToken(LB, NULL);if (!DEBUG)return LB;}
"]"			 {formatPrint(yylineno, "RB", yytext);setToken(RB, NULL);if (!DEBUG)return RB;}
"."			 {formatPrint(yylineno, "DOT", yytext);setToken(DOT, NULL);if (!DEBUG)return DOT;}
"->"		 {formatPrint(yylineno, "POINTER", yytext);setToken(POINTER, NULL);if (!DEBUG)return POINTER;}
"#include"   {formatPrint(yylineno, "#include", yytext);setToken(INCLUDE, NULL);if (!DEBUG)return INCLUDE;}
"#define"	 {formatPrint(yylineno, "#define", yytext);setToken(DEFINE, NULL);if (!DEBUG)return DEFINE;}
"\n"         {yycolumn=1;}   
[ \r\t]      {}
.			 {formatPrint(yylineno, "ERROR", yytext);}
%%
