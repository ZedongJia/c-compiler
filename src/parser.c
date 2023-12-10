
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "src/parser.y"

    #include "stdio.h"
    #include "stdlib.h"
    #include "math.h"
    #include "string.h"
    #include "ext.h"
    void yyerror(const char* fmt, ...);


/* Line 189 of yacc.c  */
#line 83 "src/parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     TRANSFORM = 307,
     INT = 308,
     FLOAT = 309,
     OCT = 310,
     HEX = 311,
     CHAR = 312,
     STRING = 313,
     INCLUDE = 314,
     DEFINE = 315,
     PROGRAM = 316,
     PRE_INCLUDE = 317,
     PRE_DEFINE = 318,
     VAR_DEC = 319,
     ARG_DEC = 320,
     INITIALIZER = 321,
     BRACE_INITIALIZER = 322,
     FUNC_DEC = 323,
     VAR_DEF = 324,
     STRUCT_DEF = 325,
     FUNC_DEF = 326,
     MODIFIER = 327,
     SPECIFIER = 328,
     VAR = 329,
     TYPE = 330,
     ARRAY_DIM = 331,
     FUNC_CALL = 332,
     STMTS = 333,
     STMT = 334,
     GET_ADDR = 335,
     GET_DATA = 336,
     GET_ARRAY_DATA = 337,
     RETURN = 338,
     ARG = 339,
     IF = 340,
     ELSE = 341,
     WHILE = 342,
     FOR = 343,
     FOR_START_STMT = 344,
     FOR_COND_STMT = 345,
     FOR_ITER_EXP = 346,
     MUL = 347,
     GADDR = 348,
     GDATA = 349,
     SMINUS = 350
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 12 "src/parser.y"

    struct Node* node;
    char *string;



