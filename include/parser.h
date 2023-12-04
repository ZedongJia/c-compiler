
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KW_CONST = 258,
     KW_EXTERN = 259,
     KW_INT = 260,
     KW_FLOAT = 261,
     KW_CHAR = 262,
     KW_VOID = 263,
     KW_RETURN = 264,
     KW_IF = 265,
     KW_ELSE = 266,
     KW_WHILE = 267,
     KW_FOR = 268,
     KW_BREAK = 269,
     KW_CONTINUE = 270,
     KW_TYPEDEF = 271,
     KW_STRUCT = 272,
     ID = 273,
     GREATER = 274,
     SMALLER = 275,
     GREATER_EQUAL = 276,
     SMALLER_EQUAL = 277,
     EQUAL = 278,
     NOT_EQUAL = 279,
     AND = 280,
     OR = 281,
     NOT = 282,
     ASSIGN = 283,
     PLUS = 284,
     MINUS = 285,
     DPLUS = 286,
     FDPLUS = 287,
     BDPLUS = 288,
     DMINUS = 289,
     FDMINUS = 290,
     BDMINUS = 291,
     MULTIPLY = 292,
     DIV = 293,
     DELIVERY = 294,
     SEMI = 295,
     COMMA = 296,
     LP = 297,
     RP = 298,
     LC = 299,
     RC = 300,
     LB = 301,
     RB = 302,
     DOT = 303,
     POINTER = 304,
     STAR = 305,
     INT = 306,
     FLOAT = 307,
     OCT = 308,
     HEX = 309,
     CHAR = 310,
     STRING = 311,
     INCLUDE = 312,
     DEFINE = 313,
     PROGRAM = 314,
     PRE_INCLUDE = 315,
     PRE_DEFINE = 316,
     VAR_DEC = 317,
     ARG_DEC = 318,
     INITIALIZER_LIST = 319,
     ARRAY_DEC = 320,
     VAR_DEF = 321,
     STRUCT_DEF_STMT = 322,
     STRUCT_DEF = 323,
     MODIFIER = 324,
     ARRAY_DIM = 325,
     VAR_DEC_STMT = 326,
     VAR_DEF_STMT = 327,
     ARRAY_DEC_STMT = 328,
     FUNC_DEC_STMT = 329,
     FUNC_DEF_STMT = 330,
     FUNC_CALL = 331,
     STMTS = 332,
     STMT = 333,
     RETURN = 334,
     ARG = 335,
     IF = 336,
     ELSE = 337,
     WHILE = 338,
     FOR = 339,
     FOR_START_STMT = 340,
     FOR_COND_STMT = 341,
     FOR_ITER_EXP = 342
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 11 "src/parser.y"

    struct Node* node;



/* Line 1676 of yacc.c  */
#line 145 "include/parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;

