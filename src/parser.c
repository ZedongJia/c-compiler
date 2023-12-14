
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
     VAR_DEC = 317,
     ARG_DEC = 318,
     INITIALIZER = 319,
     BRACE_INITIALIZER = 320,
     FUNC_DEC = 321,
     VAR_DEF = 322,
     STRUCT_DEF = 323,
     FUNC_DEF = 324,
     MODIFIER = 325,
     SPECIFIER = 326,
     VAR = 327,
     TYPE = 328,
     ARRAY_DIM = 329,
     FUNC_CALL = 330,
     STMTS = 331,
     STMT = 332,
     GET_ADDR = 333,
     GET_DATA = 334,
     GET_ARRAY_DATA = 335,
     RETURN = 336,
     ARG = 337,
     IF = 338,
     ELSE = 339,
     WHILE = 340,
     FOR = 341,
     FOR_START_STMT = 342,
     FOR_COND_STMT = 343,
     FOR_ITER_EXP = 344,
     MUL = 345,
     GADDR = 346,
     GDATA = 347,
     SMINUS = 348
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
#line 219 "src/parser.c"
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
#line 244 "src/parser.c"

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNRULES -- Number of states.  */
#define YYNSTATES  261

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

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
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    29,    31,    34,    36,    38,    40,
      42,    45,    47,    50,    52,    54,    56,    59,    66,    71,
      74,    78,    82,    86,    88,    92,   100,   107,   109,   113,
     116,   120,   124,   128,   134,   140,   144,   150,   156,   166,
     175,   184,   192,   195,   199,   203,   210,   216,   218,   221,
     224,   229,   235,   241,   245,   247,   250,   252,   255,   259,
     262,   264,   266,   268,   270,   272,   276,   279,   281,   283,
     287,   291,   292,   294,   296,   299,   302,   304,   306,   308,
     310,   313,   316,   318,   320,   322,   326,   329,   331,   335,
     337,   339,   341,   343,   345,   350,   356,   360,   365,   369,
     373,   377,   381,   385,   389,   393,   397,   401,   405,   409,
     413,   417,   421,   424,   427,   430,   433,   436,   439,   442,
     445,   449,   453,   457,   462,   468,   475,   478,   484,   493,
     501,   503,   506,   508,   511,   513,   515,   517,   521,   524,
     525
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      95,     0,    -1,    96,    -1,    97,    -1,    97,    96,    -1,
     109,    -1,   104,    -1,   111,    -1,   106,    -1,   112,    -1,
     102,    -1,   103,    -1,    41,    -1,     1,    41,    -1,    99,
      -1,    99,    98,    -1,   109,    -1,   104,    -1,   124,    -1,
      41,    -1,     1,    41,    -1,   101,    -1,   101,   100,    -1,
     109,    -1,   104,    -1,    41,    -1,     1,    41,    -1,    59,
      20,    18,    49,    18,    19,    -1,    59,    20,    18,    19,
      -1,    59,    58,    -1,    60,    18,   126,    -1,    60,    18,
     119,    -1,   122,   105,    41,    -1,   114,    -1,   114,    42,
     105,    -1,   122,   114,   136,    43,   107,    44,    41,    -1,
     122,   114,   136,    43,    44,    41,    -1,   108,    -1,   108,
      42,   107,    -1,   122,   114,    -1,   122,   110,    41,    -1,
     114,    28,   118,    -1,   114,    28,   119,    -1,   114,    28,
     119,    42,   114,    -1,   114,    28,   118,    42,   114,    -1,
     114,    42,   110,    -1,   114,    28,   118,    42,   110,    -1,
     114,    28,   119,    42,   110,    -1,   122,   114,   136,    43,
     107,    44,    45,    98,    46,    -1,   122,   114,   136,    43,
      44,    45,    98,    46,    -1,   122,   114,   136,    43,   107,
      44,    45,    46,    -1,   122,   114,   136,    43,    44,    45,
      46,    -1,   113,    41,    -1,   113,   110,    41,    -1,   113,
     105,    41,    -1,    17,    18,   135,    45,   100,    46,    -1,
      17,    18,   135,    45,    46,    -1,    18,    -1,    18,   116,
      -1,   115,    18,    -1,    43,   115,    18,    44,    -1,    43,
     115,    18,   116,    44,    -1,    43,   115,    18,    44,   116,
      -1,   115,    18,   116,    -1,    51,    -1,    51,   115,    -1,
     117,    -1,   117,   116,    -1,    47,    53,    48,    -1,    47,
      48,    -1,    53,    -1,    54,    -1,    57,    -1,    58,    -1,
     126,    -1,    45,   120,    46,    -1,    45,    46,    -1,   118,
      -1,   119,    -1,   118,    42,   120,    -1,   119,    42,   120,
      -1,    -1,     4,    -1,     3,    -1,   121,   123,    -1,   123,
     121,    -1,     5,    -1,     6,    -1,     7,    -1,     8,    -1,
      17,    18,    -1,   126,    41,    -1,   127,    -1,   129,    -1,
     130,    -1,     9,   126,    41,    -1,     9,    41,    -1,   126,
      -1,   126,    42,   125,    -1,    53,    -1,    54,    -1,    57,
      -1,    58,    -1,    18,    -1,    43,   123,    44,   126,    -1,
      43,   123,   115,    44,   126,    -1,    18,    43,    44,    -1,
      18,    43,   125,    44,    -1,   126,    28,   126,    -1,   126,
      26,   126,    -1,   126,    25,   126,    -1,   126,    24,   126,
      -1,   126,    23,   126,    -1,   126,    22,   126,    -1,   126,
      20,   126,    -1,   126,    21,   126,    -1,   126,    19,   126,
      -1,   126,    31,   126,    -1,   126,    30,   126,    -1,   126,
      40,   126,    -1,   126,    51,   126,    -1,   126,    39,   126,
      -1,    27,   126,    -1,    29,    18,    -1,    51,    18,    -1,
      35,   126,    -1,   126,    35,    -1,   126,    32,    -1,    32,
     126,    -1,    31,   126,    -1,   126,    50,   126,    -1,   126,
      49,   126,    -1,    43,   126,    44,    -1,   126,    47,   126,
      48,    -1,    10,    43,   126,    44,   134,    -1,    10,    43,
     126,    44,   134,   128,    -1,    11,   134,    -1,    12,    43,
     126,    44,   134,    -1,    13,   136,    43,   131,   132,   133,
      44,   134,    -1,    13,   136,    43,   131,   132,    44,   134,
      -1,   109,    -1,   126,    41,    -1,    41,    -1,   126,    41,
      -1,    41,    -1,   126,    -1,    99,    -1,    45,    98,    46,
      -1,    45,    46,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   113,   113,   124,   131,   139,   142,   145,   148,   151,
     154,   157,   160,   163,   168,   175,   183,   186,   189,   192,
     195,   200,   207,   215,   218,   221,   224,   231,   240,   249,
     256,   262,   270,   276,   279,   285,   290,   297,   300,   306,
     314,   320,   324,   328,   333,   338,   342,   347,   354,   360,
     365,   370,   377,   381,   387,   395,   426,   463,   468,   475,
     482,   489,   497,   505,   516,   519,   529,   532,   538,   542,
     550,   553,   556,   559,   562,   571,   575,   580,   583,   586,
     590,   596,   599,   602,   608,   613,   620,   623,   626,   629,
     632,   641,   644,   647,   650,   653,   656,   662,   665,   673,
     676,   679,   682,   685,   689,   693,   699,   703,   707,   710,
     713,   716,   719,   722,   725,   728,   731,   734,   737,   740,
     743,   746,   749,   752,   756,   760,   763,   766,   769,   772,
     776,   780,   784,   787,   808,   811,   815,   821,   827,   831,
     836,   839,   842,   846,   849,   854,   871,   878,   881,   887,
     892
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
  "DEFINE", "PROGRAM", "VAR_DEC", "ARG_DEC", "INITIALIZER",
  "BRACE_INITIALIZER", "FUNC_DEC", "VAR_DEF", "STRUCT_DEF", "FUNC_DEF",
  "MODIFIER", "SPECIFIER", "VAR", "TYPE", "ARRAY_DIM", "FUNC_CALL",
  "STMTS", "STMT", "GET_ADDR", "GET_DATA", "GET_ARRAY_DATA", "RETURN",
  "ARG", "IF", "ELSE", "WHILE", "FOR", "FOR_START_STMT", "FOR_COND_STMT",
  "FOR_ITER_EXP", "MUL", "GADDR", "GDATA", "SMINUS", "$accept", "Program",
  "GlobalStmts", "GlobalStmt", "LocalStmts", "LocalStmt", "StructMemStmts",
  "StructMemStmt", "Include", "Define", "VarDecStmt", "VarDec",
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
     345,   346,   347,   348
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    98,    99,    99,    99,    99,
      99,   100,   100,   101,   101,   101,   101,   102,   102,   102,
     103,   103,   104,   105,   105,   106,   106,   107,   107,   108,
     109,   110,   110,   110,   110,   110,   110,   110,   111,   111,
     111,   111,   112,   112,   112,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   118,   118,   118,   119,   119,   120,   120,   120,
     120,   121,   121,   121,   122,   122,   123,   123,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   125,   125,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   127,   127,   128,   129,   130,   130,
     131,   131,   131,   132,   132,   133,   134,   134,   134,   135,
     136
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     2,     6,     4,     2,
       3,     3,     3,     1,     3,     7,     6,     1,     3,     2,
       3,     3,     3,     5,     5,     3,     5,     5,     9,     8,
       8,     7,     2,     3,     3,     6,     5,     1,     2,     2,
       4,     5,     5,     3,     1,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     3,     2,     1,     1,     3,
       3,     0,     1,     1,     2,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     3,     2,     1,     3,     1,
       1,     1,     1,     1,     4,     5,     3,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     4,     5,     6,     2,     5,     8,     7,
       1,     2,     1,     2,     1,     1,     1,     3,     2,     0,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    83,    82,    86,    87,    88,    89,     0,    12,
       0,     0,     0,     2,     0,    10,    11,     6,     8,     5,
       7,     9,     0,     0,     0,    81,    13,    90,     0,    29,
       0,     1,     4,    57,    52,     0,    64,     0,     0,    33,
       0,     0,    84,     0,     0,    33,    85,     0,     0,   103,
       0,     0,     0,     0,     0,     0,     0,     0,    99,   100,
     101,   102,    31,    30,     0,    58,    66,     0,    65,    54,
      53,     0,     0,    59,    90,    32,    40,     0,     0,    28,
       0,     0,   122,   123,   129,   128,   125,     0,     0,    76,
      99,   100,   101,   102,    77,    78,     0,    74,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     127,   126,     0,     0,     0,     0,     0,     0,    69,     0,
      67,     0,    41,    42,    34,    45,    63,     0,     0,    25,
      56,     0,     0,    24,    23,     0,     0,   106,     0,    97,
       0,     0,   132,     0,     0,    75,   116,   114,   115,   113,
     112,   111,   110,   109,   108,   118,   117,   121,   119,     0,
     131,   130,   120,    68,    60,     0,     0,     0,     0,     0,
      37,     0,    26,    55,    22,    27,   107,     0,   104,     0,
      79,    80,   133,    62,    61,    46,    44,    47,    43,    36,
       0,     0,     0,    39,    98,   105,     0,     0,     0,     0,
       0,   150,    19,    51,     0,     0,    17,    16,    18,     0,
      92,    93,    94,    35,     0,    38,     0,    20,    96,     0,
       0,     0,     0,    49,    15,    91,    50,     0,    95,     0,
       0,     0,    48,     0,     0,   142,   140,     0,     0,     0,
       0,   146,   134,   137,   141,   144,     0,     0,   148,     0,
       0,   135,   143,     0,   145,     0,   147,   136,   139,     0,
     138
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,   204,   241,   131,   132,    15,    16,
     206,    43,    18,   169,   170,   207,    44,    20,    21,    22,
      39,    40,    65,    66,    94,    95,    96,    23,   135,    25,
     208,   138,   209,   210,   251,   211,   212,   239,   247,   255,
     242,    47,    77
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -194
static const yytype_int16 yypact[] =
{
      59,   -12,  -194,  -194,  -194,  -194,  -194,  -194,     2,  -194,
     -13,     9,    31,  -194,   105,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,    86,   217,    -5,    95,  -194,    25,    50,  -194,
     579,  -194,  -194,    28,  -194,    39,    39,    66,    92,    49,
     118,   132,  -194,   112,   115,    13,  -194,   116,     3,   120,
     771,   155,   771,   771,   771,   496,   545,   157,  -194,  -194,
    -194,  -194,  -194,  1108,    68,  -194,    28,   170,  -194,  -194,
    -194,   611,    -5,    28,  -194,  -194,  -194,   146,   529,  -194,
     173,   643,    -7,  -194,   206,    22,    -7,   -25,   811,  -194,
      84,   161,   167,   205,   168,   176,   151,  1108,  -194,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
    -194,  -194,   771,   771,   771,   771,   771,   771,  -194,   164,
    -194,    87,   184,   186,  -194,  -194,  -194,   135,   158,  -194,
    -194,   159,   554,  -194,  -194,    -5,   210,  -194,   199,   844,
     771,   204,  -194,   611,   611,  -194,  1312,  1284,  1306,  1262,
    1240,  1218,  1196,  1174,  1141,   288,   230,    -7,   335,   877,
     201,   -33,   335,  -194,    28,   214,    -5,    -5,   117,   222,
     188,    -5,  -194,  -194,  -194,  -194,  -194,   771,   206,   771,
    -194,  -194,  -194,  -194,  -194,  -194,    75,  -194,    75,  -194,
     232,   131,   179,  -194,  -194,   206,    -5,   213,   675,   225,
     228,  -194,  -194,  -194,   226,   290,  -194,  -194,  -194,   910,
    -194,  -194,  -194,  -194,   348,  -194,    75,  -194,  -194,   943,
     771,   771,   231,  -194,  -194,  -194,  -194,   236,  -194,   976,
    1009,   163,  -194,   406,   406,  -194,  -194,    -5,  1042,   707,
     464,  -194,   265,  -194,  -194,  -194,  1075,   739,  -194,   238,
     406,  -194,  -194,   406,  1108,   243,  -194,  -194,  -194,   406,
    -194
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,   274,  -194,  -193,  -166,   160,  -194,  -194,  -194,
      23,   -14,  -194,   109,  -194,     0,   -19,  -194,  -194,  -194,
     -22,   -30,   -62,  -194,   233,   -21,   -29,   280,     1,    -6,
    -194,   129,   -20,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
     -99,  -194,   108
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -151
static const yytype_int16 yytable[] =
{
      19,    24,    45,    38,   120,    67,    68,    28,    37,    62,
      63,   126,   224,    33,    19,    24,   115,    42,   117,   140,
      27,   227,    79,    17,   205,   110,    36,    30,   111,    26,
      82,    31,    84,    85,    86,    88,    97,    17,    35,   205,
     114,    71,   115,   116,   117,    29,    36,   249,   205,    87,
     123,    97,    80,   125,   110,    72,  -150,   141,   124,   165,
       1,   139,     2,     3,     4,     5,     6,     7,    48,   114,
    -149,   115,   116,   117,   205,    64,     8,    71,   134,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      36,    72,   157,   158,   159,   160,   161,   162,     2,     3,
       9,   133,   183,    71,    33,    -3,     1,    69,     2,     3,
       4,     5,     6,     7,   180,   181,   118,   196,    10,    11,
     178,   119,     8,    97,    97,   -70,   -70,    34,   171,    35,
     -70,   164,   134,    70,    64,   243,    73,    36,     2,     3,
       4,     5,     6,     7,   186,   188,     9,   185,   187,   193,
      74,   257,    41,    75,   258,   133,    76,   139,   189,   195,
     260,    78,   190,    81,    10,    11,     2,     3,     4,     5,
       6,     7,   213,    83,   216,    98,   214,   125,   219,   168,
      41,    49,     2,     3,     4,     5,     6,     7,   121,   127,
      50,   136,    51,   171,    52,    53,    41,   145,    54,   172,
     229,   230,   -71,   -71,   235,   173,    55,   -71,   -72,   -72,
     143,   238,   163,   -72,    57,   216,    58,    59,   144,   246,
      60,    61,     4,     5,     6,     7,   166,   254,   167,   175,
     192,   236,   237,   197,    41,     2,     3,     4,     5,     6,
       7,   198,   199,   176,   200,   201,   -73,   -73,   179,    41,
      49,   -73,   117,   114,   217,   115,   116,   117,   184,    50,
     108,    51,   110,    52,    53,   111,   191,    54,   220,   112,
     113,   221,   223,   202,   231,    55,   250,   114,   203,   115,
     116,   117,   232,    57,   256,    58,    59,   259,    32,    60,
      61,   197,   174,     2,     3,     4,     5,     6,     7,   198,
     199,   215,   200,   201,   122,    46,   194,    41,    49,   222,
       0,     0,     0,     0,     0,     0,     0,    50,     0,    51,
     110,    52,    53,   111,     0,    54,     0,   112,   113,     0,
       0,   202,     0,    55,     0,   114,   -14,   115,   116,   117,
       0,    57,     0,    58,    59,     0,     0,    60,    61,   197,
       0,     2,     3,     4,     5,     6,     7,   198,   199,     0,
     200,   201,     0,     0,     0,    41,    49,   110,     0,     0,
     111,     0,     0,     0,   112,    50,     0,    51,     0,    52,
      53,     0,   114,    54,   115,   116,   117,     0,     0,   202,
       0,    55,     0,     0,   226,     0,     0,     0,     0,    57,
       0,    58,    59,     0,     0,    60,    61,   197,     0,     2,
       3,     4,     5,     6,     7,   198,   199,     0,   200,   201,
       0,     0,     0,    41,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,    51,     0,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,   202,     0,    55,
       0,   240,     0,     0,     0,     0,     0,    57,     0,    58,
      59,     0,     0,    60,    61,   197,     0,     2,     3,     4,
       5,     6,     7,   198,   199,     0,   200,   201,     0,     0,
       0,    41,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,    51,     0,    52,    53,     0,     0,    54,
       0,     4,     5,     6,     7,   202,     0,    55,     0,     0,
     248,     0,     0,    41,    49,    57,     0,    58,    59,     0,
       0,    60,    61,    50,     0,    51,     0,    52,    53,     0,
     128,    54,     2,     3,     4,     5,     6,     7,     0,    55,
       0,     0,     0,     0,     0,     0,    41,    57,     0,    58,
      59,     0,     0,    60,    61,   128,     0,     2,     3,     4,
       5,     6,     7,    49,     0,     0,     0,     0,     0,     0,
     129,    41,    50,     0,    51,   130,    52,    53,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    89,     0,     0,     0,   129,    57,    49,    90,    91,
     -21,     0,    92,    93,     0,     0,    50,     0,    51,     0,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    56,     0,     0,     0,     0,    49,
      57,     0,    58,    59,     0,     0,    60,    61,    50,     0,
      51,     0,    52,    53,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    56,     0,     0,     0,
       0,    49,    57,     0,    90,    91,     0,     0,    92,    93,
      50,     0,    51,     0,    52,    53,     0,     0,    54,     0,
       0,     0,     0,     0,     0,     0,    55,   137,     0,     0,
       0,     0,     0,    49,    57,     0,    58,    59,     0,     0,
      60,    61,    50,     0,    51,     0,    52,    53,     0,     0,
      54,     0,     0,     0,     0,     0,   218,     0,    55,     0,
       0,     0,     0,     0,     0,    49,    57,     0,    58,    59,
       0,     0,    60,    61,    50,     0,    51,     0,    52,    53,
       0,     0,    54,     0,     0,     0,     0,     0,   245,     0,
      55,     0,     0,     0,     0,     0,     0,    49,    57,     0,
      58,    59,     0,     0,    60,    61,    50,     0,    51,     0,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,    55,   253,     0,     0,     0,     0,     0,    49,
      57,     0,    58,    59,     0,     0,    60,    61,    50,     0,
      51,     0,    52,    53,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,    57,     0,    58,    59,     0,     0,    60,    61,
      99,   100,   101,   102,   103,   104,   105,   106,     0,   107,
       0,   108,   109,   110,     0,     0,   111,     0,     0,     0,
     112,   113,     0,     0,     0,   142,     0,     0,   114,     0,
     115,   116,   117,    99,   100,   101,   102,   103,   104,   105,
     106,     0,   107,     0,   108,   109,   110,     0,     0,   111,
       0,     0,     0,   112,   113,     0,   177,     0,     0,     0,
       0,   114,     0,   115,   116,   117,    99,   100,   101,   102,
     103,   104,   105,   106,     0,   107,     0,   108,   109,   110,
       0,     0,   111,     0,     0,     0,   112,   113,     0,     0,
       0,     0,     0,     0,   114,   182,   115,   116,   117,    99,
     100,   101,   102,   103,   104,   105,   106,     0,   107,     0,
     108,   109,   110,     0,     0,   111,     0,     0,     0,   112,
     113,   225,     0,     0,     0,     0,     0,   114,     0,   115,
     116,   117,    99,   100,   101,   102,   103,   104,   105,   106,
       0,   107,     0,   108,   109,   110,     0,     0,   111,     0,
       0,     0,   112,   113,   228,     0,     0,     0,     0,     0,
     114,     0,   115,   116,   117,    99,   100,   101,   102,   103,
     104,   105,   106,     0,   107,     0,   108,   109,   110,     0,
       0,   111,     0,     0,     0,   112,   113,     0,     0,     0,
     233,     0,     0,   114,     0,   115,   116,   117,    99,   100,
     101,   102,   103,   104,   105,   106,     0,   107,     0,   108,
     109,   110,     0,     0,   111,     0,     0,     0,   112,   113,
       0,     0,     0,   234,     0,     0,   114,     0,   115,   116,
     117,    99,   100,   101,   102,   103,   104,   105,   106,     0,
     107,     0,   108,   109,   110,     0,     0,   111,     0,     0,
       0,   112,   113,   244,     0,     0,     0,     0,     0,   114,
       0,   115,   116,   117,    99,   100,   101,   102,   103,   104,
     105,   106,     0,   107,     0,   108,   109,   110,     0,     0,
     111,     0,     0,     0,   112,   113,   252,     0,     0,     0,
       0,     0,   114,     0,   115,   116,   117,    99,   100,   101,
     102,   103,   104,   105,   106,     0,   107,     0,   108,   109,
     110,     0,     0,   111,     0,     0,     0,   112,   113,     0,
       0,     0,     0,     0,     0,   114,     0,   115,   116,   117,
      99,   100,   101,   102,   103,   104,   105,   106,     0,     0,
       0,   108,   109,   110,     0,     0,   111,     0,     0,     0,
     112,   113,     0,     0,     0,     0,     0,     0,   114,     0,
     115,   116,   117,    99,   100,   101,   102,   103,   104,   105,
       0,     0,     0,     0,   108,   109,   110,     0,     0,   111,
       0,     0,     0,   112,   113,    99,   100,   101,   102,   103,
     104,   114,     0,   115,   116,   117,   108,   109,   110,     0,
       0,   111,     0,     0,     0,   112,   113,    99,   100,   101,
     102,   103,     0,   114,     0,   115,   116,   117,   108,   109,
     110,     0,     0,   111,     0,     0,     0,   112,   113,    99,
     100,   101,   102,     0,     0,   114,     0,   115,   116,   117,
     108,   109,   110,     0,     0,   111,     0,     0,     0,   112,
     113,    99,   100,   101,     0,     0,     0,   114,     0,   115,
     116,   117,   108,   109,   110,     0,     0,   111,     0,     0,
       0,   112,   113,    99,     0,   101,     0,     0,     0,   114,
       0,   115,   116,   117,   108,   109,   110,     0,     0,   111,
       0,     0,     0,   112,   113,    99,     0,     0,     0,     0,
       0,   114,     0,   115,   116,   117,   108,   109,   110,     0,
       0,   111,   108,   109,   110,   112,   113,   111,     0,     0,
       0,   112,   113,   114,     0,   115,   116,   117,     0,   114,
       0,   115,   116,   117
};

static const yytype_int16 yycheck[] =
{
       0,     0,    24,    22,    66,    35,    36,    20,    22,    30,
      30,    73,   205,    18,    14,    14,    49,    23,    51,    44,
      18,   214,    19,     0,   190,    32,    51,    18,    35,    41,
      50,     0,    52,    53,    54,    55,    56,    14,    43,   205,
      47,    28,    49,    50,    51,    58,    51,   240,   214,    55,
      71,    71,    49,    72,    32,    42,    43,    87,    72,   121,
       1,    81,     3,     4,     5,     6,     7,     8,    18,    47,
      45,    49,    50,    51,   240,    47,    17,    28,    78,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      51,    42,   112,   113,   114,   115,   116,   117,     3,     4,
      41,    78,   164,    28,    18,     0,     1,    41,     3,     4,
       5,     6,     7,     8,   143,   144,    48,    42,    59,    60,
     140,    53,    17,   143,   144,    41,    42,    41,   127,    43,
      46,    44,   132,    41,    47,   234,    18,    51,     3,     4,
       5,     6,     7,     8,   166,   167,    41,   166,   167,   171,
      18,   250,    17,    41,   253,   132,    41,   177,    41,   179,
     259,    45,    45,    43,    59,    60,     3,     4,     5,     6,
       7,     8,    41,    18,   196,    18,    45,   196,   198,    44,
      17,    18,     3,     4,     5,     6,     7,     8,    18,    43,
      27,    18,    29,   192,    31,    32,    17,    46,    35,    41,
     220,   221,    41,    42,    41,    46,    43,    46,    41,    42,
      42,   231,    48,    46,    51,   237,    53,    54,    42,   239,
      57,    58,     5,     6,     7,     8,    42,   247,    42,    19,
      42,   231,   231,     1,    17,     3,     4,     5,     6,     7,
       8,     9,    10,    44,    12,    13,    41,    42,    44,    17,
      18,    46,    51,    47,    41,    49,    50,    51,    44,    27,
      30,    29,    32,    31,    32,    35,    44,    35,    43,    39,
      40,    43,    46,    41,    43,    43,    11,    47,    46,    49,
      50,    51,    46,    51,    46,    53,    54,    44,    14,    57,
      58,     1,   132,     3,     4,     5,     6,     7,     8,     9,
      10,   192,    12,    13,    71,    25,   177,    17,    18,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,
      32,    31,    32,    35,    -1,    35,    -1,    39,    40,    -1,
      -1,    41,    -1,    43,    -1,    47,    46,    49,    50,    51,
      -1,    51,    -1,    53,    54,    -1,    -1,    57,    58,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    17,    18,    32,    -1,    -1,
      35,    -1,    -1,    -1,    39,    27,    -1,    29,    -1,    31,
      32,    -1,    47,    35,    49,    50,    51,    -1,    -1,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      -1,    53,    54,    -1,    -1,    57,    58,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    -1,    31,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
      54,    -1,    -1,    57,    58,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    29,    -1,    31,    32,    -1,    -1,    35,
      -1,     5,     6,     7,     8,    41,    -1,    43,    -1,    -1,
      46,    -1,    -1,    17,    18,    51,    -1,    53,    54,    -1,
      -1,    57,    58,    27,    -1,    29,    -1,    31,    32,    -1,
       1,    35,     3,     4,     5,     6,     7,     8,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    51,    -1,    53,
      54,    -1,    -1,    57,    58,     1,    -1,     3,     4,     5,
       6,     7,     8,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    17,    27,    -1,    29,    46,    31,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    -1,    -1,    -1,    41,    51,    18,    53,    54,
      46,    -1,    57,    58,    -1,    -1,    27,    -1,    29,    -1,
      31,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    -1,    -1,    -1,    -1,    18,
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
      29,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    54,    -1,    -1,    57,    58,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      -1,    30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,
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
      -1,    -1,    -1,    39,    40,    19,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    30,    31,    32,    -1,
      -1,    35,    30,    31,    32,    39,    40,    35,    -1,    -1,
      -1,    39,    40,    47,    -1,    49,    50,    51,    -1,    47,
      -1,    49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,    17,    41,
      59,    60,    95,    96,    97,   102,   103,   104,   106,   109,
     111,   112,   113,   121,   122,   123,    41,    18,    20,    58,
      18,     0,    96,    18,    41,    43,    51,   105,   110,   114,
     115,    17,   123,   105,   110,   114,   121,   135,    18,    18,
      27,    29,    31,    32,    35,    43,    45,    51,    53,    54,
      57,    58,   119,   126,    47,   116,   117,   115,   115,    41,
      41,    28,    42,    18,    18,    41,    41,   136,    45,    19,
      49,    43,   126,    18,   126,   126,   126,   123,   126,    46,
      53,    54,    57,    58,   118,   119,   120,   126,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    28,    30,    31,
      32,    35,    39,    40,    47,    49,    50,    51,    48,    53,
     116,    18,   118,   119,   105,   110,   116,    43,     1,    41,
      46,   100,   101,   104,   109,   122,    18,    44,   125,   126,
      44,   115,    44,    42,    42,    46,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,    48,    44,   116,    42,    42,    44,   107,
     108,   122,    41,    46,   100,    19,    44,    42,   126,    44,
     120,   120,    48,   116,    44,   110,   114,   110,   114,    41,
      45,    44,    42,   114,   125,   126,    42,     1,     9,    10,
      12,    13,    41,    46,    98,    99,   104,   109,   124,   126,
     127,   129,   130,    41,    45,   107,   114,    41,    41,   126,
      43,    43,   136,    46,    98,    41,    46,    98,    41,   126,
     126,    43,    46,    44,    44,    41,   109,   122,   126,   131,
      45,    99,   134,   134,    41,    41,   126,   132,    46,    98,
      11,   128,    41,    44,   126,   133,    46,   134,   134,    44,
     134
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
#line 113 "src/parser.y"
    {
            (yyval.node) = NULL;
            astTree = createNode(PROGRAM, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
            appendNodes(astTree, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 124 "src/parser.y"
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
#line 131 "src/parser.y"
    {
                if ((yyvsp[(1) - (2)].node) != NULL) {
                    prependNode((yyvsp[(2) - (2)].node),(yyvsp[(1) - (2)].node));
                }
                (yyval.node) = (yyvsp[(2) - (2)].node);
            ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 139 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 142 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 145 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 148 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 151 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 154 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 157 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 160 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 163 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 168 "src/parser.y"
    {
                if ((yyvsp[(1) - (1)].node) != NULL) {
                    (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                } else {
                    (yyval.node) = createNode(STMTS, NULL, yylineno, level, 0);
                }
            ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 175 "src/parser.y"
    {
                if ((yyvsp[(1) - (2)].node) != NULL) {
                    prependNode((yyvsp[(2) - (2)].node),(yyvsp[(1) - (2)].node));
                }
                (yyval.node) = (yyvsp[(2) - (2)].node);
            ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 183 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 186 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 189 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 192 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 195 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 200 "src/parser.y"
    {
                    if ((yyvsp[(1) - (1)].node) != NULL) {
                        (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                    } else {
                        (yyval.node) = createNode(STMTS, NULL, yylineno, level, 0);
                    }
                ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 207 "src/parser.y"
    {
                    if ((yyvsp[(1) - (2)].node) != NULL) {
                        prependNode((yyvsp[(2) - (2)].node),(yyvsp[(1) - (2)].node));
                    }
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 215 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 218 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 221 "src/parser.y"
    {
                    (yyval.node) = NULL;
                ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 224 "src/parser.y"
    {
                    (yyval.node) = NULL;
                ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 231 "src/parser.y"
    {
                char *file = (char*)malloc(sizeof(char) * 20);
                strcpy(file, (yyvsp[(3) - (6)].node)->val);
                strcat(file, ".");
                strcat(file, (yyvsp[(5) - (6)].node)->val);
                /* TODO: import file */
                printf("\033[36mImport %s\033[0m\n", file);
                free(file);
            ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 241 "src/parser.y"
    {
                char *file = (char*)malloc(sizeof(char) * 20);
                strcat(file, (yyvsp[(3) - (4)].node)->val);
                /* TODO: import file */
                printf("\033[36mImport %s\033[0m\n", file);
                free(file);
            ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 249 "src/parser.y"
    {
                char *file = (yyvsp[(2) - (2)].node)->val;
                /* TODO: import file */
                printf("\033[36mImport %s\033[0m\n", file);
                free(file);
            ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 256 "src/parser.y"
    {
                /* TODO: replace */
                deleteNode((yyvsp[(2) - (3)].node));
                deleteNode((yyvsp[(3) - (3)].node));
            ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 262 "src/parser.y"
    {
                /* TODO: replace */
                deleteNode((yyvsp[(2) - (3)].node));
                deleteNode((yyvsp[(3) - (3)].node));
            ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 270 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (3)].node), (yyvsp[(1) - (3)].node));
                (yyval.node) =(yyvsp[(2) - (3)].node);
            ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 276 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEC, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 279 "src/parser.y"
    {
            appendNodes((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            (yyval.node) = createNode(VAR_DEC, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(1) - (3)].node));
        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 285 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (7)].node), (yyvsp[(1) - (7)].node));
                (yyval.node) = createNode(FUNC_DEC, NULL, (yyvsp[(2) - (7)].node)->line, level, 2, (yyvsp[(2) - (7)].node), (yyvsp[(5) - (7)].node));
                moveToPrevRuntime();
            ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 290 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node));
                (yyval.node) = createNode(FUNC_DEC, NULL, (yyvsp[(2) - (6)].node)->line, level, 1, (yyvsp[(2) - (6)].node));
                moveToPrevRuntime();
            ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 297 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 300 "src/parser.y"
    {
            appendNodes((yyvsp[(1) - (3)].node)->children[0], (yyvsp[(3) - (3)].node));
            (yyval.node) = (yyvsp[(1) - (3)].node);
        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 306 "src/parser.y"
    {
            analysisVar((yyvsp[(2) - (2)].node), (yyvsp[(1) - (2)].node));
            (yyval.node) = createNode(ARG_DEC, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 314 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (3)].node), (yyvsp[(1) - (3)].node));
                (yyval.node) = (yyvsp[(2) - (3)].node);
            ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 320 "src/parser.y"
    {
            (yyvsp[(1) - (3)].node)->initializer = (yyvsp[(3) - (3)].node);
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(1) - (3)].node));
        ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 324 "src/parser.y"
    {
            (yyvsp[(1) - (3)].node)->initializer = (yyvsp[(3) - (3)].node);
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(1) - (3)].node));
        ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 328 "src/parser.y"
    {
            (yyvsp[(1) - (5)].node)->initializer = (yyvsp[(3) - (5)].node);
            appendNode((yyvsp[(1) - (5)].node), (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 1, (yyvsp[(1) - (5)].node));
        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 333 "src/parser.y"
    {
            (yyvsp[(1) - (5)].node)->initializer = (yyvsp[(3) - (5)].node);
            appendNode((yyvsp[(1) - (5)].node), (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 1, (yyvsp[(1) - (5)].node));
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 338 "src/parser.y"
    {
            appendNodes((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(1) - (3)].node));
        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 342 "src/parser.y"
    {
            (yyvsp[(1) - (5)].node)->initializer = (yyvsp[(3) - (5)].node);
            appendNodes((yyvsp[(1) - (5)].node), (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 1, (yyvsp[(1) - (5)].node));
        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 347 "src/parser.y"
    {
            (yyvsp[(1) - (5)].node)->initializer = (yyvsp[(3) - (5)].node);
            appendNodes((yyvsp[(1) - (5)].node), (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 1, (yyvsp[(1) - (5)].node));
        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 354 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (9)].node), (yyvsp[(1) - (9)].node));
                (yyval.node) = createNode(FUNC_DEF, NULL, (yyvsp[(2) - (9)].node)->line, level, 3, (yyvsp[(2) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(8) - (9)].node));
                
                moveToPrevRuntime();
            ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 360 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (8)].node), (yyvsp[(1) - (8)].node));
                (yyval.node) = createNode(FUNC_DEF, NULL, (yyvsp[(2) - (8)].node)->line, level, 2, (yyvsp[(2) - (8)].node), (yyvsp[(7) - (8)].node));
                moveToPrevRuntime();
            ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 365 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (8)].node), (yyvsp[(1) - (8)].node));
                (yyval.node) = createNode(FUNC_DEF, NULL, (yyvsp[(2) - (8)].node)->line, level, 2, (yyvsp[(2) - (8)].node), (yyvsp[(5) - (8)].node));
                moveToPrevRuntime();
            ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 370 "src/parser.y"
    {
                analysisVar((yyvsp[(2) - (7)].node), (yyvsp[(1) - (7)].node));
                (yyval.node) = createNode(FUNC_DEF, NULL, (yyvsp[(2) - (7)].node)->line, level, 1, (yyvsp[(2) - (7)].node));
                moveToPrevRuntime();
            ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 377 "src/parser.y"
    {
                    removeNode((yyvsp[(1) - (2)].node), 0);
                    (yyval.node) = (yyvsp[(1) - (2)].node);
                ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 381 "src/parser.y"
    {
                    analysisVar((yyvsp[(2) - (3)].node), (yyvsp[(1) - (3)].node)->children[0]);
                    removeNode((yyvsp[(1) - (3)].node), 0);
                    appendNode((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 387 "src/parser.y"
    {
                    analysisVar((yyvsp[(2) - (3)].node), (yyvsp[(1) - (3)].node)->children[0]);
                    removeNode((yyvsp[(1) - (3)].node), 0);
                    appendNode((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 395 "src/parser.y"
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
                (yyval.node)->typeWidth = 4;

                /* name runtime and register */
                currRuntime->name = type;
                pushRuntime(structEnv, currRuntime);
                moveToPrevRuntime();

                /* add struct id */
                addSymbol(currRuntime, (yyval.node));

                (yyval.node)->symbol->type = (yyval.node)->valType;
                (yyval.node)->symbol->complexType = (yyval.node)->complexType;
                (yyval.node)->symbol->isDefination = 1;
            ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 426 "src/parser.y"
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
                (yyval.node)->typeWidth = 4;

                /* name runtime and register */
                currRuntime->name = type;
                pushRuntime(structEnv, currRuntime);
                moveToPrevRuntime();
                
                /* add struct id */
                addSymbol(currRuntime, (yyval.node));

                (yyval.node)->symbol->type = (yyval.node)->valType;
                (yyval.node)->symbol->complexType = (yyval.node)->complexType;
                (yyval.node)->symbol->isDefination = 1;
            ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 463 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
        (yyval.node)->lexeme = (yyvsp[(1) - (1)].node)->val;
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 468 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr_const";
        (yyval.node)->lexeme = (yyvsp[(1) - (2)].node)->val;
        (yyval.node)->arrayDim = (yyvsp[(2) - (2)].node);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 475 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr";
        (yyval.node)->lexeme = (yyvsp[(2) - (2)].node)->val;
        (yyval.node)->ptrStar = atoi((yyvsp[(1) - (2)].node)->val);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 482 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (4)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr";
        (yyval.node)->lexeme = (yyvsp[(3) - (4)].node)->val;
        (yyval.node)->ptrStar = atoi((yyvsp[(2) - (4)].node)->val);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 489 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (5)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr";
        (yyval.node)->lexeme = (yyvsp[(3) - (5)].node)->val;
        (yyval.node)->ptrStar = atoi((yyvsp[(2) - (5)].node)->val);
        (yyval.node)->arrayDim = (yyvsp[(4) - (5)].node);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 497 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (5)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr";
        (yyval.node)->lexeme = (yyvsp[(3) - (5)].node)->val;
        (yyval.node)->ptrStar = atoi((yyvsp[(2) - (5)].node)->val);
        (yyval.node)->arrayDim = (yyvsp[(5) - (5)].node);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 505 "src/parser.y"
    {
        (yyval.node) = createNode(VAR, NULL, (yyvsp[(1) - (3)].node)->line, level, 0);
        (yyval.node)->complexType = "ptr";
        (yyval.node)->lexeme = (yyvsp[(2) - (3)].node)->val;
        (yyval.node)->ptrStar = atoi((yyvsp[(1) - (3)].node)->val);
        (yyval.node)->arrayDim = (yyvsp[(3) - (3)].node);
        addSymbol(currRuntime, (yyval.node));
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 516 "src/parser.y"
    {
            (yyval.node) = createNode(STAR, "1", (yyvsp[(1) - (1)].node)->line, level, 0);
        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 519 "src/parser.y"
    {
            int num = atoi((yyvsp[(2) - (2)].node)->val);
            itoa(num + 1, (yyvsp[(2) - (2)].node)->val, 10);
            (yyvsp[(2) - (2)].node)->line = (yyvsp[(1) - (2)].node)->line;
            (yyval.node) = (yyvsp[(2) - (2)].node);
        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 529 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 532 "src/parser.y"
    {
                (yyvsp[(1) - (2)].node)->arrayDim = (yyvsp[(2) - (2)].node);
                (yyval.node) = (yyvsp[(1) - (2)].node);
            ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 538 "src/parser.y"
    {
                (yyval.node) = createNode(ARRAY_DIM, NULL, (yyvsp[(1) - (3)].node)->line, level, 0);
                (yyval.node)->val = (yyvsp[(2) - (3)].node)->val;
            ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 542 "src/parser.y"
    {
                (yyval.node) = createNode(ARRAY_DIM, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
                (yyval.node)->val = "0";
            ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 550 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 553 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 556 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 559 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 562 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 571 "src/parser.y"
    {
                        (yyval.node) = createNode(BRACE_INITIALIZER, NULL, (yyvsp[(1) - (3)].node)->line, level, 0);
                        appendNodes((yyval.node), (yyvsp[(2) - (3)].node));
                    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 575 "src/parser.y"
    {
                        (yyval.node) = createNode(BRACE_INITIALIZER, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
                    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 580 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 583 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 586 "src/parser.y"
    {
                    prependNodes((yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
                    (yyval.node) = (yyvsp[(3) - (3)].node);
                ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 590 "src/parser.y"
    {
                    prependNodes((yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
                    (yyval.node) = (yyvsp[(3) - (3)].node);
                ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 596 "src/parser.y"
    {
                (yyval.string) = "default";
            ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 599 "src/parser.y"
    {
                (yyval.string) = "extern";
            ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 602 "src/parser.y"
    {
                (yyval.string) = "const";
            ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 608 "src/parser.y"
    {
                    (yyval.node) = createNode(SPECIFIER, NULL, -1, -1, 0);
                    (yyval.node)->valType = (yyvsp[(2) - (2)].string);
                    (yyval.node)->valModifier = (yyvsp[(1) - (2)].string);
                ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 613 "src/parser.y"
    {
                    (yyval.node) = createNode(SPECIFIER, NULL, -1, -1, 0);
                    (yyval.node)->valType = (yyvsp[(1) - (2)].string);
                    (yyval.node)->valModifier = (yyvsp[(2) - (2)].string);
                ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 620 "src/parser.y"
    {
            (yyval.string) = "int";
        ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 623 "src/parser.y"
    {
            (yyval.string) = "float";
        ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 626 "src/parser.y"
    {
            (yyval.string) = "char";
        ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 629 "src/parser.y"
    {
            (yyval.string) = "void";
        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 632 "src/parser.y"
    {
            char *type = (char*)malloc(sizeof(char)*strlen((yyvsp[(2) - (2)].node)->val) + sizeof(char) * 7);
            strcpy(type, "struct_");
            strcat(type, (yyvsp[(2) - (2)].node)->val);
            (yyval.string) = type;
        ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 641 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 644 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 647 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 650 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 653 "src/parser.y"
    {
            (yyval.node) = createNode(RETURN, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(2) - (3)].node));
        ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 656 "src/parser.y"
    {
            (yyval.node) = createNode(RETURN, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
        ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 662 "src/parser.y"
    {
            (yyval.node) = createNode(ARG, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 665 "src/parser.y"
    {
            prependNode((yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
            (yyval.node) = (yyvsp[(3) - (3)].node);
        ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 673 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 676 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 679 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 682 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 685 "src/parser.y"
    {
        (yyvsp[(1) - (1)].node)->runtime = currRuntime;
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 689 "src/parser.y"
    {
        (yyval.node) = createNode(TRANSFORM, NULL, (yyvsp[(1) - (4)].node)->line, level, 1, (yyvsp[(4) - (4)].node));
        (yyval.node)->valType = (yyvsp[(2) - (4)].string);
    ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 693 "src/parser.y"
    {
        (yyval.node) = createNode(TRANSFORM, NULL, (yyvsp[(1) - (5)].node)->line, level, 1, (yyvsp[(5) - (5)].node));
        (yyval.node)->valType = (yyvsp[(2) - (5)].string);
        (yyval.node)->ptrStar = atoi((yyvsp[(3) - (5)].node)->val);
        (yyval.node)->complexType = "ptr";
    ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 699 "src/parser.y"
    {
        (yyvsp[(1) - (3)].node)->runtime = currRuntime;
        (yyval.node) = createNode(FUNC_CALL, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(1) - (3)].node));
    ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 703 "src/parser.y"
    {
        (yyvsp[(1) - (4)].node)->runtime = currRuntime;
        (yyval.node) = createNode(FUNC_CALL, NULL, (yyvsp[(1) - (4)].node)->line, level, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 707 "src/parser.y"
    {
        (yyval.node) = createNode(ASSIGN, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 710 "src/parser.y"
    {
        (yyval.node) = createNode(OR, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 713 "src/parser.y"
    {
        (yyval.node) = createNode(AND, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 716 "src/parser.y"
    {
        (yyval.node) = createNode(NOT_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 719 "src/parser.y"
    {
        (yyval.node) = createNode(EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 722 "src/parser.y"
    {
        (yyval.node) = createNode(SMALLER_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 725 "src/parser.y"
    {
        (yyval.node) = createNode(SMALLER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 728 "src/parser.y"
    {
        (yyval.node) = createNode(GREATER_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 731 "src/parser.y"
    {
        (yyval.node) = createNode(GREATER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 734 "src/parser.y"
    {
        (yyval.node) = createNode(MINUS, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 737 "src/parser.y"
    {
        (yyval.node) = createNode(PLUS, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 740 "src/parser.y"
    {
        (yyval.node) = createNode(DELIVERY, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 743 "src/parser.y"
    {
        (yyval.node) = createNode(MULTIPLY, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 746 "src/parser.y"
    {
        (yyval.node) = createNode(DIV, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 749 "src/parser.y"
    {
        (yyval.node) = createNode(NOT, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 752 "src/parser.y"
    {
        (yyval.node) = createNode(GET_ADDR, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
        (yyvsp[(2) - (2)].node)->runtime = currRuntime;
    ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 756 "src/parser.y"
    {
        (yyval.node) = createNode(GET_DATA, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
        (yyvsp[(2) - (2)].node)->runtime = currRuntime;
    ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 760 "src/parser.y"
    {
        (yyval.node) = createNode(FDMINUS, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 763 "src/parser.y"
    { 
        (yyval.node) = createNode(BDMINUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
    ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 766 "src/parser.y"
    {
        (yyval.node) = createNode(BDPLUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
    ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 769 "src/parser.y"
    {
        (yyval.node) = createNode(FDPLUS, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 772 "src/parser.y"
    {
        Node *node = createNode(INT, "0", (yyvsp[(1) - (2)].node)->line, level, 0);
        (yyval.node) = createNode(MINUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 2, node, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 776 "src/parser.y"
    {
        // specific for ID
        (yyval.node) = createNode(POINTER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 780 "src/parser.y"
    {
        // specific for ID
        (yyval.node) = createNode(DOT, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 784 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 787 "src/parser.y"
    {
        // read array data
        (yyval.node) = createNode(GET_ARRAY_DATA, NULL, (yyvsp[(1) - (4)].node)->line, level, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 808 "src/parser.y"
    {
        (yyval.node) = createNode(IF, NULL, (yyvsp[(1) - (5)].node)->line, level, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 811 "src/parser.y"
    {
        (yyval.node) = createNode(IF, NULL, (yyvsp[(1) - (6)].node)->line, level, 3, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 815 "src/parser.y"
    {
            (yyval.node) = createNode(ELSE, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
        ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 821 "src/parser.y"
    {
            (yyval.node) = createNode(WHILE, NULL, (yyvsp[(1) - (5)].node)->line, level, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
        ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 827 "src/parser.y"
    {
        (yyval.node) = createNode(FOR, NULL, (yyvsp[(1) - (8)].node)->line, level, 4, (yyvsp[(4) - (8)].node), (yyvsp[(5) - (8)].node), (yyvsp[(6) - (8)].node), (yyvsp[(8) - (8)].node));
        moveToPrevRuntime();
    ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 831 "src/parser.y"
    {
        (yyval.node) = createNode(FOR, NULL, (yyvsp[(1) - (7)].node)->line, level, 3, (yyvsp[(4) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node));
        moveToPrevRuntime();
    ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 836 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 839 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
                ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 842 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
                ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 846 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_COND_STMT, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
                ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 849 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_COND_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
                ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 854 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_ITER_EXP, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 871 "src/parser.y"
    {
                if ((yyvsp[(1) - (1)].node) != NULL) {
                    (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                } else {
                    (yyval.node) = createNode(STMTS, NULL, yylineno, level, 0);
                }
            ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 878 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(2) - (3)].node);
            ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 881 "src/parser.y"
    {
                (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
            ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 887 "src/parser.y"
    {
            // add runtime
            moveToNextRuntime(level);
        ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 892 "src/parser.y"
    {
                // previously add runtime before level go next
                moveToNextRuntime(level + 1);
            ;}
    break;



/* Line 1455 of yacc.c  */
#line 3506 "src/parser.c"
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
#line 896 "src/parser.y"

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}