/* Line 214 of yacc.c  */
#line 221 "src/parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 246 "src/parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNRULES -- Number of states.  */
#define YYNSTATES  247

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    25,    27,    30,    32,    34,    36,    38,    41,
      43,    46,    48,    50,    52,    55,    59,    61,    65,    73,
      80,    82,    86,    89,    93,    97,   101,   107,   113,   117,
     123,   129,   139,   148,   157,   165,   168,   172,   176,   183,
     189,   191,   194,   197,   202,   208,   214,   218,   220,   223,
     225,   228,   232,   235,   237,   239,   241,   243,   245,   249,
     252,   254,   256,   260,   264,   265,   267,   269,   272,   275,
     277,   279,   281,   283,   286,   289,   291,   293,   295,   299,
     302,   304,   308,   310,   312,   314,   316,   318,   323,   329,
     333,   338,   342,   346,   350,   354,   358,   362,   366,   370,
     374,   378,   382,   386,   390,   394,   397,   400,   403,   406,
     409,   412,   415,   418,   422,   426,   430,   435,   441,   448,
     451,   457,   466,   474,   476,   479,   481,   484,   486,   488,
     490,   494,   497,   498
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      97,     0,    -1,    98,    -1,    99,    -1,    99,    98,    -1,
     109,    -1,   104,    -1,   111,    -1,   106,    -1,   112,    -1,
      41,    -1,     1,    41,    -1,   101,    -1,   101,   100,    -1,
     109,    -1,   104,    -1,   124,    -1,    41,    -1,     1,    41,
      -1,   103,    -1,   103,   102,    -1,   109,    -1,   104,    -1,
      41,    -1,     1,    41,    -1,   122,   105,    41,    -1,   114,
      -1,   114,    42,   105,    -1,   122,   114,   136,    43,   107,
      44,    41,    -1,   122,   114,   136,    43,    44,    41,    -1,
     108,    -1,   108,    42,   107,    -1,   122,   114,    -1,   122,
     110,    41,    -1,   114,    28,   118,    -1,   114,    28,   119,
      -1,   114,    28,   119,    42,   114,    -1,   114,    28,   118,
      42,   114,    -1,   114,    42,   110,    -1,   114,    28,   118,
      42,   110,    -1,   114,    28,   119,    42,   110,    -1,   122,
     114,   136,    43,   107,    44,    45,   100,    46,    -1,   122,
     114,   136,    43,    44,    45,   100,    46,    -1,   122,   114,
     136,    43,   107,    44,    45,    46,    -1,   122,   114,   136,
      43,    44,    45,    46,    -1,   113,    41,    -1,   113,   110,
      41,    -1,   113,   105,    41,    -1,    17,    18,   135,    45,
     102,    46,    -1,    17,    18,   135,    45,    46,    -1,    18,
      -1,    18,   116,    -1,   115,    18,    -1,    43,   115,    18,
      44,    -1,    43,   115,    18,   116,    44,    -1,    43,   115,
      18,    44,   116,    -1,   115,    18,   116,    -1,    51,    -1,
      51,   115,    -1,   117,    -1,   117,   116,    -1,    47,    53,
      48,    -1,    47,    48,    -1,    53,    -1,    54,    -1,    57,
      -1,    58,    -1,   126,    -1,    45,   120,    46,    -1,    45,
      46,    -1,   118,    -1,   119,    -1,   118,    42,   120,    -1,
     119,    42,   120,    -1,    -1,     4,    -1,     3,    -1,   121,
     123,    -1,   123,   121,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,    17,    18,    -1,   126,    41,    -1,   127,
      -1,   129,    -1,   130,    -1,     9,   126,    41,    -1,     9,
      41,    -1,   126,    -1,   126,    42,   125,    -1,    53,    -1,
      54,    -1,    57,    -1,    58,    -1,    18,    -1,    43,   123,
      44,   126,    -1,    43,   123,   115,    44,   126,    -1,    18,
      43,    44,    -1,    18,    43,   125,    44,    -1,   126,    28,
     126,    -1,   126,    26,   126,    -1,   126,    25,   126,    -1,
     126,    24,   126,    -1,   126,    23,   126,    -1,   126,    22,
     126,    -1,   126,    20,   126,    -1,   126,    21,   126,    -1,
     126,    19,   126,    -1,   126,    31,   126,    -1,   126,    30,
     126,    -1,   126,    40,   126,    -1,   126,    51,   126,    -1,
     126,    39,   126,    -1,    27,   126,    -1,    29,    18,    -1,
      51,    18,    -1,    35,   126,    -1,   126,    35,    -1,   126,
      32,    -1,    32,   126,    -1,    31,   126,    -1,   126,    50,
     126,    -1,   126,    49,   126,    -1,    43,   126,    44,    -1,
     126,    47,   126,    48,    -1,    10,    43,   126,    44,   134,
      -1,    10,    43,   126,    44,   134,   128,    -1,    11,   134,
      -1,    12,    43,   126,    44,   134,    -1,    13,   136,    43,
     131,   132,   133,    44,   134,    -1,    13,   136,    43,   131,
     132,    44,   134,    -1,   109,    -1,   126,    41,    -1,    41,
      -1,   126,    41,    -1,    41,    -1,   126,    -1,   101,    -1,
      45,   100,    46,    -1,    45,    46,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   125,   132,   140,   143,   146,   149,   152,
     155,   158,   163,   170,   178,   181,   184,   187,   190,   195,
     202,   210,   213,   216,   219,   226,   232,   235,   241,   246,
     253,   256,   262,   270,   276,   280,   284,   289,   294,   298,
     303,   310,   316,   321,   326,   333,   337,   343,   351,   381,
     413,   418,   425,   432,   439,   447,   455,   466,   469,   479,
     482,   488,   492,   500,   503,   506,   509,   512,   521,   525,
     530,   533,   536,   540,   546,   549,   552,   558,   563,   570,
     573,   576,   579,   582,   591,   594,   597,   600,   603,   606,
     612,   615,   623,   626,   629,   632,   635,   639,   643,   649,
     653,   657,   660,   663,   666,   669,   672,   675,   678,   681,
     684,   687,   690,   693,   696,   699,   702,   706,   710,   713,
     716,   719,   722,   726,   730,   734,   737,   758,   761,   765,
     771,   777,   781,   786,   789,   792,   796,   799,   804,   821,
     828,   831,   837,   842
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_CONST", "KW_EXTERN", "KW_INT",
  "KW_FLOAT", "KW_CHAR", "KW_VOID", "KW_RETURN", "KW_IF", "KW_ELSE",
  "KW_WHILE", "KW_FOR", "KW_BREAK", "KW_CONTINUE", "KW_TYPEDEF",
  "KW_STRUCT", "ID", "GREATER", "SMALLER", "GREATER_EQUAL",
  "SMALLER_EQUAL", "EQUAL", "NOT_EQUAL", "AND", "OR", "NOT", "ASSIGN",
  "SAND", "PLUS", "MINUS", "DPLUS", "FDPLUS", "BDPLUS", "DMINUS",
  "FDMINUS", "BDMINUS", "MULTIPLY", "DIV", "DELIVERY", "SEMI", "COMMA",
  "LP", "RP", "LC", "RC", "LB", "RB", "DOT", "POINTER", "STAR",
  "TRANSFORM", "INT", "FLOAT", "OCT", "HEX", "CHAR", "STRING", "INCLUDE",
  "DEFINE", "PROGRAM", "PRE_INCLUDE", "PRE_DEFINE", "VAR_DEC", "ARG_DEC",
  "INITIALIZER", "BRACE_INITIALIZER", "FUNC_DEC", "VAR_DEF", "STRUCT_DEF",
  "FUNC_DEF", "MODIFIER", "SPECIFIER", "VAR", "TYPE", "ARRAY_DIM",
  "FUNC_CALL", "STMTS", "STMT", "GET_ADDR", "GET_DATA", "GET_ARRAY_DATA",
  "RETURN", "ARG", "IF", "ELSE", "WHILE", "FOR", "FOR_START_STMT",
  "FOR_COND_STMT", "FOR_ITER_EXP", "MUL", "GADDR", "GDATA", "SMINUS",
  "$accept", "Program", "GlobalStmts", "GlobalStmt", "LocalStmts",
  "LocalStmt", "StructMemStmts", "StructMemStmt", "VarDecStmt", "VarDec",
  "FuncDecStmt", "ArgDecs", "ArgDec", "VarDefStmt", "VarDef",
  "FuncDefStmt", "StructDefStmt", "StructDef", "Var", "Stars", "ArrayDims",
  "ArrayDim", "Initializer", "BraceInitializer", "InitializerList",
  "Modifier", "TypeSpecifier", "Type", "Stmt", "Args", "Exp", "If", "Else",
  "While", "For", "ForStartStmt", "ForCondStmt", "ForIterExp", "StmtBlock",
  "PushEnv", "PrePushEnv", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    98,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   101,   101,   101,   101,   101,   102,
     102,   103,   103,   103,   103,   104,   105,   105,   106,   106,
     107,   107,   108,   109,   110,   110,   110,   110,   110,   110,
     110,   111,   111,   111,   111,   112,   112,   112,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   116,
     116,   117,   117,   118,   118,   118,   118,   118,   119,   119,
     120,   120,   120,   120,   121,   121,   121,   122,   122,   123,
     123,   123,   123,   123,   124,   124,   124,   124,   124,   124,
     125,   125,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   127,   127,   128,
     129,   130,   130,   131,   131,   131,   132,   132,   133,   134,
     134,   134,   135,   136
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     1,     2,     3,     1,     3,     7,     6,
       1,     3,     2,     3,     3,     3,     5,     5,     3,     5,
       5,     9,     8,     8,     7,     2,     3,     3,     6,     5,
       1,     2,     2,     4,     5,     5,     3,     1,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     3,     3,     0,     1,     1,     2,     2,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     3,     2,
       1,     3,     1,     1,     1,     1,     1,     4,     5,     3,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     4,     5,     6,     2,
       5,     8,     7,     1,     2,     1,     2,     1,     1,     1,
       3,     2,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    76,    75,    79,    80,    81,    82,     0,    10,
       0,     2,     0,     6,     8,     5,     7,     9,     0,     0,
       0,    74,    11,    83,     1,     4,    50,    45,     0,    57,
       0,     0,    26,     0,     0,    77,     0,     0,    26,    78,
       0,     0,    51,    59,     0,    58,    47,    46,     0,     0,
      52,    83,    25,    33,     0,     0,    62,     0,    60,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    34,    35,    67,    27,    38,    56,     0,
       0,    23,    49,     0,     0,    22,    21,     0,    61,    53,
       0,     0,    92,    93,    94,    95,   115,   116,   122,   121,
     118,     0,     0,    69,    70,    71,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,   119,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,    24,    48,    20,    55,    54,    99,     0,
      90,     0,     0,   125,     0,     0,    68,    39,    37,    40,
      36,   109,   107,   108,   106,   105,   104,   103,   102,   101,
     111,   110,   114,   112,     0,   124,   123,   113,    29,     0,
       0,     0,    32,   100,     0,    97,     0,    72,    73,     0,
     126,     0,     0,     0,     0,   143,    17,    44,     0,     0,
      15,    14,    16,     0,    85,    86,    87,    28,     0,    31,
      91,    98,     0,    18,    89,     0,     0,     0,     0,    42,
      13,    84,    43,     0,    88,     0,     0,     0,    41,     0,
       0,   135,   133,     0,     0,     0,     0,   139,   127,   130,
     134,   137,     0,     0,   141,     0,     0,   128,   136,     0,
     138,     0,   140,   129,   132,     0,   131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,   188,   227,    83,    84,   190,    36,
      14,   130,   131,   191,    37,    16,    17,    18,    32,    33,
      42,    43,   104,   105,   106,    19,    87,    21,   192,   139,
     193,   194,   237,   195,   196,   225,   233,   241,   228,    40,
      54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -174
