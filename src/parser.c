
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
    #include "math.h"
    #include "string.h"
    #include "ext.h"
    void yyerror(const char* fmt, ...);


/* Line 189 of yacc.c  */
#line 82 "src/parser.c"

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

/* Line 214 of yacc.c  */
#line 11 "src/parser.y"

    struct Node* node;



/* Line 214 of yacc.c  */
#line 211 "src/parser.c"
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
#line 236 "src/parser.c"

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
#define YYLAST   846

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNRULES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

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
      85,    86,    87
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    23,    25,    28,    30,    32,    34,    36,    39,    44,
      46,    50,    58,    65,    67,    71,    75,    80,    84,    88,
      94,   100,   104,   110,   116,   126,   135,   144,   152,   153,
     155,   157,   159,   161,   163,   165,   167,   171,   174,   176,
     178,   182,   186,   188,   190,   192,   194,   197,   199,   201,
     203,   207,   209,   213,   217,   221,   225,   229,   233,   237,
     241,   245,   249,   253,   257,   261,   265,   269,   273,   277,
     280,   283,   286,   289,   292,   295,   299,   304,   308,   310,
     312,   314,   316,   318,   324,   331,   334,   340,   348,   355,
     357,   360,   362,   365,   367,   369,   371,   375
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      89,     0,    -1,    90,    -1,    91,    -1,    91,    90,    -1,
      99,    -1,    94,    -1,   101,    -1,    96,    -1,    40,    -1,
       1,    40,    -1,    93,    -1,    93,    92,    -1,    99,    -1,
      94,    -1,   107,    -1,    40,    -1,     1,    40,    -1,   102,
     106,    95,    40,    -1,    18,    -1,    18,    41,    95,    -1,
     102,   106,    18,    42,    97,    43,    40,    -1,   102,   106,
      18,    42,    43,    40,    -1,    98,    -1,    98,    41,    97,
      -1,   102,   106,    18,    -1,   102,   106,   100,    40,    -1,
      18,    28,   103,    -1,    18,    28,   104,    -1,    18,    28,
     104,    41,    18,    -1,    18,    28,   103,    41,    18,    -1,
      18,    41,   100,    -1,    18,    28,   103,    41,   100,    -1,
      18,    28,   104,    41,   100,    -1,   102,   106,    18,    42,
      97,    43,    44,    92,    45,    -1,   102,   106,    18,    42,
      43,    44,    92,    45,    -1,   102,   106,    18,    42,    97,
      43,    44,    45,    -1,   102,   106,    18,    42,    43,    44,
      45,    -1,    -1,     4,    -1,     3,    -1,    51,    -1,    52,
      -1,    55,    -1,    56,    -1,   109,    -1,    44,   105,    45,
      -1,    44,    45,    -1,   103,    -1,   104,    -1,   103,    41,
     105,    -1,   104,    41,   105,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,   109,    40,    -1,   110,    -1,   112,
      -1,   113,    -1,     9,   109,    40,    -1,   109,    -1,   109,
      41,   108,    -1,   109,    28,   109,    -1,   109,    29,   109,
      -1,   109,    30,   109,    -1,   109,    50,   109,    -1,   109,
      38,   109,    -1,   109,    39,   109,    -1,   109,    19,   109,
      -1,   109,    20,   109,    -1,   109,    21,   109,    -1,   109,
      22,   109,    -1,   109,    23,   109,    -1,   109,    24,   109,
      -1,   109,    25,   109,    -1,   109,    26,   109,    -1,   109,
      48,   109,    -1,   109,    49,   109,    -1,    30,   109,    -1,
      31,   109,    -1,   109,    31,    -1,    34,   109,    -1,   109,
      34,    -1,    27,   109,    -1,    42,   109,    43,    -1,    18,
      42,   108,    43,    -1,    18,    42,    43,    -1,    51,    -1,
      52,    -1,    55,    -1,    56,    -1,    18,    -1,    10,    42,
     109,    43,   117,    -1,    10,    42,   109,    43,   117,   111,
      -1,    11,   117,    -1,    12,    42,   109,    43,   117,    -1,
      13,    42,   114,   115,   116,    43,   117,    -1,    13,    42,
     114,   115,    43,   117,    -1,    99,    -1,   109,    40,    -1,
      40,    -1,   109,    40,    -1,    40,    -1,   109,    -1,    93,
      -1,    44,    92,    45,    -1,    44,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    93,    96,   103,   106,   109,   112,   115,
     118,   123,   126,   133,   136,   139,   142,   145,   151,   156,
     159,   164,   167,   172,   175,   180,   197,   202,   205,   208,
     212,   216,   219,   222,   227,   230,   233,   236,   242,   245,
     248,   260,   263,   266,   269,   272,   281,   284,   289,   292,
     295,   299,   305,   308,   311,   314,   320,   323,   326,   329,
     332,   338,   341,   348,   351,   354,   357,   360,   363,   366,
     369,   372,   375,   378,   381,   384,   387,   390,   393,   397,
     401,   404,   407,   410,   413,   416,   419,   422,   426,   429,
     432,   435,   438,   458,   461,   465,   471,   477,   480,   484,
     487,   490,   494,   497,   502,   519,   522,   525
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
  "PLUS", "MINUS", "DPLUS", "FDPLUS", "BDPLUS", "DMINUS", "FDMINUS",
  "BDMINUS", "MULTIPLY", "DIV", "DELIVERY", "SEMI", "COMMA", "LP", "RP",
  "LC", "RC", "LB", "RB", "DOT", "POINTER", "STAR", "INT", "FLOAT", "OCT",
  "HEX", "CHAR", "STRING", "INCLUDE", "DEFINE", "PROGRAM", "PRE_INCLUDE",
  "PRE_DEFINE", "VAR_DEC", "ARG_DEC", "INITIALIZER_LIST", "ARRAY_DEC",
  "VAR_DEF", "STRUCT_DEF_STMT", "STRUCT_DEF", "MODIFIER", "ARRAY_DIM",
  "VAR_DEC_STMT", "VAR_DEF_STMT", "ARRAY_DEC_STMT", "FUNC_DEC_STMT",
  "FUNC_DEF_STMT", "FUNC_CALL", "STMTS", "STMT", "RETURN", "ARG", "IF",
  "ELSE", "WHILE", "FOR", "FOR_START_STMT", "FOR_COND_STMT",
  "FOR_ITER_EXP", "$accept", "Program", "GlobalStmts", "GlobalStmt",
  "LocalStmts", "LocalStmt", "VarDecStmt", "VarDec", "FuncDecStmt",
  "ArgDecs", "ArgDec", "VarDefStmt", "VarDef", "FuncDefStmt", "Modifier",
  "Initializer", "BraceInitializer", "InitializerList", "TypeSpecifier",
  "Stmt", "Args", "Exp", "If", "Else", "While", "For", "ForStartStmt",
  "ForCondStmt", "ForIterExp", "StmtBlock", 0
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
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    90,    91,    91,    91,    91,    91,
      91,    92,    92,    93,    93,    93,    93,    93,    94,    95,
      95,    96,    96,    97,    97,    98,    99,   100,   100,   100,
     100,   100,   100,   100,   101,   101,   101,   101,   102,   102,
     102,   103,   103,   103,   103,   103,   104,   104,   105,   105,
     105,   105,   106,   106,   106,   106,   107,   107,   107,   107,
     107,   108,   108,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   110,   110,   111,   112,   113,   113,   114,
     114,   114,   115,   115,   116,   117,   117,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     2,     4,     1,
       3,     7,     6,     1,     3,     3,     4,     3,     3,     5,
       5,     3,     5,     5,     9,     8,     8,     7,     0,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       3,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     4,     3,     1,     1,
       1,     1,     1,     5,     6,     2,     5,     7,     6,     1,
       2,     1,     2,     1,     1,     1,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    40,    39,     9,     0,     2,     0,     6,     8,
       5,     7,     0,    10,     1,     4,    52,    53,    54,    55,
       0,    19,     0,     0,     0,     0,    38,    18,    26,    92,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      27,    28,    45,    19,    20,    31,     0,     0,    23,     0,
       0,    88,    89,    90,    91,    84,    79,    80,    82,     0,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    83,     0,
       0,     0,     0,     0,    22,     0,     0,    38,     0,    87,
       0,    61,    85,     0,     0,    46,    30,    32,    29,    33,
      69,    70,    71,    72,    73,    74,    75,    76,    63,    64,
      65,    67,    68,    77,    78,    66,     0,     0,     0,     0,
       0,    16,    37,     0,     0,    14,    13,     0,    15,     0,
      57,    58,    59,    21,     0,    24,    25,    86,     0,    50,
      51,     0,    17,     0,     0,     0,    38,    35,    12,     0,
      56,    36,     0,    62,     0,    60,     0,     0,   101,    99,
       0,     0,     0,    34,     0,     0,     0,   100,   103,     0,
       0,     0,   105,    93,    96,   102,     0,   104,     0,   107,
       0,     0,    94,    98,     0,   106,    95,    97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,   123,   172,   125,    22,     9,    47,
      48,   126,    23,    11,   127,    61,    62,    63,    20,   128,
      90,   129,   130,   182,   131,   132,   162,   170,   178,   173
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -110
static const yytype_int16 yypact[] =
{
      77,   -38,  -110,  -110,  -110,     4,  -110,    32,  -110,  -110,
    -110,  -110,    82,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
       9,   -25,    24,    26,   386,    56,    20,  -110,  -110,    35,
     470,   470,   470,   470,   470,   367,    78,   132,   138,   149,
      70,    72,   764,    -7,  -110,  -110,    55,    33,    75,    82,
     409,  -110,  -110,  -110,  -110,    34,    95,    34,    34,   508,
    -110,    84,    94,    51,    79,   122,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,  -110,  -110,   470,
     470,   470,   470,   470,  -110,    97,    92,    15,   123,  -110,
     104,   540,  -110,   386,   386,  -110,     0,  -110,     0,  -110,
     376,   376,   376,   376,   376,   376,   376,   376,   796,    95,
      95,   137,   764,    34,    34,   137,   110,   470,   112,   113,
     114,  -110,  -110,   129,   157,  -110,  -110,    82,  -110,   572,
    -110,  -110,  -110,  -110,   213,  -110,  -110,  -110,   470,  -110,
    -110,   139,  -110,   604,   470,   470,   344,  -110,  -110,    56,
    -110,  -110,   135,  -110,     0,  -110,   636,   668,  -110,  -110,
      82,   700,   428,  -110,   269,   269,   139,  -110,  -110,   732,
     451,   325,  -110,   170,  -110,  -110,   269,   764,   150,  -110,
     147,   269,  -110,  -110,   269,  -110,  -110,  -110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,   175,  -110,  -109,   -63,    60,   171,  -110,   108,
    -110,    13,   -11,  -110,     5,   174,   176,   -64,   -48,  -110,
      63,   -24,  -110,  -110,  -110,  -110,  -110,  -110,  -110,   -90
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -45
static const yytype_int16 yytable[] =
{
      42,    88,    13,    24,    14,    12,    55,    56,    57,    58,
      59,    42,    12,    10,    45,   148,    25,    26,     2,     3,
      10,    24,   124,     2,     3,   152,    91,    21,    24,   139,
     140,    49,    -3,     1,    25,     2,     3,   -38,   -38,   -38,
     -38,   141,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    97,    99,   111,   112,   113,   114,   115,
       8,   124,   180,    46,    27,    77,    28,     8,    78,    42,
      42,   124,     4,    80,    43,   174,    86,    50,     1,   149,
       2,     3,   -38,   -38,   -38,   -38,   183,    16,    17,    18,
      19,   186,    49,   143,   187,    84,    95,    96,   116,    85,
       2,     3,   -38,   -38,   -38,   -38,   117,   118,   124,   119,
     120,    64,   166,    65,    91,    29,    87,     4,   -41,   -41,
     156,   157,   161,   -41,    30,    93,    77,    31,    32,    78,
      45,    33,   133,    79,    80,    94,   134,   121,   169,    34,
      98,   136,   122,    81,    82,    83,   177,   137,    51,    52,
     142,   160,    53,    54,   144,   145,   146,   154,   116,   159,
       2,     3,   -38,   -38,   -38,   -38,   117,   118,    77,   119,
     120,    78,   -42,   -42,   147,    29,    80,   -42,   -43,   -43,
     163,   181,    15,   -43,    30,    81,    82,    31,    32,   -44,
     -44,    33,   185,   184,   -44,   135,    44,   121,    40,    34,
      41,   153,   -11,     0,     0,     0,     0,     0,    51,    52,
       0,     0,    53,    54,   116,     0,     2,     3,   -38,   -38,
     -38,   -38,   117,   118,     0,   119,   120,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,    31,    32,     0,     0,    33,     0,     0,
       0,     0,     0,   121,     0,    34,     0,     0,   151,     0,
       0,     0,     0,     0,    51,    52,     0,     0,    53,    54,
     116,     0,     2,     3,   -38,   -38,   -38,   -38,   117,   118,
       0,   119,   120,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,    31,
      32,     0,     0,    33,     0,     0,     0,     0,     0,   121,
       0,    34,     0,   171,     0,     0,     0,     0,     0,     0,
      51,    52,     0,     0,    53,    54,   116,     0,     2,     3,
     -38,   -38,   -38,   -38,   117,   118,     0,   119,   120,     0,
       0,     0,     0,    29,     0,     0,     0,     2,     3,     0,
       0,     0,    30,     0,     0,    31,    32,     0,     0,    33,
       0,     0,    29,     0,     0,   121,     0,    34,     0,     0,
     179,    30,     0,     0,    31,    32,    51,    52,    33,     0,
      53,    54,     0,     0,   158,    29,    34,     0,     0,     0,
       0,     0,     0,     0,    30,    51,    52,    31,    32,    53,
      54,    33,     0,     0,    29,    75,    76,    77,     0,    34,
      78,    35,    60,    30,    79,    80,    31,    32,    36,    37,
      33,     0,    38,    39,    81,    82,    83,    29,    34,     0,
      35,     0,     0,     0,     0,     0,    30,    36,    37,    31,
      32,    38,    39,    33,     0,     0,    29,     0,     0,     0,
       0,    34,    89,     0,     0,    30,     0,     0,    31,    32,
      51,    52,    33,     0,    53,    54,     0,     0,   168,    29,
      34,     0,     0,     0,     0,     0,     0,     0,    30,    51,
      52,    31,    32,    53,    54,    33,     0,     0,    29,     0,
       0,     0,     0,    34,   176,     0,     0,    30,     0,     0,
      31,    32,    51,    52,    33,     0,    53,    54,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    52,     0,     0,    53,    54,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,    76,    77,
       0,     0,    78,     0,     0,     0,    79,    80,     0,     0,
       0,    92,     0,     0,     0,     0,    81,    82,    83,    66,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,     0,     0,    78,     0,     0,     0,    79,    80,
       0,   138,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    77,     0,     0,    78,     0,     0,     0,
      79,    80,   150,     0,     0,     0,     0,     0,     0,     0,
      81,    82,    83,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,    76,    77,     0,     0,    78,     0,
       0,     0,    79,    80,   155,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    83,    66,    67,    68,    69,    70,
      71,    72,    73,     0,    74,    75,    76,    77,     0,     0,
      78,     0,     0,     0,    79,    80,     0,     0,     0,   164,
       0,     0,     0,     0,    81,    82,    83,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,    76,    77,
       0,     0,    78,     0,     0,     0,    79,    80,     0,     0,
       0,   165,     0,     0,     0,     0,    81,    82,    83,    66,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
      76,    77,     0,     0,    78,     0,     0,     0,    79,    80,
     167,     0,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    77,     0,     0,    78,     0,     0,     0,
      79,    80,   175,     0,     0,     0,     0,     0,     0,     0,
      81,    82,    83,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,    76,    77,     0,     0,    78,     0,
       0,     0,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    83,    66,    67,    68,    69,    70,
      71,    72,    73,     0,     0,    75,    76,    77,     0,     0,
      78,     0,     0,     0,    79,    80,     0,     0,     0,     0,
       0,     0,     0,     0,    81,    82,    83
};

static const yytype_int16 yycheck[] =
{
      24,    49,    40,    28,     0,     0,    30,    31,    32,    33,
      34,    35,     7,     0,    25,   124,    41,    42,     3,     4,
       7,    28,    85,     3,     4,   134,    50,    18,    28,    93,
      94,    26,     0,     1,    41,     3,     4,     5,     6,     7,
       8,    41,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    64,    65,    79,    80,    81,    82,    83,
       0,   124,   171,    43,    40,    31,    40,     7,    34,    93,
      94,   134,    40,    39,    18,   165,    43,    42,     1,   127,
       3,     4,     5,     6,     7,     8,   176,     5,     6,     7,
       8,   181,    87,   117,   184,    40,    45,    18,     1,    44,
       3,     4,     5,     6,     7,     8,     9,    10,   171,    12,
      13,    41,   160,    41,   138,    18,    41,    40,    40,    41,
     144,   145,   146,    45,    27,    41,    31,    30,    31,    34,
     141,    34,    40,    38,    39,    41,    44,    40,   162,    42,
      18,    18,    45,    48,    49,    50,   170,    43,    51,    52,
      40,   146,    55,    56,    42,    42,    42,    18,     1,   146,
       3,     4,     5,     6,     7,     8,     9,    10,    31,    12,
      13,    34,    40,    41,    45,    18,    39,    45,    40,    41,
      45,    11,     7,    45,    27,    48,    49,    30,    31,    40,
      41,    34,    45,    43,    45,    87,    25,    40,    24,    42,
      24,   138,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    55,    56,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    55,    56,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    55,    56,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,     3,     4,    -1,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    -1,    34,
      -1,    -1,    18,    -1,    -1,    40,    -1,    42,    -1,    -1,
      45,    27,    -1,    -1,    30,    31,    51,    52,    34,    -1,
      55,    56,    -1,    -1,    40,    18,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    51,    52,    30,    31,    55,
      56,    34,    -1,    -1,    18,    29,    30,    31,    -1,    42,
      34,    44,    45,    27,    38,    39,    30,    31,    51,    52,
      34,    -1,    55,    56,    48,    49,    50,    18,    42,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    27,    51,    52,    30,
      31,    55,    56,    34,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    27,    -1,    -1,    30,    31,
      51,    52,    34,    -1,    55,    56,    -1,    -1,    40,    18,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    51,
      52,    30,    31,    55,    56,    34,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    27,    -1,    -1,
      30,    31,    51,    52,    34,    -1,    55,    56,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    48,    49,    50,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    48,    49,    50,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    48,    49,    50,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    29,    30,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,    40,    89,    90,    91,    94,    96,
      99,   101,   102,    40,     0,    90,     5,     6,     7,     8,
     106,    18,    95,   100,    28,    41,    42,    40,    40,    18,
      27,    30,    31,    34,    42,    44,    51,    52,    55,    56,
     103,   104,   109,    18,    95,   100,    43,    97,    98,   102,
      42,    51,    52,    55,    56,   109,   109,   109,   109,   109,
      45,   103,   104,   105,    41,    41,    19,    20,    21,    22,
      23,    24,    25,    26,    28,    29,    30,    31,    34,    38,
      39,    48,    49,    50,    40,    44,    43,    41,   106,    43,
     108,   109,    43,    41,    41,    45,    18,   100,    18,   100,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,     1,     9,    10,    12,
      13,    40,    45,    92,    93,    94,    99,   102,   107,   109,
     110,   112,   113,    40,    44,    97,    18,    43,    41,   105,
     105,    41,    40,   109,    42,    42,    42,    45,    92,   106,
      40,    45,    92,   108,    18,    40,   109,   109,    40,    99,
     102,   109,   114,    45,    43,    43,   106,    40,    40,   109,
     115,    44,    93,   117,   117,    40,    43,   109,   116,    45,
      92,    11,   111,   117,    43,    45,   117,   117
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
#line 87 "src/parser.y"
    {
            (yyval.node) = NULL;
            astTree = createNode(PROGRAM, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 93 "src/parser.y"
    {
                (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 96 "src/parser.y"
    {
                if ((yyvsp[(1) - (2)].node) != NULL) {
                    prependNode((yyvsp[(2) - (2)].node),(yyvsp[(1) - (2)].node));
                }
                (yyval.node) = (yyvsp[(2) - (2)].node);
            ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 103 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 106 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 109 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 112 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 115 "src/parser.y"
    {
                (yyval.node) = createNode(STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
            ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 118 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 123 "src/parser.y"
    {
                (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 126 "src/parser.y"
    {
                if ((yyvsp[(1) - (2)].node) != NULL) {
                    prependNode((yyvsp[(2) - (2)].node),(yyvsp[(1) - (2)].node));
                }
                (yyval.node) = (yyvsp[(2) - (2)].node);
            ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 133 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 136 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 139 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(1) - (1)].node);
            ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 142 "src/parser.y"
    {
                (yyval.node) = createNode(STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
            ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 145 "src/parser.y"
    {
                (yyval.node) = NULL;
            ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 151 "src/parser.y"
    {
                (yyval.node) = createNode(VAR_DEC_STMT, NULL, (yyvsp[(1) - (4)].node)->line, level, 3, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node));
            ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 156 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEC, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 159 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEC, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 164 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEC_STMT, NULL, (yyvsp[(1) - (7)].node)->line, level, 4, (yyvsp[(1) - (7)].node), (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node));
            ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 167 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEC_STMT, NULL, (yyvsp[(1) - (6)].node)->line, level, 3, (yyvsp[(1) - (6)].node), (yyvsp[(2) - (6)].node), (yyvsp[(3) - (6)].node));
            ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 172 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 175 "src/parser.y"
    {
            (yyval.node) = createNode(ARG_DEC, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 180 "src/parser.y"
    {
            (yyval.node) = createNode(ARG_DEC, NULL, (yyvsp[(1) - (3)].node)->line, level, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 197 "src/parser.y"
    {
                (yyval.node) = createNode(VAR_DEF_STMT, NULL, (yyvsp[(1) - (4)].node)->line, level, 3, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node));
            ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 202 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 205 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 208 "src/parser.y"
    {
            Node *node = createNode(VAR_DEF, NULL, (yyvsp[(5) - (5)].node)->line, level, 1, (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), node);
        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 212 "src/parser.y"
    {
            Node *node = createNode(VAR_DEF, NULL, (yyvsp[(5) - (5)].node)->line, level, 1, (yyvsp[(5) - (5)].node));
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), node);
        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 216 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 219 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
        ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 222 "src/parser.y"
    {
            (yyval.node) = createNode(VAR_DEF, NULL, (yyvsp[(1) - (5)].node)->line, level, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 227 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEF_STMT, NULL, (yyvsp[(1) - (9)].node)->line, level, 5, (yyvsp[(1) - (9)].node), (yyvsp[(2) - (9)].node), (yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(8) - (9)].node));
            ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 230 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEF_STMT, NULL, (yyvsp[(1) - (8)].node)->line, level, 4, (yyvsp[(1) - (8)].node), (yyvsp[(2) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(7) - (8)].node));
            ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 233 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEF_STMT, NULL, (yyvsp[(1) - (8)].node)->line, level, 4, (yyvsp[(1) - (8)].node), (yyvsp[(2) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(5) - (8)].node));
            ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 236 "src/parser.y"
    {
                (yyval.node) = createNode(FUNC_DEF_STMT, NULL, (yyvsp[(1) - (7)].node)->line, level, 3, (yyvsp[(1) - (7)].node), (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node));
            ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 242 "src/parser.y"
    {
                (yyval.node) = createNode(MODIFIER, NULL, yylineno, level, 0)
            ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 245 "src/parser.y"
    {
                (yyval.node) = createNode(MODIFIER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 248 "src/parser.y"
    {
                (yyval.node) = createNode(MODIFIER, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 260 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 263 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 266 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 269 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 272 "src/parser.y"
    {
                (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 281 "src/parser.y"
    {
                        (yyval.node) = (yyvsp[(2) - (3)].node);
                    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 284 "src/parser.y"
    {
                        (yyval.node) = createNode(INITIALIZER_LIST, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
                    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 289 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node)
                ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 292 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 295 "src/parser.y"
    {
                    prependNode((yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
                    (yyval.node) = (yyvsp[(3) - (3)].node);
                ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 299 "src/parser.y"
    {
                    prependNodes((yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
                    (yyval.node) = (yyvsp[(3) - (3)].node);
                ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 305 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 308 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 311 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 314 "src/parser.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 320 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 323 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 326 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 329 "src/parser.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 332 "src/parser.y"
    {
            (yyval.node) = createNode(RETURN, NULL, (yyvsp[(1) - (3)].node)->line, level, 1, (yyvsp[(2) - (3)].node));
        ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 338 "src/parser.y"
    {
            (yyval.node) = createNode(ARG, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 341 "src/parser.y"
    {
            (yyval.node) = createNode(ARG, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 348 "src/parser.y"
    {
        (yyval.node) = createNode(ASSIGN, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 351 "src/parser.y"
    {
        (yyval.node) = createNode(PLUS, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 354 "src/parser.y"
    {
        (yyval.node) = createNode(MINUS, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 357 "src/parser.y"
    {
        (yyval.node) = createNode(MULTIPLY, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 360 "src/parser.y"
    {
        (yyval.node) = createNode(DIV, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 363 "src/parser.y"
    {
        (yyval.node) = createNode(DELIVERY, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 366 "src/parser.y"
    {
        (yyval.node) = createNode(GREATER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 369 "src/parser.y"
    {
        (yyval.node) = createNode(SMALLER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 372 "src/parser.y"
    {
        (yyval.node) = createNode(GREATER_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 375 "src/parser.y"
    {
        (yyval.node) = createNode(SMALLER_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 378 "src/parser.y"
    {
        (yyval.node) = createNode(EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 381 "src/parser.y"
    {
        (yyval.node) = createNode(NOT_EQUAL, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 384 "src/parser.y"
    {
        (yyval.node) = createNode(AND, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 387 "src/parser.y"
    {
        (yyval.node) = createNode(OR, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 390 "src/parser.y"
    {
        (yyval.node) = createNode(DOT, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 393 "src/parser.y"
    {
        (yyval.node) = createNode(POINTER, NULL, (yyvsp[(1) - (3)].node)->line, level, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 397 "src/parser.y"
    {
        Node *node = createNode(INT, "0", (yyvsp[(1) - (2)].node)->line, level, 0);
        (yyval.node) = createNode(MINUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 2, node, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 401 "src/parser.y"
    {
        (yyval.node) = createNode(FDPLUS, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 404 "src/parser.y"
    {
        (yyval.node) = createNode(BDPLUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 407 "src/parser.y"
    {
        (yyval.node) = createNode(FDMINUS, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 410 "src/parser.y"
    {
        (yyval.node) = createNode(BDMINUS, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 413 "src/parser.y"
    {
        (yyval.node) = createNode(NOT, NULL, (yyvsp[(2) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 416 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 419 "src/parser.y"
    {
        (yyval.node) = createNode(FUNC_CALL, NULL, (yyvsp[(1) - (4)].node)->line, level, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 422 "src/parser.y"
    {
        (yyval.node) = createNode(FUNC_CALL, NULL, (yyvsp[(1) - (3)].node)->line, level, 0);
    ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 426 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 429 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 432 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 435 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 438 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 458 "src/parser.y"
    {
        (yyval.node) = createNode(IF, NULL, (yyvsp[(1) - (5)].node)->line, level, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 461 "src/parser.y"
    {
        (yyval.node) = createNode(IF, NULL, (yyvsp[(1) - (6)].node)->line, level, 3, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 465 "src/parser.y"
    {
            (yyval.node) = createNode(ELSE, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(2) - (2)].node));
        ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 471 "src/parser.y"
    {
            (yyval.node) = createNode(WHILE, NULL, (yyvsp[(1) - (5)].node)->line, level, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
        ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 477 "src/parser.y"
    {
        (yyval.node) = createNode(FOR, NULL, (yyvsp[(1) - (7)].node)->line, level, 4, (yyvsp[(3) - (7)].node), (yyvsp[(4) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node));
    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 480 "src/parser.y"
    {
        (yyval.node) = createNode(FOR, NULL, (yyvsp[(1) - (6)].node)->line, level, 3, (yyvsp[(3) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 484 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
                ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 487 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
                ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 490 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_START_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
                ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 494 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_COND_STMT, NULL, (yyvsp[(1) - (2)].node)->line, level, 1, (yyvsp[(1) - (2)].node));
                ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 497 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_COND_STMT, NULL, (yyvsp[(1) - (1)].node)->line, level, 0);
                ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 502 "src/parser.y"
    {
                    (yyval.node) = createNode(FOR_ITER_EXP, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));;
                ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 519 "src/parser.y"
    {
                (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (1)].node)->line, level, 1, (yyvsp[(1) - (1)].node));
            ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 522 "src/parser.y"
    {
                (yyval.node) = (yyvsp[(2) - (3)].node);
            ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 525 "src/parser.y"
    {
                (yyval.node) = createNode(STMTS, NULL, (yyvsp[(1) - (2)].node)->line, level, 0);
            ;}
    break;



/* Line 1455 of yacc.c  */
#line 2754 "src/parser.c"
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
#line 529 "src/parser.y"

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}

