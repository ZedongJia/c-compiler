
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
     SAND = 284,
     PLUS = 285,
     MINUS = 286,
     DPLUS = 287,
     FDPLUS = 288,
     BDPLUS = 289,
     DMINUS = 290,
     FDMINUS = 291,
     BDMINUS = 292,
     MULTIPLY = 293,
     DIV = 294,
     DELIVERY = 295,
     SEMI = 296,
     COMMA = 297,
     LP = 298,
     RP = 299,
     LC = 300,
     RC = 301,
     LB = 302,
     RB = 303,
     DOT = 304,
     POINTER = 305,
     STAR = 306,
     INT = 307,
     FLOAT = 308,
     OCT = 309,
     HEX = 310,
     CHAR = 311,
     STRING = 312,
     INCLUDE = 313,
     DEFINE = 314,
     PROGRAM = 315,
     PRE_INCLUDE = 316,
     PRE_DEFINE = 317,
     VAR_DEC = 318,
     ARG_DEC = 319,
     INITIALIZER = 320,
     BRACE_INITIALIZER = 321,
     FUNC_DEC = 322,
     VAR_DEF = 323,
     STRUCT_DEF = 324,
     FUNC_DEF = 325,
     MODIFIER = 326,
     SPECIFIER = 327,
     VAR = 328,
     VAR_ARRAY = 329,
     VAR_POINTER = 330,
     VAR_ARRAY_POINTER = 331,
     VAR_POINTER_ARRAY = 332,
     ARRAY_DIM = 333,
     FUNC_CALL = 334,
     STMTS = 335,
     STMT = 336,
     GET_ADDR = 337,
     GET_DATA = 338,
     RETURN = 339,
     ARG = 340,
     IF = 341,
     ELSE = 342,
     WHILE = 343,
     FOR = 344,
     FOR_START_STMT = 345,
     FOR_COND_STMT = 346,
     FOR_ITER_EXP = 347
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 12 "src/parser.y"

    struct Node* node;



/* Line 1676 of yacc.c  */
#line 150 "include/parser.h"
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