static const yytype_int16 yypact[] =
{
     744,   -11,  -174,  -174,  -174,  -174,  -174,  -174,    14,  -174,
      56,  -174,   179,  -174,  -174,  -174,  -174,  -174,    95,   293,
      19,     5,  -174,    34,  -174,  -174,    41,  -174,    31,    31,
      82,    92,    33,   116,   119,  -174,   102,   112,    23,  -174,
      96,   -19,  -174,    41,   134,  -174,  -174,  -174,   551,    19,
      41,  -174,  -174,  -174,   120,    35,  -174,   107,  -174,    68,
     131,   711,   158,   711,   711,   711,   482,   519,   159,    27,
     127,   157,   191,   136,   146,  1048,  -174,  -174,  -174,    16,
     150,  -174,  -174,   149,   515,  -174,  -174,    19,  -174,    41,
     160,   583,  -174,  -174,  -174,  -174,   321,  -174,   308,   332,
     321,   -34,   751,  -174,   164,   165,   168,  -174,    19,    19,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,  -174,  -174,   711,   711,   711,   711,   711,   711,    44,
     166,   173,    19,  -174,  -174,  -174,  -174,  -174,  -174,   185,
     784,   711,   190,  -174,   551,   551,  -174,  -174,    36,  -174,
      36,  1230,  1224,   162,  1202,  1180,  1158,  1136,  1114,  1081,
     274,   216,   321,   100,   817,    75,   111,   100,  -174,   218,
      84,   235,  -174,  -174,   711,    75,   711,  -174,  -174,    19,
    -174,   203,   615,   211,   214,  -174,  -174,  -174,   212,   276,
    -174,  -174,  -174,   850,  -174,  -174,  -174,  -174,   334,  -174,
    -174,    75,    36,  -174,  -174,   883,   711,   711,   217,  -174,
    -174,  -174,  -174,   222,  -174,   916,   949,   113,  -174,   392,
     392,  -174,  -174,    19,   982,   647,   450,  -174,   251,  -174,
    -174,  -174,  1015,   679,  -174,   224,   392,  -174,  -174,   392,
    1048,   229,  -174,  -174,  -174,   392,  -174
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,   262,  -174,  -173,  -163,   194,  -174,     3,    10,
    -174,   121,  -174,     0,    -4,  -174,  -174,  -174,   -18,   -24,
     -32,  -174,   239,   242,   -73,   270,     1,   -12,  -174,   122,
     -17,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -153,  -174,
     110
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -144
static const yytype_int16 yytable[] =
{
      15,    20,    38,    13,    44,    45,   189,    35,     2,     3,
     141,    58,    15,    20,    31,    13,   210,    29,    78,     2,
       3,     4,     5,     6,     7,   213,   189,    90,    30,    56,
      22,    75,    23,    34,    57,   189,    80,    26,     2,     3,
       4,     5,     6,     7,    96,    77,    98,    99,   100,   102,
      75,    48,    34,   235,   101,    86,    24,   136,    85,    76,
     129,    48,    28,   189,    48,    49,  -143,   229,   -63,   -63,
      29,   177,   178,   -63,   140,    49,    81,   142,   179,  -142,
     132,    82,    29,   243,    86,   168,   244,    85,    41,   169,
     148,   150,   246,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   147,   149,   162,   163,   164,   165,
     166,   167,    89,    26,   172,    41,     2,     3,     4,     5,
       6,     7,   125,    46,   175,   197,   128,    75,    75,   198,
      34,    60,   121,    47,    50,   122,    27,    51,    28,   123,
      61,    55,    62,    52,    63,    64,    29,   125,    65,   126,
     127,   128,    59,    53,   221,    88,    66,   140,   125,   201,
     126,   202,   128,    79,    68,   205,    92,    93,   -64,   -64,
      94,    95,   132,   -64,    91,    77,    97,   107,   108,    -3,
       1,   110,     2,     3,     4,     5,     6,     7,   109,   215,
     216,   133,   119,   120,   121,   134,     8,   122,   -65,   -65,
     224,   123,   124,   -65,   137,   202,   144,   145,   232,   125,
     170,   126,   127,   128,   146,   171,   240,   222,   223,   181,
       9,     2,     3,     4,     5,     6,     7,   182,   183,   173,
     184,   185,   -66,   -66,   176,    34,    60,   -66,     2,     3,
       4,     5,     6,     7,   203,    61,   119,    62,   121,    63,
      64,   122,    34,    65,   206,   123,   124,   207,   209,   186,
     217,    66,   236,   125,   187,   126,   127,   128,   218,    68,
     242,    92,    93,   245,    25,    94,    95,   181,   135,     2,
       3,     4,     5,     6,     7,   182,   183,    73,   184,   185,
      74,    39,   199,    34,    60,   208,   200,     0,     4,     5,
       6,     7,     0,    61,     0,    62,   121,    63,    64,   122,
      34,    65,     0,   123,   124,     0,     0,   186,     0,    66,
       0,   125,   -12,   126,   127,   128,     0,    68,     0,    92,
      93,     0,     0,    94,    95,   181,     0,     2,     3,     4,
       5,     6,     7,   182,   183,     0,   184,   185,     0,     0,
       0,    34,    60,   121,     0,   125,   122,   126,   127,   128,
       0,    61,     0,    62,   121,    63,    64,     0,   125,    65,
     126,   127,   128,     0,     0,   186,     0,    66,     0,   125,
     212,   126,   127,   128,     0,    68,     0,    92,    93,     0,
       0,    94,    95,   181,     0,     2,     3,     4,     5,     6,
       7,   182,   183,     0,   184,   185,     0,     0,     0,    34,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,    62,     0,    63,    64,     0,     0,    65,     0,     0,
       0,     0,     0,   186,     0,    66,     0,   226,     0,     0,
       0,     0,     0,    68,     0,    92,    93,     0,     0,    94,
      95,   181,     0,     2,     3,     4,     5,     6,     7,   182,
     183,     0,   184,   185,     0,     0,     0,    34,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,    62,
       0,    63,    64,     0,     0,    65,     0,     4,     5,     6,
       7,   186,     0,    66,     0,     0,   234,     0,     0,    34,
      60,    68,     0,    92,    93,     0,     0,    94,    95,    61,
       0,    62,     0,    63,    64,     0,    80,    65,     2,     3,
       4,     5,     6,     7,     0,    66,     0,     0,     0,     0,
       0,     0,    34,    68,     0,    92,    93,    60,     0,    94,
      95,     0,     0,     0,     0,     0,    61,     0,    62,     0,
      63,    64,     0,     0,    65,     0,    81,     0,     0,     0,
       0,   -19,    66,     0,    67,   103,     0,     0,     0,    60,
      68,     0,    69,    70,     0,     0,    71,    72,    61,     0,
      62,     0,    63,    64,     0,     0,    65,     0,     0,     0,
       0,     0,     0,     0,    66,     0,    67,     0,     0,     0,
       0,    60,    68,     0,    69,    70,     0,     0,    71,    72,
      61,     0,    62,     0,    63,    64,     0,     0,    65,     0,
       0,     0,     0,     0,     0,     0,    66,   138,     0,     0,
       0,     0,     0,    60,    68,     0,    92,    93,     0,     0,
      94,    95,    61,     0,    62,     0,    63,    64,     0,     0,
      65,     0,     0,     0,     0,     0,   204,     0,    66,     0,
       0,     0,     0,     0,     0,    60,    68,     0,    92,    93,
       0,     0,    94,    95,    61,     0,    62,     0,    63,    64,
       0,     0,    65,     0,     0,     0,     0,     0,   231,     0,
      66,     0,     0,     0,     0,     0,     0,    60,    68,     0,
      92,    93,     0,     0,    94,    95,    61,     0,    62,     0,
      63,    64,     0,     0,    65,     0,     0,     0,     0,     0,
       0,     0,    66,   239,     0,     0,     0,     0,     0,    60,
      68,     0,    92,    93,     0,     0,    94,    95,    61,     0,
      62,     0,    63,    64,     0,     1,    65,     2,     3,     4,
       5,     6,     7,     0,    66,     0,     0,     0,     0,     0,
       0,     8,    68,     0,    92,    93,     0,     0,    94,    95,
     110,   111,   112,   113,   114,   115,   116,   117,     0,   118,
       0,   119,   120,   121,     0,     9,   122,     0,     0,     0,
     123,   124,     0,     0,     0,   143,     0,     0,   125,     0,
     126,   127,   128,   110,   111,   112,   113,   114,   115,   116,
     117,     0,   118,     0,   119,   120,   121,     0,     0,   122,
       0,     0,     0,   123,   124,     0,   174,     0,     0,     0,
       0,   125,     0,   126,   127,   128,   110,   111,   112,   113,
     114,   115,   116,   117,     0,   118,     0,   119,   120,   121,
       0,     0,   122,     0,     0,     0,   123,   124,     0,     0,
       0,     0,     0,     0,   125,   180,   126,   127,   128,   110,
     111,   112,   113,   114,   115,   116,   117,     0,   118,     0,
     119,   120,   121,     0,     0,   122,     0,     0,     0,   123,
     124,   211,     0,     0,     0,     0,     0,   125,     0,   126,
     127,   128,   110,   111,   112,   113,   114,   115,   116,   117,
       0,   118,     0,   119,   120,   121,     0,     0,   122,     0,
       0,     0,   123,   124,   214,     0,     0,     0,     0,     0,
     125,     0,   126,   127,   128,   110,   111,   112,   113,   114,
     115,   116,   117,     0,   118,     0,   119,   120,   121,     0,
       0,   122,     0,     0,     0,   123,   124,     0,     0,     0,
     219,     0,     0,   125,     0,   126,   127,   128,   110,   111,
     112,   113,   114,   115,   116,   117,     0,   118,     0,   119,
     120,   121,     0,     0,   122,     0,     0,     0,   123,   124,
       0,     0,     0,   220,     0,     0,   125,     0,   126,   127,
     128,   110,   111,   112,   113,   114,   115,   116,   117,     0,
     118,     0,   119,   120,   121,     0,     0,   122,     0,     0,
       0,   123,   124,   230,     0,     0,     0,     0,     0,   125,
       0,   126,   127,   128,   110,   111,   112,   113,   114,   115,
     116,   117,     0,   118,     0,   119,   120,   121,     0,     0,
     122,     0,     0,     0,   123,   124,   238,     0,     0,     0,
       0,     0,   125,     0,   126,   127,   128,   110,   111,   112,
     113,   114,   115,   116,   117,     0,   118,     0,   119,   120,
     121,     0,     0,   122,     0,     0,     0,   123,   124,     0,
       0,     0,     0,     0,     0,   125,     0,   126,   127,   128,
     110,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,   119,   120,   121,     0,     0,   122,     0,     0,     0,
     123,   124,     0,     0,     0,     0,     0,     0,   125,     0,
     126,   127,   128,   110,   111,   112,   113,   114,   115,   116,
       0,     0,     0,     0,   119,   120,   121,     0,     0,   122,
       0,     0,     0,   123,   124,   110,   111,   112,   113,   114,
     115,   125,     0,   126,   127,   128,   119,   120,   121,     0,
       0,   122,     0,     0,     0,   123,   124,   110,   111,   112,
     113,   114,     0,   125,     0,   126,   127,   128,   119,   120,
     121,     0,     0,   122,     0,     0,     0,   123,   124,   110,
     111,   112,   113,     0,     0,   125,     0,   126,   127,   128,
     119,   120,   121,     0,     0,   122,     0,     0,     0,   123,
     124,   110,   111,   112,     0,     0,     0,   125,     0,   126,
     127,   128,   119,   120,   121,     0,     0,   122,     0,     0,
       0,   123,   124,   110,     0,   112,     0,     0,     0,   125,
       0,   126,   127,   128,   119,   120,   121,     0,     0,   122,
     119,   120,   121,   123,   124,   122,     0,     0,     0,   123,
     124,   125,     0,   126,   127,   128,     0,   125,     0,   126,
     127,   128
};

static const yytype_int16 yycheck[] =
{
       0,     0,    20,     0,    28,    29,   169,    19,     3,     4,
      44,    43,    12,    12,    18,    12,   189,    51,    50,     3,
       4,     5,     6,     7,     8,   198,   189,    59,    18,    48,
      41,    48,    18,    17,    53,   198,     1,    18,     3,     4,
       5,     6,     7,     8,    61,    49,    63,    64,    65,    66,
      67,    28,    17,   226,    66,    55,     0,    89,    55,    49,
      44,    28,    43,   226,    28,    42,    43,   220,    41,    42,
      51,   144,   145,    46,    91,    42,    41,   101,    42,    45,
      79,    46,    51,   236,    84,    41,   239,    84,    47,    45,
     108,   109,   245,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   108,   109,   123,   124,   125,   126,
     127,   128,    44,    18,   132,    47,     3,     4,     5,     6,
       7,     8,    47,    41,   141,    41,    51,   144,   145,    45,
      17,    18,    32,    41,    18,    35,    41,    18,    43,    39,
      27,    45,    29,    41,    31,    32,    51,    47,    35,    49,
      50,    51,    18,    41,    41,    48,    43,   174,    47,   176,
      49,   179,    51,    43,    51,   182,    53,    54,    41,    42,
      57,    58,   171,    46,    43,   179,    18,    18,    42,     0,
       1,    19,     3,     4,     5,     6,     7,     8,    42,   206,
     207,    41,    30,    31,    32,    46,    17,    35,    41,    42,
     217,    39,    40,    46,    44,   223,    42,    42,   225,    47,
      44,    49,    50,    51,    46,    42,   233,   217,   217,     1,
      41,     3,     4,     5,     6,     7,     8,     9,    10,    44,
      12,    13,    41,    42,    44,    17,    18,    46,     3,     4,
       5,     6,     7,     8,    41,    27,    30,    29,    32,    31,
      32,    35,    17,    35,    43,    39,    40,    43,    46,    41,
      43,    43,    11,    47,    46,    49,    50,    51,    46,    51,
      46,    53,    54,    44,    12,    57,    58,     1,    84,     3,
       4,     5,     6,     7,     8,     9,    10,    48,    12,    13,
      48,    21,   171,    17,    18,   185,   174,    -1,     5,     6,
       7,     8,    -1,    27,    -1,    29,    32,    31,    32,    35,
      17,    35,    -1,    39,    40,    -1,    -1,    41,    -1,    43,
      -1,    47,    46,    49,    50,    51,    -1,    51,    -1,    53,
      54,    -1,    -1,    57,    58,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    17,    18,    32,    -1,    47,    35,    49,    50,    51,
      -1,    27,    -1,    29,    32,    31,    32,    -1,    47,    35,
      49,    50,    51,    -1,    -1,    41,    -1,    43,    -1,    47,
      46,    49,    50,    51,    -1,    51,    -1,    53,    54,    -1,
      -1,    57,    58,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    43,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    53,    54,    -1,    -1,    57,
      58,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    -1,    -1,    35,    -1,     5,     6,     7,
       8,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,    17,
      18,    51,    -1,    53,    54,    -1,    -1,    57,    58,    27,
      -1,    29,    -1,    31,    32,    -1,     1,    35,     3,     4,
       5,     6,     7,     8,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    51,    -1,    53,    54,    18,    -1,    57,
      58,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    -1,
      31,    32,    -1,    -1,    35,    -1,    41,    -1,    -1,    -1,
      -1,    46,    43,    -1,    45,    46,    -1,    -1,    -1,    18,
      51,    -1,    53,    54,    -1,    -1,    57,    58,    27,    -1,
      29,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    -1,    -1,    -1,
      -1,    18,    51,    -1,    53,    54,    -1,    -1,    57,    58,
      27,    -1,    29,    -1,    31,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    18,    51,    -1,    53,    54,    -1,    -1,
      57,    58,    27,    -1,    29,    -1,    31,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    51,    -1,    53,    54,
      -1,    -1,    57,    58,    27,    -1,    29,    -1,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    18,    51,    -1,
      53,    54,    -1,    -1,    57,    58,    27,    -1,    29,    -1,
      31,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    18,
      51,    -1,    53,    54,    -1,    -1,    57,    58,    27,    -1,
      29,    -1,    31,    32,    -1,     1,    35,     3,     4,     5,
       6,     7,     8,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    51,    -1,    53,    54,    -1,    -1,    57,    58,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      -1,    30,    31,    32,    -1,    41,    35,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      49,    50,    51,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    -1,    30,    31,    32,    -1,    -1,    35,
      -1,    -1,    -1,    39,    40,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    -1,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    -1,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,
      50,    51,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    -1,    30,    31,    32,    -1,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    51,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    -1,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    49,    50,    51,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    -1,    30,
      31,    32,    -1,    -1,    35,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    49,    50,
      51,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      28,    -1,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    28,    -1,    30,    31,    32,    -1,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    51,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    -1,    30,    31,
      32,    -1,    -1,    35,    -1,    -1,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    51,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,    35,
      -1,    -1,    -1,    39,    40,    19,    20,    21,    22,    23,
      24,    47,    -1,    49,    50,    51,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    -1,    39,    40,    19,    20,    21,
      22,    23,    -1,    47,    -1,    49,    50,    51,    30,    31,
      32,    -1,    -1,    35,    -1,    -1,    -1,    39,    40,    19,
      20,    21,    22,    -1,    -1,    47,    -1,    49,    50,    51,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,    39,
      40,    19,    20,    21,    -1,    -1,    -1,    47,    -1,    49,
      50,    51,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    40,    19,    -1,    21,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    30,    31,    32,    -1,    -1,    35,
      30,    31,    32,    39,    40,    35,    -1,    -1,    -1,    39,
      40,    47,    -1,    49,    50,    51,    -1,    47,    -1,    49,
      50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,    17,    41,
      97,    98,    99,   104,   106,   109,   111,   112,   113,   121,
     122,   123,    41,    18,     0,    98,    18,    41,    43,    51,
     105,   110,   114,   115,    17,   123,   105,   110,   114,   121,
     135,    47,   116,   117,   115,   115,    41,    41,    28,    42,
      18,    18,    41,    41,   136,    45,    48,    53,   116,    18,
      18,    27,    29,    31,    32,    35,    43,    45,    51,    53,
      54,    57,    58,   118,   119,   126,   105,   110,   116,    43,
       1,    41,    46,   102,   103,   104,   109,   122,    48,    44,
     116,    43,    53,    54,    57,    58,   126,    18,   126,   126,
     126,   123,   126,    46,   118,   119,   120,    18,    42,    42,
      19,    20,    21,    22,    23,    24,    25,    26,    28,    30,
      31,    32,    35,    39,    40,    47,    49,    50,    51,    44,
     107,   108,   122,    41,    46,   102,   116,    44,    44,   125,
     126,    44,   115,    44,    42,    42,    46,   110,   114,   110,
     114,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,    41,    45,
      44,    42,   114,    44,    42,   126,    44,   120,   120,    42,
      48,     1,     9,    10,    12,    13,    41,    46,   100,   101,
     104,   109,   124,   126,   127,   129,   130,    41,    45,   107,
     125,   126,   114,    41,    41,   126,    43,    43,   136,    46,
     100,    41,    46,   100,    41,   126,   126,    43,    46,    44,
      44,    41,   109,   122,   126,   131,    45,   101,   134,   134,
      41,    41,   126,   132,    46,   100,    11,   128,    41,    44,
     126,   133,    46,   134,   134,    44,   134
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 114 "src/parser.y"
    {
            (yyval.node) = NULL;
            astTree = createNode(PROGRAM, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
            appendNodes(astTree, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 125 "src/parser.y"
    {
                if ((yyvsp[(1) - (1)].node) != NULL) {
                    (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                } else {
                    (yyval.node) = createNode(STMTS, NULL, yylineno, level, 0);
                }
            ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 132 "src/parser.y"
    {
                if ((yyvsp[(1) - (2)].node) != NULL) {
                    prependNode((yyvsp[(2) - (2)].node),(yyvsp[(1) - (2)].node));
                }
                (yyval.node) = (yyvsp[(2) - (2)].node);
            ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 140 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 143 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 146 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 149 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 152 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 155 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 158 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 163 "src/parser.y"
    {
                if ((yyvsp[(1) - (1)].node) != NULL) {
                    (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                } else {
                    (yyval.node) = createNode(STMTS, NULL, yylineno, level, 0);
                }
            ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 170 "src/parser.y"
    {
                if ((yyvsp[(1) - (2)].node) != NULL) {
                    prependNode((yyvsp[(2) - (2)].node),(yyvsp[(1) - (2)].node));
                }
                (yyval.node) = (yyvsp[(2) - (2)].node);
            ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 178 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 181 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 184 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 187 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 190 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 195 "src/parser.y"
    {
                    if ((yyvsp[(1) - (1)].node) != NULL) {
                        (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                    } else {
                        (yyval.node) = createNode(STMTS, NULL, yylineno, level, 0);
                    }
                ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 202 "src/parser.y"
    {
                    if ((yyvsp[(1) - (2)].node) != NULL) {
                        prependNode((yyvsp[(2) - (2)].node),(yyvsp[(1) - (2)].node));
                    }
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 210 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 213 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 216 "src/parser.y"
    {
                    (yyval.node) = NULL;
                ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 219 "src/parser.y"
    {
                    (yyval.node) = NULL;
                ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 226 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (3)].node), (yyvsp[(1) - (3)].node));
                (yyval.node) =(yyvsp[(2) - (3)].node);
            ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 232 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEC, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 235 "src/parser.y"
    {
            appendNodes((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            (yyval.node) = createNode(VAR_DEC, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(1) - (3)].node));
        ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 241 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (7)].node), (yyvsp[(1) - (7)].node));
                (yyval.node) = createNode(FUNC_DEC, NULL, (yyvsp[(2) - (7)].node)->line, level, 2, (yyvsp[(2) - (7)].node), (yyvsp[(5) - (7)].node));
                moveToPrevRuntime();
            ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 246 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node));
                (yyval.node) = createNode(FUNC_DEC, NULL, (yyvsp[(2) - (6)].node)->line, level, 1, (yyvsp[(2) - (6)].node));
                moveToPrevRuntime();
            ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 253 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 256 "src/parser.y"
    {
            appendNodes((yyvsp[(1) - (3)].node)->children[0], (yyvsp[(3) - (3)].node));
            (yyval.node) = (yyvsp[(1) - (3)].node);
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 262 "src/parser.y"
    {
            analysisVar((yyvsp[(2) - (2)].node), (yyvsp[(1) - (2)].node));
            (yyval.node) = createNode(ARG_DEC, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
        ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 270 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (3)].node), (yyvsp[(1) - (3)].node));
                (yyval.node) = (yyvsp[(2) - (3)].node);
            ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 276 "src/parser.y"
    {
            (yyvsp[(1) - (3)].node)->initializer = (yyvsp[(3) - (3)].node);
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(1) - (3)].node));
        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 280 "src/parser.y"
    {
            (yyvsp[(1) - (3)].node)->initializer = (yyvsp[(3) - (3)].node);
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(1) - (3)].node));
        ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 284 "src/parser.y"
    {
            (yyvsp[(1) - (5)].node)->initializer = (yyvsp[(3) - (5)].node);
            appendNode((yyvsp[(1) - (5)].node), (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 1, (yyvsp[(1) - (5)].node));
        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 289 "src/parser.y"
    {
            (yyvsp[(1) - (5)].node)->initializer = (yyvsp[(3) - (5)].node);
            appendNode((yyvsp[(1) - (5)].node), (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 1, (yyvsp[(1) - (5)].node));
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 294 "src/parser.y"
    {
            appendNodes((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(1) - (3)].node));
        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 298 "src/parser.y"
    {
            (yyvsp[(1) - (5)].node)->initializer = (yyvsp[(3) - (5)].node);
            appendNodes((yyvsp[(1) - (5)].node), (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 1, (yyvsp[(1) - (5)].node));
        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 303 "src/parser.y"
    {
            (yyvsp[(1) - (5)].node)->initializer = (yyvsp[(3) - (5)].node);
            appendNodes((yyvsp[(1) - (5)].node), (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 1, (yyvsp[(1) - (5)].node));
        ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 310 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (9)].node), (yyvsp[(1) - (9)].node));
                (yyval.node) = createNode(FUNC_DEF, NULL, (yyvsp[(2) - (9)].node)->line, level, 3, (yyvsp[(2) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(8) - (9)].node));
                
                moveToPrevRuntime();
            ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 316 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (8)].node), (yyvsp[(1) - (8)].node));
                (yyval.node) = createNode(FUNC_DEF, NULL, (yyvsp[(2) - (8)].node)->line, level, 3, (yyvsp[(2) - (8)].node), (yyvsp[(7) - (8)].node));
                moveToPrevRuntime();
            ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 321 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (8)].node), (yyvsp[(1) - (8)].node));
                (yyval.node) = createNode(FUNC_DEF, NULL, (yyvsp[(2) - (8)].node)->line, level, 3, (yyvsp[(2) - (8)].node), (yyvsp[(5) - (8)].node));
                moveToPrevRuntime();
            ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 326 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (7)].node), (yyvsp[(1) - (7)].node));
                (yyval.node) = createNode(FUNC_DEF, NULL, (yyvsp[(2) - (7)].node)->line, level, 1, (yyvsp[(2) - (7)].node));
                moveToPrevRuntime();
            ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 333 "src/parser.y"
    {
                    removeNode((yyvsp[(1) - (2)].node), 0);
                    (yyval.node) = (yyvsp[(1) - (2)].node);
                ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 337 "src/parser.y"
    {
                    analysisVar((yyvsp[(2) - (3)].node), (yyvsp[(1) - (3)].node)->children[0]);
                    removeNode((yyvsp[(1) - (3)].node), 0);
                    appendNode((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 343 "src/parser.y"
    {
                    analysisVar((yyvsp[(2) - (3)].node), (yyvsp[(1) - (3)].node)->children[0]);
                    removeNode((yyvsp[(1) - (3)].node), 0);
                    appendNode((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 351 "src/parser.y"
    {

                /* get struct type `struct_id` */
                char *type = (char*)malloc(sizeof(char)*strlen((yyvsp[(2) - (6)].node)->val) + sizeof(char) * 7);
                strcpy(type, "struct_");
                strcat(type, (yyvsp[(2) - (6)].node)->val);

                Node *specifier = createNode(SPECIFIER, NULL, (yyvsp[(1) - (6)].node)->line, level, 0);
                specifier->valType = type;
                specifier->valModifier = "default";

                (yyval.node) = createNode(STRUCT_DEF, NULL, (yyvsp[(1) - (6)].node)->line, level, 2, specifier, (yyvsp[(5) - (6)].node));
                /* add property */
                (yyval.node)->lexeme = (yyvsp[(2) - (6)].node)->val;
                (yyval.node)->valType = "struct";
                (yyval.node)->valModifier = "default";
                (yyval.node)->width = 4;

                /* namespace runtime and register */
                currRuntime->namespace = type;
                pushRuntime(structEnv, currRuntime);
                moveToPrevRuntime();

                /* add struct id */
                addSymbol(currRuntime, (yyval.node));

                (yyval.node)->symbol->type = (yyval.node)->valType;
                (yyval.node)->symbol->complexType = (yyval.node)->complexType;
                (yyval.node)->symbol->isDefination = 1;
            ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 381 "src/parser.y"
    {
                /* get struct type `struct_id` */
                char *type = (char*)malloc(sizeof(char)*strlen((yyvsp[(2) - (5)].node)->val) + sizeof(char) * 7);
                strcpy(type, "struct_");
                strcat(type, (yyvsp[(2) - (5)].node)->val);

                Node *specifier = createNode(SPECIFIER, NULL, (yyvsp[(1) - (5)].node)->line, level, 0);
                specifier->valType = type;
                specifier->valModifier = "default";

                (yyval.node) = createNode(STRUCT_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 1, specifier);
                /* add property */
                (yyval.node)->lexeme = (yyvsp[(2) - (5)].node)->val;
                (yyval.node)->valType = "struct";
                (yyval.node)->valModifier = "default";
                (yyval.node)->width = 4;

                /* namespace runtime and register */
                currRuntime->namespace = type;
                pushRuntime(structEnv, currRuntime);
                moveToPrevRuntime();
                
                /* add struct id */
                addSymbol(currRuntime, (yyval.node));

                (yyval.node)->symbol->type = (yyval.node)->valType;
                (yyval.node)->symbol->complexType = (yyval.node)->complexType;
                (yyval.node)->symbol->isDefination = 1;
            ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 413 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
        (yyval.node)->lexeme = (yyvsp[(1) - (1)].node)->val;
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 418 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr_const";
        (yyval.node)->lexeme = (yyvsp[(1) - (2)].node)->val;
        (yyval.node)->arrayDim = (yyvsp[(2) - (2)].node);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 425 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr";
        (yyval.node)->lexeme = (yyvsp[(2) - (2)].node)->val;
        (yyval.node)->ptrStar = atoi((yyvsp[(1) - (2)].node)->val);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 432 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (4)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr";
        (yyval.node)->lexeme = (yyvsp[(3) - (4)].node)->val;
        (yyval.node)->ptrStar = atoi((yyvsp[(2) - (4)].node)->val);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 439 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (5)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr";
        (yyval.node)->lexeme = (yyvsp[(3) - (5)].node)->val;
        (yyval.node)->ptrStar = atoi((yyvsp[(2) - (5)].node)->val);
        (yyval.node)->arrayDim = (yyvsp[(4) - (5)].node);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 447 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (5)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr";
        (yyval.node)->lexeme = (yyvsp[(3) - (5)].node)->val;
        (yyval.node)->ptrStar = atoi((yyvsp[(2) - (5)].node)->val);
        (yyval.node)->arrayDim = (yyvsp[(5) - (5)].node);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 455 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (3)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr_arr";
        (yyval.node)->lexeme = (yyvsp[(2) - (3)].node)->val;
        (yyval.node)->ptrStar = atoi((yyvsp[(1) - (3)].node)->val);
        (yyval.node)->arrayDim = (yyvsp[(3) - (3)].node);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 466 "src/parser.y"
    {
            (yyval.node) = createNode(STAR, "1", (yyvsp[(1) - (1)].node)->line, level, 0);
        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 469 "src/parser.y"
    {
            int num = atoi((yyvsp[(2) - (2)].node)->val);
            itoa(num + 1, (yyvsp[(2) - (2)].node)->val, 10);
            (yyvsp[(2) - (2)].node)->line = (yyvsp[(1) - (2)].node)->line;
            (yyval.node) = (yyvsp[(2) - (2)].node);
        ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 479 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 482 "src/parser.y"
    {
                (yyvsp[(1) - (2)].node)->arrayDim = (yyvsp[(2) - (2)].node);
                (yyval.node) = (yyvsp[(1) - (2)].node);
            ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 488 "src/parser.y"
    {
                (yyval.node) = createNode(ARRAY_DIM, NULL, (yyvsp[(1) - (3)].node)->line, level, 0);
                (yyval.node)->val = (yyvsp[(2) - (3)].node)->val;
            ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 492 "src/parser.y"
    {
                (yyval.node) = createNode(ARRAY_DIM, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
                (yyval.node)->val = "0";
            ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 500 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 503 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 506 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 509 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 512 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 521 "src/parser.y"
    {
                        (yyval.node) = createNode(BRACE_INITIALIZER, NULL, (yyvsp[(1) - (3)].node)->line, level, 0);
                        appendNodes((yyval.node), (yyvsp[(2) - (3)].node));
                    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 525 "src/parser.y"
    {
                        (yyval.node) = createNode(BRACE_INITIALIZER, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
                    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 530 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 533 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 536 "src/parser.y"
    {
                    prependNodes((yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
                    (yyval.node) = (yyvsp[(3) - (3)].node);
                ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 540 "src/parser.y"
    {
                    prependNodes((yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
                    (yyval.node) = (yyvsp[(3) - (3)].node);
                ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 546 "src/parser.y"
    {
                (yyval.string) = "default";
            ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 549 "src/parser.y"
    {
                (yyval.string) = "extern";
            ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 552 "src/parser.y"
    {
                (yyval.string) = "const";
            ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 558 "src/parser.y"
    {
                    (yyval.node) = createNode(SPECIFIER, NULL, -1, -1, 0);
                    (yyval.node)->valType = (yyvsp[(2) - (2)].string);
                    (yyval.node)->valModifier = (yyvsp[(1) - (2)].string);
                ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 563 "src/parser.y"
    {
                    (yyval.node) = createNode(SPECIFIER, NULL, -1, -1, 0);
                    (yyval.node)->valType = (yyvsp[(1) - (2)].string);
                    (yyval.node)->valModifier = (yyvsp[(2) - (2)].string);
                ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 570 "src/parser.y"
    {
            (yyval.string) = "int";
        ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 573 "src/parser.y"
    {
            (yyval.string) = "float";
        ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 576 "src/parser.y"
    {
            (yyval.string) = "char";
        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 579 "src/parser.y"
    {
            (yyval.string) = "void";
        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 582 "src/parser.y"
    {
            char *type = (char*)malloc(sizeof(char)*strlen((yyvsp[(2) - (2)].node)->val) + sizeof(char) * 7);
            strcpy(type, "struct_");
            strcat(type, (yyvsp[(2) - (2)].node)->val);
            (yyval.string) = type;
        ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 591 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 594 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 597 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 600 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 603 "src/parser.y"
    {
            (yyval.node) = createNode(RETURN, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(2) - (3)].node));
        ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 606 "src/parser.y"
    {
            (yyval.node) = createNode(RETURN, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 612 "src/parser.y"
    {
            (yyval.node) = createNode(ARG, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 615 "src/parser.y"
    {
            prependNode((yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
            (yyval.node) = (yyvsp[(3) - (3)].node);
        ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 623 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 626 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 629 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 632 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 635 "src/parser.y"
    {
        (yyvsp[(1) - (1)].node)->runtime = currRuntime;
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 639 "src/parser.y"
    {
        (yyval.node) = createNode(TRANSFORM, NULL, (yyvsp[(1) - (4)].node)->line, level, 1, (yyvsp[(4) - (4)].node));
        (yyval.node)->valType = (yyvsp[(2) - (4)].string);
    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 643 "src/parser.y"
    {
        (yyval.node) = createNode(TRANSFORM, NULL, (yyvsp[(1) - (5)].node)->line, level, 1, (yyvsp[(5) - (5)].node));
        (yyval.node)->valType = (yyvsp[(2) - (5)].string);
        (yyval.node)->ptrStar = atoi((yyvsp[(3) - (5)].node)->val);
        (yyval.node)->complexType = "ptr";
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 649 "src/parser.y"
    {
        (yyvsp[(1) - (3)].node)->runtime = currRuntime;
        (yyval.node) = createNode(FUNC_CALL, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(1) - (3)].node));
    ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 653 "src/parser.y"
    {
        (yyvsp[(1) - (4)].node)->runtime = currRuntime;
        (yyval.node) = createNode(FUNC_CALL, NULL, (yyvsp[(1) - (4)].node)->line, level, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 657 "src/parser.y"
    {
        (yyval.node) = createNode(ASSIGN, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 660 "src/parser.y"
    {
        (yyval.node) = createNode(OR, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 663 "src/parser.y"
    {
        (yyval.node) = createNode(AND, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 666 "src/parser.y"
    {
        (yyval.node) = createNode(NOT_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 669 "src/parser.y"
    {
        (yyval.node) = createNode(EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 672 "src/parser.y"
    {
        (yyval.node) = createNode(SMALLER_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 675 "src/parser.y"
    {
        (yyval.node) = createNode(SMALLER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 678 "src/parser.y"
    {
        (yyval.node) = createNode(GREATER_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 681 "src/parser.y"
    {
        (yyval.node) = createNode(GREATER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 684 "src/parser.y"
    {
        (yyval.node) = createNode(MINUS, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 687 "src/parser.y"
    {
        (yyval.node) = createNode(PLUS, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 690 "src/parser.y"
    {
        (yyval.node) = createNode(DELIVERY, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 693 "src/parser.y"
    {
        (yyval.node) = createNode(MULTIPLY, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 696 "src/parser.y"
    {
        (yyval.node) = createNode(DIV, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 699 "src/parser.y"
    {
        (yyval.node) = createNode(NOT, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 702 "src/parser.y"
    {
        (yyval.node) = createNode(GET_ADDR, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
        (yyvsp[(2) - (2)].node)->runtime = currRuntime;
    ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 706 "src/parser.y"
    {
        (yyval.node) = createNode(GET_DATA, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
        (yyvsp[(2) - (2)].node)->runtime = currRuntime;
    ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 710 "src/parser.y"
    {
        (yyval.node) = createNode(FDMINUS, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 713 "src/parser.y"
    { 
        (yyval.node) = createNode(BDMINUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
    ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 716 "src/parser.y"
    {
        (yyval.node) = createNode(BDPLUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
    ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 719 "src/parser.y"
    {
        (yyval.node) = createNode(FDPLUS, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 722 "src/parser.y"
    {
        Node *node = createNode(INT, "0", (yyvsp[(1) - (2)].node)->line, level, 0);
        (yyval.node) = createNode(MINUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 2, node, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 726 "src/parser.y"
    {
        // specific for ID
        (yyval.node) = createNode(POINTER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 730 "src/parser.y"
    {
        // specific for ID
        (yyval.node) = createNode(DOT, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 734 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 737 "src/parser.y"
    {
        // read array data
        (yyval.node) = createNode(GET_ARRAY_DATA, NULL, (yyvsp[(1) - (4)].node)->line, level, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 758 "src/parser.y"
    {
        (yyval.node) = createNode(IF, NULL, (yyvsp[(1) - (5)].node)->line, level, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 761 "src/parser.y"
    {
        (yyval.node) = createNode(IF, NULL, (yyvsp[(1) - (6)].node)->line, level, 3, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 765 "src/parser.y"
    {
            (yyval.node) = createNode(ELSE, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
        ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 771 "src/parser.y"
    {
            (yyval.node) = createNode(WHILE, NULL, (yyvsp[(1) - (5)].node)->line, level, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
        ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 777 "src/parser.y"
    {
        (yyval.node) = createNode(FOR, NULL, (yyvsp[(1) - (8)].node)->line, level, 4, (yyvsp[(4) - (8)].node), (yyvsp[(5) - (8)].node), (yyvsp[(6) - (8)].node), (yyvsp[(8) - (8)].node));
        moveToPrevRuntime();
    ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 781 "src/parser.y"
    {
        (yyval.node) = createNode(FOR, NULL, (yyvsp[(1) - (7)].node)->line, level, 3, (yyvsp[(4) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node));
        moveToPrevRuntime();
    ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 786 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 789 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
                ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 792 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
                ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 796 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_COND_STMT, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
                ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 799 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_COND_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
                ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 804 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_ITER_EXP, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));;
                ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 821 "src/parser.y"
    {
                if ((yyvsp[(1) - (1)].node) != NULL) {
                    (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                } else {
                    (yyval.node) = createNode(STMTS, NULL, yylineno, level, 0);
                }
            ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 828 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(2) - (3)].node);
            ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 831 "src/parser.y"
    {
                (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
            ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 837 "src/parser.y"
    {
            // add runtime
            moveToNextRuntime(level);
        ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 842 "src/parser.y"
    {
                // previously add runtime before level go next
                moveToNextRuntime(level + 1);
            ;}
    break;



/* Line 1455 of yacc.c  */
#line 3398 "src/parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 846 "src/parser.y"

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}

