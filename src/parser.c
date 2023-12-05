
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
     INITIALIZER_LIST = 320,
     ARRAY_DEC = 321,
     VAR_DEF = 322,
     STRUCT_DEF_STMT = 323,
     STRUCT_DEF = 324,
     MODIFIER = 325,
     VAR = 326,
     VAR_ARRAY = 327,
     VAR_POINTER = 328,
     VAR_ARRAY_POINTER = 329,
     VAR_POINTER_ARRAY = 330,
     ARRAY_DIM = 331,
     VAR_DEC_STMT = 332,
     VAR_DEF_STMT = 333,
     ARRAY_DEC_STMT = 334,
     FUNC_DEC_STMT = 335,
     FUNC_DEF_STMT = 336,
     FUNC_CALL = 337,
     STMTS = 338,
     STMT = 339,
     GET_ADDR = 340,
     GET_DATA = 341,
     RETURN = 342,
     ARG = 343,
     IF = 344,
     ELSE = 345,
     WHILE = 346,
     FOR = 347,
     FOR_START_STMT = 348,
     FOR_COND_STMT = 349,
     FOR_ITER_EXP = 350
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 12 "src/parser.y"

    struct Node* node;



/* Line 214 of yacc.c  */
#line 220 "src/parser.c"
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
#line 245 "src/parser.c"

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   932

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  214

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
      20,    23,    25,    28,    30,    32,    34,    36,    39,    44,
      46,    50,    58,    65,    67,    71,    75,    80,    84,    88,
      94,   100,   104,   110,   116,   126,   135,   144,   152,   154,
     157,   160,   165,   171,   177,   181,   182,   184,   186,   188,
     191,   193,   196,   200,   204,   207,   209,   211,   213,   215,
     217,   221,   224,   226,   228,   232,   236,   238,   240,   242,
     244,   247,   249,   251,   253,   257,   259,   263,   267,   271,
     275,   279,   283,   287,   291,   295,   299,   303,   307,   311,
     315,   319,   323,   327,   330,   333,   336,   339,   342,   345,
     349,   354,   358,   361,   364,   366,   368,   370,   372,   374,
     380,   387,   390,   396,   404,   411,   413,   416,   418,   421,
     423,   425,   427,   431
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      97,     0,    -1,    98,    -1,    99,    -1,    99,    98,    -1,
     107,    -1,   102,    -1,   109,    -1,   104,    -1,    41,    -1,
       1,    41,    -1,   101,    -1,   101,   100,    -1,   107,    -1,
     102,    -1,   119,    -1,    41,    -1,     1,    41,    -1,   111,
     118,   103,    41,    -1,   110,    -1,   110,    42,   103,    -1,
     111,   118,    18,    43,   105,    44,    41,    -1,   111,   118,
      18,    43,    44,    41,    -1,   106,    -1,   106,    42,   105,
      -1,   111,   118,   110,    -1,   111,   118,   108,    41,    -1,
     110,    28,   115,    -1,   110,    28,   116,    -1,   110,    28,
     116,    42,    18,    -1,   110,    28,   115,    42,    18,    -1,
     110,    42,   108,    -1,   110,    28,   115,    42,   108,    -1,
     110,    28,   116,    42,   108,    -1,   111,   118,    18,    43,
     105,    44,    45,   100,    46,    -1,   111,   118,    18,    43,
      44,    45,   100,    46,    -1,   111,   118,    18,    43,   105,
      44,    45,    46,    -1,   111,   118,    18,    43,    44,    45,
      46,    -1,    18,    -1,    18,   113,    -1,   112,    18,    -1,
      43,   112,    18,    44,    -1,    43,   112,    18,   113,    44,
      -1,    43,   112,    18,    44,   113,    -1,   112,    18,   113,
      -1,    -1,     4,    -1,     3,    -1,    51,    -1,    51,   112,
      -1,   114,    -1,   114,   113,    -1,    47,    52,    48,    -1,
      47,    18,    48,    -1,    47,    48,    -1,    52,    -1,    53,
      -1,    56,    -1,    57,    -1,   121,    -1,    45,   117,    46,
      -1,    45,    46,    -1,   115,    -1,   116,    -1,   115,    42,
     117,    -1,   116,    42,   117,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,   121,    41,    -1,   122,    -1,   124,
      -1,   125,    -1,     9,   121,    41,    -1,   121,    -1,   121,
      42,   120,    -1,   121,    28,   121,    -1,   121,    30,   121,
      -1,   121,    31,   121,    -1,   121,    51,   121,    -1,   121,
      39,   121,    -1,   121,    40,   121,    -1,   121,    19,   121,
      -1,   121,    20,   121,    -1,   121,    21,   121,    -1,   121,
      22,   121,    -1,   121,    23,   121,    -1,   121,    24,   121,
      -1,   121,    25,   121,    -1,   121,    26,   121,    -1,   121,
      49,   121,    -1,   121,    50,   121,    -1,    31,   121,    -1,
      32,   121,    -1,   121,    32,    -1,    35,   121,    -1,   121,
      35,    -1,    27,   121,    -1,    43,   121,    44,    -1,    18,
      43,   120,    44,    -1,    18,    43,    44,    -1,    51,    18,
      -1,    29,    18,    -1,    52,    -1,    53,    -1,    56,    -1,
      57,    -1,    18,    -1,    10,    43,   121,    44,   129,    -1,
      10,    43,   121,    44,   129,   123,    -1,    11,   129,    -1,
      12,    43,   121,    44,   129,    -1,    13,    43,   126,   127,
     128,    44,   129,    -1,    13,    43,   126,   127,    44,   129,
      -1,   107,    -1,   121,    41,    -1,    41,    -1,   121,    41,
      -1,    41,    -1,   121,    -1,   101,    -1,    45,   100,    46,
      -1,    45,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,   102,   105,   112,   115,   118,   121,   124,
     127,   132,   135,   142,   145,   148,   151,   154,   160,   165,
     168,   173,   176,   181,   184,   189,   196,   201,   204,   207,
     211,   215,   218,   221,   226,   229,   232,   235,   241,   244,
     247,   250,   253,   256,   259,   266,   269,   272,   279,   282,
     292,   295,   301,   304,   307,   314,   317,   320,   323,   326,
     335,   338,   343,   346,   349,   353,   359,   362,   365,   368,
     374,   377,   380,   383,   386,   392,   395,   402,   405,   408,
     411,   414,   417,   420,   423,   426,   429,   432,   435,   438,
     441,   444,   447,   451,   455,   458,   461,   464,   467,   470,
     473,   476,   479,   482,   486,   489,   492,   495,   498,   518,
     521,   525,   531,   537,   540,   544,   547,   550,   554,   557,
     562,   579,   582,   585
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
  "LP", "RP", "LC", "RC", "LB", "RB", "DOT", "POINTER", "STAR", "INT",
  "FLOAT", "OCT", "HEX", "CHAR", "STRING", "INCLUDE", "DEFINE", "PROGRAM",
  "PRE_INCLUDE", "PRE_DEFINE", "VAR_DEC", "ARG_DEC", "INITIALIZER_LIST",
  "ARRAY_DEC", "VAR_DEF", "STRUCT_DEF_STMT", "STRUCT_DEF", "MODIFIER",
  "VAR", "VAR_ARRAY", "VAR_POINTER", "VAR_ARRAY_POINTER",
  "VAR_POINTER_ARRAY", "ARRAY_DIM", "VAR_DEC_STMT", "VAR_DEF_STMT",
  "ARRAY_DEC_STMT", "FUNC_DEC_STMT", "FUNC_DEF_STMT", "FUNC_CALL", "STMTS",
  "STMT", "GET_ADDR", "GET_DATA", "RETURN", "ARG", "IF", "ELSE", "WHILE",
  "FOR", "FOR_START_STMT", "FOR_COND_STMT", "FOR_ITER_EXP", "$accept",
  "Program", "GlobalStmts", "GlobalStmt", "LocalStmts", "LocalStmt",
  "VarDecStmt", "VarDec", "FuncDecStmt", "ArgDecs", "ArgDec", "VarDefStmt",
  "VarDef", "FuncDefStmt", "Var", "Modifier", "Stars", "ArrayDims",
  "ArrayDim", "Initializer", "BraceInitializer", "InitializerList",
  "TypeSpecifier", "Stmt", "Args", "Exp", "If", "Else", "While", "For",
  "ForStartStmt", "ForCondStmt", "ForIterExp", "StmtBlock", 0
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
      99,   100,   100,   101,   101,   101,   101,   101,   102,   103,
     103,   104,   104,   105,   105,   106,   107,   108,   108,   108,
     108,   108,   108,   108,   109,   109,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   111,   112,   112,
     113,   113,   114,   114,   114,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   117,   117,   118,   118,   118,   118,
     119,   119,   119,   119,   119,   120,   120,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     122,   123,   124,   125,   125,   126,   126,   126,   127,   127,
     128,   129,   129,   129
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     2,     4,     1,
       3,     7,     6,     1,     3,     3,     4,     3,     3,     5,
       5,     3,     5,     5,     9,     8,     8,     7,     1,     2,
       2,     4,     5,     5,     3,     0,     1,     1,     1,     2,
       1,     2,     3,     3,     2,     1,     1,     1,     1,     1,
       3,     2,     1,     1,     3,     3,     1,     1,     1,     1,
       2,     1,     1,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     3,
       4,     3,     2,     2,     1,     1,     1,     1,     1,     5,
       6,     2,     5,     7,     6,     1,     2,     1,     2,     1,
       1,     1,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    47,    46,     9,     0,     2,     0,     6,     8,
       5,     7,     0,    10,     1,     4,    66,    67,    68,    69,
       0,    38,     0,    48,     0,     0,    19,     0,    45,     0,
      39,    50,     0,    49,    18,    26,     0,     0,    40,     0,
       0,    23,     0,     0,    54,     0,    51,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,   104,   105,   106,
     107,    27,    28,    59,    38,    20,    31,    44,    22,     0,
       0,    45,     0,    53,    52,    41,     0,     0,   104,   105,
     106,   107,    98,   103,    93,    94,    96,     0,    61,    62,
      63,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    37,
       0,     0,    14,    13,     0,    15,     0,    71,    72,    73,
      21,     0,    24,    25,    43,    42,   101,     0,    75,    99,
       0,     0,    60,    38,    32,     0,    38,    33,    83,    84,
      85,    86,    87,    88,    89,    90,    77,    78,    79,    81,
      82,    91,    92,    80,    17,     0,     0,     0,    45,    35,
      12,     0,    70,    36,     0,   100,     0,    64,    65,     0,
      74,     0,     0,   117,   115,     0,     0,     0,    34,    76,
       0,     0,     0,   116,   119,     0,     0,     0,   121,   109,
     112,   118,     0,   120,     0,   123,     0,     0,   110,   114,
       0,   122,   111,   113
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,   120,   198,   122,    24,     9,    40,
      41,   123,    25,    11,   145,   124,    27,    30,    31,    89,
      90,    91,    20,   125,   137,   126,   127,   208,   128,   129,
     187,   196,   204,   199
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -98
static const yytype_int16 yypact[] =
{
     107,   -38,   -98,   -98,   -98,    25,   -98,    98,   -98,   -98,
     -98,   -98,   225,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
      -3,    50,   -34,   -34,     3,     6,    -5,    21,     7,    -6,
     -98,    11,    54,   -98,   -98,   -98,   464,    -2,    11,   132,
      52,    65,   225,    61,   -98,    68,   -98,    20,    84,   556,
     119,   556,   556,   556,   556,   433,   120,    87,   150,   157,
     167,   101,   108,   859,    11,   -98,   -98,   -98,   -98,   154,
     181,    66,    -2,   -98,   -98,    11,   105,   479,   -98,   -98,
     -98,   -98,   -14,   -98,    85,   -14,   -14,   595,   -98,   109,
     114,   124,   -98,     2,    17,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   -98,   -98,   556,   556,
     556,   556,   556,   134,   556,   135,   137,   145,   -98,   -98,
     155,   211,   -98,   -98,   225,   -98,   628,   -98,   -98,   -98,
     -98,   268,   -98,   -98,   -98,   -98,   -98,   158,   661,   -98,
     464,   464,   -98,    16,   -98,    10,    18,   -98,    91,    91,
      91,    91,    91,    91,    91,    91,   881,    85,    85,   144,
     859,   -14,   -14,   144,   -98,   694,   556,   556,   418,   -98,
     -98,    -2,   -98,   -98,   179,   -98,   556,   -98,   -98,    -2,
     -98,   727,   760,   -98,   -98,   225,   793,   510,   -98,   -98,
     325,   325,    -2,   -98,   -98,   826,   525,   382,   -98,   193,
     -98,   -98,   325,   859,   183,   -98,   182,   325,   -98,   -98,
     325,   -98,   -98,   -98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   227,   -98,   -97,   -65,    36,   198,   -98,   165,
     -98,     1,   -32,   -98,   -18,     0,    62,   -25,   -98,   201,
     203,   -46,   -33,   -98,    69,   -22,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -59
static const yytype_int16 yytable[] =
{
      12,    10,    26,    13,   121,    66,    46,    12,    10,    72,
       2,     3,    43,    67,    63,    21,    64,    23,   106,    26,
     143,   107,    76,    36,   170,    14,   109,    82,    42,    84,
      85,    86,    87,    63,   174,   146,     8,    37,    36,    38,
      22,    22,    44,     8,    34,    22,    45,    35,    23,    23,
     134,    39,   179,    23,   133,   138,   121,   -30,    29,   -29,
      22,   144,   147,    29,    75,    29,   121,    29,    23,     2,
       3,    42,    47,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,    32,    33,   159,   160,   161,   162,
     163,   171,   165,    28,   177,   178,    70,    29,    -3,     1,
     206,     2,     3,   -45,   -45,   -45,   -45,    71,     1,    73,
       2,     3,   -45,   -45,   -45,   -45,    74,   106,    63,    63,
     107,   104,   105,   106,   108,   109,   107,    77,   -55,   -55,
     108,   109,   121,   -55,   110,   111,   112,    83,    92,     4,
     110,   111,   112,    93,   181,   182,   186,    66,     4,   135,
      94,   140,   192,    26,   138,   113,   141,     2,     3,   -45,
     -45,   -45,   -45,   114,   115,   195,   116,   117,   185,   184,
     142,   200,    48,    68,   203,   164,   106,    69,   166,   107,
     167,    49,   209,    50,   109,    51,    52,   212,   168,    53,
     213,   -56,   -56,   110,   111,   118,   -56,    54,   -57,   -57,
     119,   169,   175,   -57,   207,    56,    78,    79,   -58,   -58,
      80,    81,   113,   -58,     2,     3,   -45,   -45,   -45,   -45,
     114,   115,   130,   116,   117,   188,   131,   210,   211,    48,
      16,    17,    18,    19,    15,    65,   132,    61,    49,    62,
      50,     0,    51,    52,     0,   189,    53,     0,     0,     0,
       0,     0,   118,     0,    54,     0,     0,   -11,     0,     0,
       0,     0,    56,    78,    79,     0,     0,    80,    81,   113,
       0,     2,     3,   -45,   -45,   -45,   -45,   114,   115,     0,
     116,   117,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,    50,     0,    51,
      52,     0,     0,    53,     0,     0,     0,     0,     0,   118,
       0,    54,     0,     0,   173,     0,     0,     0,     0,    56,
      78,    79,     0,     0,    80,    81,   113,     0,     2,     3,
     -45,   -45,   -45,   -45,   114,   115,     0,   116,   117,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,    50,     0,    51,    52,     0,     0,
      53,     0,     0,     0,     0,     0,   118,     0,    54,     0,
     197,     0,     0,     0,     0,     0,    56,    78,    79,     0,
       0,    80,    81,   113,     0,     2,     3,   -45,   -45,   -45,
     -45,   114,   115,     0,   116,   117,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,    50,     0,    51,    52,     0,     0,    53,     0,     0,
       0,     2,     3,   118,     0,    54,     0,     0,   205,     0,
       0,     0,     0,    56,    78,    79,    48,     0,    80,    81,
       0,     0,     0,     0,     0,    49,     0,    50,     0,    51,
      52,    48,     0,    53,     0,     0,     0,     0,     0,   183,
      49,    54,    50,     0,    51,    52,     0,     0,    53,    56,
      78,    79,     0,     0,    80,    81,    54,     0,    55,    88,
       0,     0,    48,     0,    56,    57,    58,     0,     0,    59,
      60,    49,     0,    50,     0,    51,    52,    48,     0,    53,
       0,     0,     0,     0,     0,     0,    49,    54,    50,    55,
      51,    52,     0,     0,    53,    56,    57,    58,     0,     0,
      59,    60,    54,   136,     0,     0,     0,     0,    48,     0,
      56,    78,    79,     0,     0,    80,    81,    49,     0,    50,
       0,    51,    52,    48,     0,    53,     0,     0,     0,     0,
       0,   194,    49,    54,    50,     0,    51,    52,     0,     0,
      53,    56,    78,    79,     0,     0,    80,    81,    54,   202,
       0,     0,     0,     0,    48,     0,    56,    78,    79,     0,
       0,    80,    81,    49,     0,    50,     0,    51,    52,     0,
       0,    53,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,    56,    78,    79,
       0,     0,    80,    81,    95,    96,    97,    98,    99,   100,
     101,   102,     0,   103,     0,   104,   105,   106,     0,     0,
     107,     0,     0,     0,   108,   109,     0,     0,     0,   139,
       0,     0,     0,     0,   110,   111,   112,    95,    96,    97,
      98,    99,   100,   101,   102,     0,   103,     0,   104,   105,
     106,     0,     0,   107,     0,     0,     0,   108,   109,   172,
       0,     0,     0,     0,     0,     0,     0,   110,   111,   112,
      95,    96,    97,    98,    99,   100,   101,   102,     0,   103,
       0,   104,   105,   106,     0,     0,   107,     0,     0,     0,
     108,   109,     0,   176,     0,     0,     0,     0,     0,     0,
     110,   111,   112,    95,    96,    97,    98,    99,   100,   101,
     102,     0,   103,     0,   104,   105,   106,     0,     0,   107,
       0,     0,     0,   108,   109,   180,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   112,    95,    96,    97,    98,
      99,   100,   101,   102,     0,   103,     0,   104,   105,   106,
       0,     0,   107,     0,     0,     0,   108,   109,     0,     0,
       0,   190,     0,     0,     0,     0,   110,   111,   112,    95,
      96,    97,    98,    99,   100,   101,   102,     0,   103,     0,
     104,   105,   106,     0,     0,   107,     0,     0,     0,   108,
     109,     0,     0,     0,   191,     0,     0,     0,     0,   110,
     111,   112,    95,    96,    97,    98,    99,   100,   101,   102,
       0,   103,     0,   104,   105,   106,     0,     0,   107,     0,
       0,     0,   108,   109,   193,     0,     0,     0,     0,     0,
       0,     0,   110,   111,   112,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   103,     0,   104,   105,   106,     0,
       0,   107,     0,     0,     0,   108,   109,   201,     0,     0,
       0,     0,     0,     0,     0,   110,   111,   112,    95,    96,
      97,    98,    99,   100,   101,   102,     0,   103,     0,   104,
     105,   106,     0,     0,   107,     0,     0,     0,   108,   109,
      95,    96,    97,    98,    99,   100,   101,   102,   110,   111,
     112,   104,   105,   106,     0,     0,   107,     0,     0,     0,
     108,   109,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,   112
};

static const yytype_int16 yycheck[] =
{
       0,     0,    20,    41,    69,    37,    31,     7,     7,    42,
       3,     4,    18,    38,    36,    18,    18,    51,    32,    37,
      18,    35,    47,    28,   121,     0,    40,    49,    28,    51,
      52,    53,    54,    55,   131,    18,     0,    42,    28,    18,
      43,    43,    48,     7,    41,    43,    52,    41,    51,    51,
      75,    44,    42,    51,    72,    77,   121,    41,    47,    41,
      43,    93,    94,    47,    44,    47,   131,    47,    51,     3,
       4,    71,    18,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    22,    23,   108,   109,   110,   111,
     112,   124,   114,    43,   140,   141,    44,    47,     0,     1,
     197,     3,     4,     5,     6,     7,     8,    42,     1,    48,
       3,     4,     5,     6,     7,     8,    48,    32,   140,   141,
      35,    30,    31,    32,    39,    40,    35,    43,    41,    42,
      39,    40,   197,    46,    49,    50,    51,    18,    18,    41,
      49,    50,    51,    42,   166,   167,   168,   179,    41,    44,
      42,    42,   185,   171,   176,     1,    42,     3,     4,     5,
       6,     7,     8,     9,    10,   187,    12,    13,   168,   168,
      46,   191,    18,    41,   196,    41,    32,    45,    43,    35,
      43,    27,   202,    29,    40,    31,    32,   207,    43,    35,
     210,    41,    42,    49,    50,    41,    46,    43,    41,    42,
      46,    46,    44,    46,    11,    51,    52,    53,    41,    42,
      56,    57,     1,    46,     3,     4,     5,     6,     7,     8,
       9,    10,    41,    12,    13,    46,    45,    44,    46,    18,
       5,     6,     7,     8,     7,    37,    71,    36,    27,    36,
      29,    -1,    31,    32,    -1,   176,    35,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    56,    57,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    -1,    31,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      52,    53,    -1,    -1,    56,    57,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    29,    -1,    31,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      -1,    56,    57,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,     3,     4,    41,    -1,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    53,    18,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    -1,    31,
      32,    18,    -1,    35,    -1,    -1,    -1,    -1,    -1,    41,
      27,    43,    29,    -1,    31,    32,    -1,    -1,    35,    51,
      52,    53,    -1,    -1,    56,    57,    43,    -1,    45,    46,
      -1,    -1,    18,    -1,    51,    52,    53,    -1,    -1,    56,
      57,    27,    -1,    29,    -1,    31,    32,    18,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    43,    29,    45,
      31,    32,    -1,    -1,    35,    51,    52,    53,    -1,    -1,
      56,    57,    43,    44,    -1,    -1,    -1,    -1,    18,    -1,
      51,    52,    53,    -1,    -1,    56,    57,    27,    -1,    29,
      -1,    31,    32,    18,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    41,    27,    43,    29,    -1,    31,    32,    -1,    -1,
      35,    51,    52,    53,    -1,    -1,    56,    57,    43,    44,
      -1,    -1,    -1,    -1,    18,    -1,    51,    52,    53,    -1,
      -1,    56,    57,    27,    -1,    29,    -1,    31,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    -1,    56,    57,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    28,    -1,    30,    31,    32,    -1,    -1,
      35,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    49,    50,    51,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    -1,    30,    31,
      32,    -1,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      -1,    30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,
      39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    -1,    30,    31,    32,    -1,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    -1,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    50,    51,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    -1,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,
      50,    51,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    -1,    30,    31,    32,    -1,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    -1,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    -1,    30,
      31,    32,    -1,    -1,    35,    -1,    -1,    -1,    39,    40,
      19,    20,    21,    22,    23,    24,    25,    26,    49,    50,
      51,    30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,    41,    97,    98,    99,   102,   104,
     107,   109,   111,    41,     0,    98,     5,     6,     7,     8,
     118,    18,    43,    51,   103,   108,   110,   112,    43,    47,
     113,   114,   112,   112,    41,    41,    28,    42,    18,    44,
     105,   106,   111,    18,    48,    52,   113,    18,    18,    27,
      29,    31,    32,    35,    43,    45,    51,    52,    53,    56,
      57,   115,   116,   121,    18,   103,   108,   113,    41,    45,
      44,    42,   118,    48,    48,    44,   113,    43,    52,    53,
      56,    57,   121,    18,   121,   121,   121,   121,    46,   115,
     116,   117,    18,    42,    42,    19,    20,    21,    22,    23,
      24,    25,    26,    28,    30,    31,    32,    35,    39,    40,
      49,    50,    51,     1,     9,    10,    12,    13,    41,    46,
     100,   101,   102,   107,   111,   119,   121,   122,   124,   125,
      41,    45,   105,   110,   113,    44,    44,   120,   121,    44,
      42,    42,    46,    18,   108,   110,    18,   108,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,    41,   121,    43,    43,    43,    46,
     100,   118,    41,    46,   100,    44,    42,   117,   117,    42,
      41,   121,   121,    41,   107,   111,   121,   126,    46,   120,
      44,    44,   118,    41,    41,   121,   127,    45,   101,   129,
     129,    41,    44,   121,   128,    46,   100,    11,   123,   129,
      44,    46,   129,   129
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
#line 96 "src/parser.y"
    {
            (yyval.node) = NULL;
            astTree = createNode(PROGRAM, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 102 "src/parser.y"
    {
                (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 105 "src/parser.y"
    {
                if ((yyvsp[(1) - (2)].node) != NULL) {
                    prependNode((yyvsp[(2) - (2)].node),(yyvsp[(1) - (2)].node));
                }
                (yyval.node) = (yyvsp[(2) - (2)].node);
            ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 112 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 115 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 118 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 121 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 124 "src/parser.y"
    {
                (yyval.node) = createNode(STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
            ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 127 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 132 "src/parser.y"
    {
                (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 135 "src/parser.y"
    {
                if ((yyvsp[(1) - (2)].node) != NULL) {
                    prependNode((yyvsp[(2) - (2)].node),(yyvsp[(1) - (2)].node));
                }
                (yyval.node) = (yyvsp[(2) - (2)].node);
            ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 142 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 145 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 148 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 151 "src/parser.y"
    {
                (yyval.node) = createNode(STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
            ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 154 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 160 "src/parser.y"
    {
                (yyval.node) = createNode(VAR_DEC_STMT, NULL, (yyvsp[(1) - (4)].node)->line, level, 3, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node));
            ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 165 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEC, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 168 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEC, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 173 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEC_STMT, NULL, (yyvsp[(1) - (7)].node)->line, level, 4, (yyvsp[(1) - (7)].node), (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node));
            ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 176 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEC_STMT, NULL, (yyvsp[(1) - (6)].node)->line, level, 3, (yyvsp[(1) - (6)].node), (yyvsp[(2) - (6)].node), (yyvsp[(3) - (6)].node));
            ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 181 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 184 "src/parser.y"
    {
            (yyval.node) = createNode(ARG_DEC, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 189 "src/parser.y"
    {
            (yyval.node) = createNode(ARG_DEC, NULL, (yyvsp[(1) - (3)].node)->line, level, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 196 "src/parser.y"
    {
                (yyval.node) = createNode(VAR_DEF_STMT, NULL, (yyvsp[(1) - (4)].node)->line, level, 3, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node));
            ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 201 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 204 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 207 "src/parser.y"
    {
            Node *node = createNode(VAR_DEF, NULL, (yyvsp[(5) - (5)].node)->line, level, 1, (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), node);
        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 211 "src/parser.y"
    {
            Node *node = createNode(VAR_DEF, NULL, (yyvsp[(5) - (5)].node)->line, level, 1, (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), node);
        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 215 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 218 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
        ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 221 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 226 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEF_STMT, NULL, (yyvsp[(1) - (9)].node)->line, level, 5, (yyvsp[(1) - (9)].node), (yyvsp[(2) - (9)].node), (yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(8) - (9)].node));
            ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 229 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEF_STMT, NULL, (yyvsp[(1) - (8)].node)->line, level, 4, (yyvsp[(1) - (8)].node), (yyvsp[(2) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(7) - (8)].node));
            ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 232 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEF_STMT, NULL, (yyvsp[(1) - (8)].node)->line, level, 4, (yyvsp[(1) - (8)].node), (yyvsp[(2) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(5) - (8)].node));
            ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 235 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEF_STMT, NULL, (yyvsp[(1) - (7)].node)->line, level, 3, (yyvsp[(1) - (7)].node), (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node));
            ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 241 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 244 "src/parser.y"
    {
        (yyval.node) = createNode(VAR_ARRAY, NULL, (yyvsp[(1) - (2)].node)->line, level, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 247 "src/parser.y"
    {
        (yyval.node) = createNode(VAR_POINTER, NULL, (yyvsp[(1) - (2)].node)->line, level, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 250 "src/parser.y"
    {
        (yyval.node) = createNode(VAR_POINTER, NULL, (yyvsp[(1) - (4)].node)->line, level, 2, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 253 "src/parser.y"
    {
        (yyval.node) = createNode(VAR_POINTER_ARRAY, NULL, (yyvsp[(1) - (5)].node)->line, level, 3, (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 256 "src/parser.y"
    {
        (yyval.node) = createNode(VAR_ARRAY_POINTER, NULL, (yyvsp[(1) - (5)].node)->line, level, 3, (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 259 "src/parser.y"
    {
        (yyval.node) = createNode(VAR_POINTER_ARRAY, NULL, (yyvsp[(1) - (3)].node)->line, level, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 266 "src/parser.y"
    {
                (yyval.node) = createNode(MODIFIER, NULL, yylineno, level, 0)
            ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 269 "src/parser.y"
    {
                (yyval.node) = createNode(MODIFIER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 272 "src/parser.y"
    {
                (yyval.node) = createNode(MODIFIER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 279 "src/parser.y"
    {
            (yyval.node) = createNode(STAR, "1", (yyvsp[(1) - (1)].node)->line, level, 0);
        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 282 "src/parser.y"
    {
            int num = atoi((yyvsp[(2) - (2)].node)->val);
            itoa(num + 1, (yyvsp[(2) - (2)].node)->val, 10);
            (yyvsp[(2) - (2)].node)->line = (yyvsp[(1) - (2)].node)->line;
            (yyval.node) = (yyvsp[(2) - (2)].node);
        ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 292 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 295 "src/parser.y"
    {
                appendNode((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
                (yyval.node) = (yyvsp[(1) - (2)].node);
            ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 301 "src/parser.y"
    {
                (yyval.node) = createNode(ARRAY_DIM, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(2) - (3)].node));
            ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 304 "src/parser.y"
    {
                (yyval.node) = createNode(ARRAY_DIM, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(2) - (3)].node));
            ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 307 "src/parser.y"
    {
                (yyval.node) = createNode(ARRAY_DIM, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
            ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 314 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 317 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 320 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 323 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 326 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 335 "src/parser.y"
    {
                        (yyval.node) = (yyvsp[(2) - (3)].node);
                    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 338 "src/parser.y"
    {
                        (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
                    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 343 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node)
                ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 346 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 349 "src/parser.y"
    {
                    prependNode((yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
                    (yyval.node) = (yyvsp[(3) - (3)].node);
                ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 353 "src/parser.y"
    {
                    prependNodes((yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
                    (yyval.node) = (yyvsp[(3) - (3)].node);
                ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 359 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 362 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 365 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 368 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 374 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 377 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 380 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 383 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 386 "src/parser.y"
    {
            (yyval.node) = createNode(RETURN, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(2) - (3)].node));
        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 392 "src/parser.y"
    {
            (yyval.node) = createNode(ARG, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 395 "src/parser.y"
    {
            (yyval.node) = createNode(ARG, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 402 "src/parser.y"
    {
        (yyval.node) = createNode(ASSIGN, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 405 "src/parser.y"
    {
        (yyval.node) = createNode(PLUS, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 408 "src/parser.y"
    {
        (yyval.node) = createNode(MINUS, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 411 "src/parser.y"
    {
        (yyval.node) = createNode(MULTIPLY, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 414 "src/parser.y"
    {
        (yyval.node) = createNode(DIV, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 417 "src/parser.y"
    {
        (yyval.node) = createNode(DELIVERY, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 420 "src/parser.y"
    {
        (yyval.node) = createNode(GREATER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 423 "src/parser.y"
    {
        (yyval.node) = createNode(SMALLER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 426 "src/parser.y"
    {
        (yyval.node) = createNode(GREATER_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 429 "src/parser.y"
    {
        (yyval.node) = createNode(SMALLER_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 432 "src/parser.y"
    {
        (yyval.node) = createNode(EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 435 "src/parser.y"
    {
        (yyval.node) = createNode(NOT_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 438 "src/parser.y"
    {
        (yyval.node) = createNode(AND, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 441 "src/parser.y"
    {
        (yyval.node) = createNode(OR, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 444 "src/parser.y"
    {
        (yyval.node) = createNode(DOT, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 447 "src/parser.y"
    {
        (yyval.node) = createNode(POINTER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 451 "src/parser.y"
    {
        Node *node = createNode(INT, "0", (yyvsp[(1) - (2)].node)->line, level, 0);
        (yyval.node) = createNode(MINUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 2, node, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 455 "src/parser.y"
    {
        (yyval.node) = createNode(FDPLUS, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 458 "src/parser.y"
    {
        (yyval.node) = createNode(BDPLUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
    ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 461 "src/parser.y"
    {
        (yyval.node) = createNode(FDMINUS, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 464 "src/parser.y"
    {
        (yyval.node) = createNode(BDMINUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 467 "src/parser.y"
    {
        (yyval.node) = createNode(NOT, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 470 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
    ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 473 "src/parser.y"
    {
        (yyval.node) = createNode(FUNC_CALL, NULL, (yyvsp[(1) - (4)].node)->line, level, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 476 "src/parser.y"
    {
        (yyval.node) = createNode(FUNC_CALL, NULL, (yyvsp[(1) - (3)].node)->line, level, 0);
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 479 "src/parser.y"
    {
        (yyval.node) = createNode(GET_ADDR, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 482 "src/parser.y"
    {
        (yyval.node) = createNode(GET_DATA, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 486 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 489 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 492 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 495 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 498 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 518 "src/parser.y"
    {
        (yyval.node) = createNode(IF, NULL, (yyvsp[(1) - (5)].node)->line, level, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 521 "src/parser.y"
    {
        (yyval.node) = createNode(IF, NULL, (yyvsp[(1) - (6)].node)->line, level, 3, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 525 "src/parser.y"
    {
            (yyval.node) = createNode(ELSE, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
        ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 531 "src/parser.y"
    {
            (yyval.node) = createNode(WHILE, NULL, (yyvsp[(1) - (5)].node)->line, level, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
        ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 537 "src/parser.y"
    {
        (yyval.node) = createNode(FOR, NULL, (yyvsp[(1) - (7)].node)->line, level, 4, (yyvsp[(3) - (7)].node), (yyvsp[(4) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node));
    ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 540 "src/parser.y"
    {
        (yyval.node) = createNode(FOR, NULL, (yyvsp[(1) - (6)].node)->line, level, 3, (yyvsp[(3) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 544 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 547 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
                ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 550 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
                ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 554 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_COND_STMT, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
                ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 557 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_COND_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
                ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 562 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_ITER_EXP, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));;
                ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 579 "src/parser.y"
    {
                (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 582 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(2) - (3)].node);
            ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 585 "src/parser.y"
    {
                (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
            ;}
    break;



/* Line 1455 of yacc.c  */
#line 2958 "src/parser.c"
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
#line 589 "src/parser.y"

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}

