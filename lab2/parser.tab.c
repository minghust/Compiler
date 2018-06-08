/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

  //
  // Created by MingZhang on 2018-05-02
  //

	#include "grammarTree.h"
    #include "lex.yy.c"
    #include "table.h"
    void yyerror(char *msg, ...);

#line 77 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KEY_CLASS = 258,
    KEY_RETURN = 259,
    KEY_FOR = 260,
    KEY_NEW = 261,
    KEY_THIS = 262,
    KEY_WHILE = 263,
    KEY_STATIC = 264,
    KEY_BREAK = 265,
    KEY_IF = 266,
    KEY_ELSE = 267,
    KEY_EXTENDS = 268,
    KEY_PRINT = 269,
    KEY_READINTEGER = 270,
    KEY_READLINE = 271,
    KEY_INSTANCEOF = 272,
    OP_LE = 273,
    OP_GE = 274,
    OP_EQUAL = 275,
    OP_NOTEQUAL = 276,
    OP_AND = 277,
    OP_OR = 278,
    TYPE_VOID = 279,
    TYPE_INTEGER = 280,
    TYPE_FLOAT = 281,
    TYPE_BOOL = 282,
    TYPE_STRING = 283,
    CONSTANT_BOOL = 284,
    CONSTANT_INT_D = 285,
    CONSTANT_INT_H = 286,
    CONSTANT_FLOAT = 287,
    CONSTANT_FLOAT_SC = 288,
    CONSTANT_STRING = 289,
    CONSTANT_NULL = 290,
    IDENTIFIER = 291,
    UMINUS = 292,
    SINGLE_IF = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "parser.y" /* yacc.c:355  */

	Node *treenode;

#line 160 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 177 "parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   486

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,     2,     2,    22,     2,     2,
      35,    36,    21,    18,    34,    19,    33,    20,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
      23,    32,    24,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,     2,     2,     2,     2,
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
      15,    16,    17,    25,    26,    27,    28,    29,    30,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    82,    83,    86,    91,    98,    99,   100,
     103,   108,   114,   115,   116,   117,   118,   119,   120,   123,
     124,   127,   128,   131,   158,   187,   190,   191,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   205,   206,   209,
     210,   211,   214,   215,   218,   219,   222,   223,   226,   229,
     232,   233,   237,   238,   241,   244,   247,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   278,   279,   280,   281,   282,   283,   284
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KEY_CLASS", "KEY_RETURN", "KEY_FOR",
  "KEY_NEW", "KEY_THIS", "KEY_WHILE", "KEY_STATIC", "KEY_BREAK", "KEY_IF",
  "KEY_ELSE", "KEY_EXTENDS", "KEY_PRINT", "KEY_READINTEGER",
  "KEY_READLINE", "KEY_INSTANCEOF", "'+'", "'-'", "'/'", "'*'", "'%'",
  "'<'", "'>'", "OP_LE", "OP_GE", "OP_EQUAL", "OP_NOTEQUAL", "OP_AND",
  "OP_OR", "'!'", "'='", "'.'", "','", "'('", "')'", "'['", "']'", "'{'",
  "'}'", "';'", "TYPE_VOID", "TYPE_INTEGER", "TYPE_FLOAT", "TYPE_BOOL",
  "TYPE_STRING", "CONSTANT_BOOL", "CONSTANT_INT_D", "CONSTANT_INT_H",
  "CONSTANT_FLOAT", "CONSTANT_FLOAT_SC", "CONSTANT_STRING",
  "CONSTANT_NULL", "IDENTIFIER", "UMINUS", "SINGLE_IF", "$accept",
  "Program", "ClassDefList", "ClassDef", "Fields", "VariableDef",
  "Variable", "Type", "Formals", "FormalList", "FunctionDef", "StmtBlock",
  "StmtList", "Stmt", "SimpleStmt", "LValue", "Call", "Actuals",
  "ExprList", "ForStmt", "WhileStmt", "IfStmt", "ReturnStmt", "BreakStmt",
  "PrintStmt", "BoolExpr", "Expr", "Constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    43,    45,
      47,    42,    37,    60,    62,   273,   274,   275,   276,   277,
     278,    33,    61,    46,    44,    40,    41,    91,    93,   123,
     125,    59,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293
};
# endif

#define YYPACT_NINF -158

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-158)))

#define YYTABLE_NINF -39

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -40,    25,  -158,   -11,  -158,     3,   -22,    47,  -158,
      -6,   -13,    55,  -158,  -158,  -158,  -158,  -158,    14,    47,
      39,   -30,    47,    47,  -158,   -27,  -158,  -158,  -158,    43,
      29,  -158,    62,    68,  -158,    55,  -158,    55,  -158,   -24,
      72,    75,    74,  -158,    73,    55,    73,   134,  -158,  -158,
    -158,   290,    80,    41,  -158,    82,  -158,    88,    89,    90,
      91,    92,   290,   290,   238,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,    93,  -158,  -158,    94,   134,    79,    97,  -158,
    -158,  -158,  -158,   102,   105,   106,   409,  -158,  -158,   409,
     290,    98,    95,   290,   290,   290,    99,   116,   290,    26,
      26,   100,   369,   290,  -158,  -158,  -158,   290,  -158,  -158,
    -158,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   110,   290,   125,   131,   264,   132,
     409,   135,   -25,   409,  -158,  -158,   389,   136,  -158,   159,
     164,   409,    85,    85,    26,    26,    26,    18,    18,    18,
      18,   137,   137,   449,   429,   169,   327,   290,  -158,   348,
     186,   186,   290,  -158,   145,   290,  -158,   290,  -158,   165,
    -158,  -158,   195,   409,   172,  -158,   173,   290,   186,  -158,
    -158,   174,  -158,   186,  -158
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     0,     1,     2,     0,     9,     3,
       0,     0,     0,    16,    12,    13,    14,    15,     0,     9,
       0,     0,     9,     9,    17,     0,     5,     7,    10,     0,
      11,     8,     0,     0,    18,    20,     6,    20,    22,     0,
       0,    19,     0,    11,     0,     0,     0,    27,    23,    21,
      24,    52,     0,     0,    59,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    86,    87,    84,    85,
      88,    89,    39,    28,    36,     0,    27,     0,    58,    60,
      32,    31,    30,     0,     0,     0,     0,    57,    58,    53,
      38,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      76,     0,     0,    45,    25,    26,    29,     0,    34,    33,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     0,     0,    47,    77,    78,     0,     0,    61,     0,
      44,    37,    62,    63,    65,    64,    66,    68,    70,    69,
      71,    72,    73,    74,    75,    41,     0,     0,    79,     0,
      38,    38,     0,    55,     0,     0,    42,    45,    40,     0,
      80,    49,    50,    46,     0,    82,     0,    38,    38,    81,
      43,     0,    51,    38,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,   205,    23,    12,    59,     0,   175,  -158,
    -158,    16,   138,  -157,   -89,   -47,  -158,    46,   120,  -158,
    -158,  -158,  -158,  -158,  -158,   -79,   -46,  -158
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     3,    18,    73,    20,    39,    40,    41,
      22,    74,    75,    76,    77,    88,    79,   139,   140,    80,
      81,    82,    83,    84,    85,   129,    86,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,   126,     7,   171,   172,    89,     1,    29,    21,   162,
      29,   163,    25,    29,     4,   131,    99,   100,   102,    21,
      19,   182,    21,    21,    30,     5,   184,    33,     8,    78,
      43,    19,    10,    23,    19,    19,   111,   112,   113,   114,
     115,    24,    27,    78,    11,    31,    32,   130,   130,   133,
      11,   124,   136,    92,    26,   125,    12,   133,    11,   124,
      48,   141,    50,   125,    35,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   169,   156,
      28,    34,   159,    13,    14,    15,    16,    17,   181,    13,
      14,    15,    16,    17,    38,    91,    38,    13,    14,    15,
      16,    17,    36,    37,    49,   113,   114,   115,    44,    45,
      46,   130,    47,    78,    78,    90,   173,    93,   124,   175,
     106,   133,   125,    94,    95,    96,    97,    98,   103,   107,
      78,    78,   128,   127,   104,   134,    78,    11,    51,    52,
      53,    54,    55,   108,    56,    57,   109,   110,    58,    59,
      60,    61,   135,    62,   137,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   155,    63,   157,   158,   160,    64,
     124,   161,   165,    47,   125,   -38,    13,    14,    15,    16,
      17,    65,    66,    67,    68,    69,    70,    71,    72,    11,
      51,    52,    53,    54,    55,   166,    56,    57,   162,   174,
      58,    59,    60,    61,   167,    62,   177,   178,   179,   180,
     183,     9,    42,   176,   105,   132,     0,    63,     0,     0,
       0,    64,     0,     0,     0,    47,     0,     0,    13,    14,
      15,    16,    17,    65,    66,    67,    68,    69,    70,    71,
      72,   101,     0,     0,    53,    54,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,     0,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      53,    54,     0,    64,     0,     0,     0,     0,     0,    59,
      60,    61,     0,    62,     0,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    63,    53,    54,     0,    64,
       0,     0,    34,     0,     0,    59,    60,    61,     0,    62,
       0,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    63,     0,     0,     0,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,    72,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,     0,     0,
     124,     0,     0,     0,   125,   168,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,     0,
       0,   124,     0,     0,     0,   125,   170,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
       0,     0,   124,     0,     0,   138,   125,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
       0,     0,   124,   164,     0,     0,   125,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
       0,     0,   124,     0,     0,     0,   125,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,     0,
       0,     0,   124,     0,     0,     0,   125,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,     0,     0,
       0,     0,   124,     0,     0,     0,   125
};

static const yytype_int16 yycheck[] =
{
      47,    90,    13,   160,   161,    51,     3,    37,     8,    34,
      37,    36,    12,    37,    54,    94,    62,    63,    64,    19,
       8,   178,    22,    23,    54,     0,   183,    54,    39,    76,
      54,    19,    54,    39,    22,    23,    18,    19,    20,    21,
      22,    54,    19,    90,     3,    22,    23,    93,    94,    95,
       3,    33,    98,    53,    40,    37,     9,   103,     3,    33,
      44,   107,    46,    37,    35,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   157,   125,
      41,    38,   128,    42,    43,    44,    45,    46,   177,    42,
      43,    44,    45,    46,    35,    54,    37,    42,    43,    44,
      45,    46,    40,    35,    45,    20,    21,    22,    36,    34,
      36,   157,    39,   160,   161,    35,   162,    35,    33,   165,
      41,   167,    37,    35,    35,    35,    35,    35,    35,    32,
     177,   178,    37,    35,    40,    36,   183,     3,     4,     5,
       6,     7,     8,    41,    10,    11,    41,    41,    14,    15,
      16,    17,    36,    19,    54,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    54,    31,    41,    36,    36,    35,
      33,    36,    36,    39,    37,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     3,
       4,     5,     6,     7,     8,    36,    10,    11,    34,    54,
      14,    15,    16,    17,    35,    19,    41,    12,    36,    36,
      36,     6,    37,   167,    76,    95,    -1,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
       6,     7,    -1,    35,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    31,     6,     7,    -1,    35,
      -1,    -1,    38,    -1,    -1,    15,    16,    17,    -1,    19,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      33,    -1,    -1,    -1,    37,    38,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    33,    -1,    -1,    -1,    37,    38,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    -1,    -1,    36,    37,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    34,    -1,    -1,    37,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    -1,    -1,    -1,    37,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    37,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    58,    60,    54,     0,    59,    13,    39,    60,
      54,     3,     9,    42,    43,    44,    45,    46,    61,    62,
      63,    64,    67,    39,    54,    64,    40,    61,    41,    37,
      54,    61,    61,    54,    38,    35,    40,    35,    63,    64,
      65,    66,    65,    54,    36,    34,    36,    39,    68,    63,
      68,     4,     5,     6,     7,     8,    10,    11,    14,    15,
      16,    17,    19,    31,    35,    47,    48,    49,    50,    51,
      52,    53,    54,    62,    68,    69,    70,    71,    72,    73,
      76,    77,    78,    79,    80,    81,    83,    84,    72,    83,
      35,    54,    64,    35,    35,    35,    35,    35,    35,    83,
      83,     3,    83,    35,    40,    69,    41,    32,    41,    41,
      41,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    33,    37,    71,    35,    37,    82,
      83,    82,    75,    83,    36,    36,    83,    54,    36,    74,
      75,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    54,    83,    41,    36,    83,
      36,    36,    34,    36,    34,    36,    36,    35,    38,    82,
      38,    70,    70,    83,    54,    83,    74,    41,    12,    36,
      36,    71,    70,    36,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    61,    61,    61,
      62,    63,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    69,    69,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    71,    71,    72,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    77,
      78,    78,    79,    79,    80,    81,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    84,    84,    84,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     5,     7,     2,     2,     0,
       2,     2,     1,     1,     1,     1,     1,     2,     3,     1,
       0,     3,     1,     6,     7,     3,     2,     0,     1,     2,
       1,     1,     1,     2,     2,     2,     1,     3,     0,     1,
       4,     3,     4,     6,     1,     0,     3,     1,     9,     5,
       5,     7,     1,     2,     1,     4,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     4,
       5,     6,     5,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 75 "parser.y" /* yacc.c:1646  */
    { 
  (yyval.treenode) = createNode("Program", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode));
  traverse((yyval.treenode), 0);
  displayTable();
  }
#line 1446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 82 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("ClassDefList", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1452 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 83 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("ClassDefList", 0, EMPTY); }
#line 1458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 87 "parser.y" /* yacc.c:1646  */
    { 
  (yyval.treenode) = createNode("ClassDef", 5, (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); 
  addClass((yyvsp[-3].treenode)->__string);
}
#line 1467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 91 "parser.y" /* yacc.c:1646  */
    { 
    (yyval.treenode) = createNode("ClassDef", 7, (yyvsp[-6].treenode), (yyvsp[-5].treenode), (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode));
    addClass((yyvsp[-5].treenode)->__string);
    addClass((yyvsp[-3].treenode)->__string);
     }
#line 1477 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 98 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Fields", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 99 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Fields", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1489 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 100 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Fields", 0, EMPTY); }
#line 1495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 103 "parser.y" /* yacc.c:1646  */
    { 
  (yyval.treenode) = createNode("VariableDef", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); 
  }
#line 1503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 108 "parser.y" /* yacc.c:1646  */
    { 
  (yyval.treenode) = createNode("Variable", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); 
  addVariable((yyvsp[0].treenode)->name, (yyvsp[-1].treenode)->__string);
}
#line 1512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 114 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Type", 1, (yyvsp[0].treenode)); }
#line 1518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 115 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Type", 1, (yyvsp[0].treenode)); }
#line 1524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 116 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Type", 1, (yyvsp[0].treenode)); }
#line 1530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 117 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Type", 1, (yyvsp[0].treenode)); }
#line 1536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 118 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Type", 1, (yyvsp[0].treenode)); }
#line 1542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 119 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Type", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Type", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 123 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Formals", 1, (yyvsp[0].treenode)); }
#line 1560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 124 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Formals", 0, EMPTY); }
#line 1566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 127 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("FormalList", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 128 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("FormalList", 1, (yyvsp[0].treenode)); }
#line 1578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 131 "parser.y" /* yacc.c:1646  */
    { 
  (yyval.treenode) = createNode("FunctionDef", 6, (yyvsp[-5].treenode), (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); 
  vector<ParameterTable> para_list;
  ParameterTable tmp;
  
  Node *para_point = (yyvsp[-2].treenode)->left;
  while(para_point)
  {
	  if(!para_point->left->right) // only one parameter
	  {
		  tmp.para_name = para_point->left->left->right->__string;
		  tmp.para_type = para_point->left->left->name;
		  para_list.push_back(tmp);
		  break;
	  }
	  else
	  {
		  tmp.para_name = para_point->left->right->right->left->right->__string;
		  tmp.para_type = para_point->left->right->right->left->name;
		  para_list.push_back(tmp);
		  para_point = para_point->left;
	  }
  }

  addFunction((yyvsp[-4].treenode)->__string, (yyvsp[-5].treenode)->name, para_list);

  }
#line 1610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 158 "parser.y" /* yacc.c:1646  */
    {
	   (yyval.treenode) = createNode("FunctionDef", 7, (yyvsp[-6].treenode), (yyvsp[-5].treenode), (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); 
	   vector<ParameterTable> para_list;
		ParameterTable tmp;
		
		Node *para_point = (yyvsp[-2].treenode)->left;
		while(para_point)
		{
			if(!para_point->left->right) // only one parameter
			{
				tmp.para_name = para_point->left->left->right->__string;
				tmp.para_type = para_point->left->left->name;
				para_list.push_back(tmp);
				break;
			}
			else
			{
				tmp.para_name = para_point->left->right->right->left->right->__string;
				tmp.para_type = para_point->left->right->right->left->name;
				para_list.push_back(tmp);
				para_point = para_point->left;
			}
		}

		addFunction((yyvsp[-5].treenode)->__string, (yyvsp[-6].treenode)->name, para_list);
		
	   }
#line 1642 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("StmtBlock", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1648 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 190 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("StmtList", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1654 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 191 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("StmtList", 0, EMPTY); }
#line 1660 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 194 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Stmt", 1, (yyvsp[0].treenode)); }
#line 1666 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 195 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Stmt", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1672 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 196 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Stmt", 1, (yyvsp[0].treenode)); }
#line 1678 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 197 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Stmt", 1, (yyvsp[0].treenode)); }
#line 1684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 198 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Stmt", 1, (yyvsp[0].treenode)); }
#line 1690 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 199 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Stmt", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1696 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 200 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Stmt", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Stmt", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 202 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Stmt", 1, (yyvsp[0].treenode)); }
#line 1714 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("SimpleStmt", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("SimpleStmt", 0, EMPTY); }
#line 1726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("LValue", 1, (yyvsp[0].treenode)); }
#line 1732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 210 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("LValue", 4, (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("LValue", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 214 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Call", 4, (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 215 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Call", 6, (yyvsp[-5].treenode), (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 218 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Actuals", 1, (yyvsp[0].treenode)); }
#line 1762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 219 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Actuals", 0, EMPTY); }
#line 1768 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("ExprList", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("ExprList", 1, (yyvsp[0].treenode)); }
#line 1780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("ForStmt", 9, (yyvsp[-8].treenode), (yyvsp[-7].treenode), (yyvsp[-6].treenode), (yyvsp[-5].treenode), (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 229 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("WhileStmt", 5, (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 232 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("IfStmt", 5, (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("IfStmt", 7, (yyvsp[-6].treenode), (yyvsp[-5].treenode), (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 237 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("ReturnStmt", 1, (yyvsp[0].treenode)); }
#line 1810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("ReturnStmt", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 241 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("BreakStmt", 1, (yyvsp[0].treenode)); }
#line 1822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 244 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("PrintStmt", 4, (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 247 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("BoolExpr", 1, (yyvsp[0].treenode)); }
#line 1834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 1, (yyvsp[0].treenode)); }
#line 1840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 1, (yyvsp[0].treenode)); }
#line 1846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 1, (yyvsp[0].treenode)); }
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 1, (yyvsp[0].treenode)); }
#line 1858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 261 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 262 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 263 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 264 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 265 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 266 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 267 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 269 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 2, (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 3, (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 4, (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 273 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 5, (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 6, (yyvsp[-5].treenode), (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Expr", 5, (yyvsp[-4].treenode), (yyvsp[-3].treenode), (yyvsp[-2].treenode), (yyvsp[-1].treenode), (yyvsp[0].treenode)); }
#line 1990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 278 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Constant", 1, (yyvsp[0].treenode)); }
#line 1996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Constant", 1, (yyvsp[0].treenode)); }
#line 2002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 280 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Constant", 1, (yyvsp[0].treenode)); }
#line 2008 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 281 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Constant", 1, (yyvsp[0].treenode)); }
#line 2014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 282 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Constant", 1, (yyvsp[0].treenode)); }
#line 2020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 283 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Constant", 1, (yyvsp[0].treenode)); }
#line 2026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval.treenode) = createNode("Constant", 1, (yyvsp[0].treenode)); }
#line 2032 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2036 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
  return yyresult;
}
#line 287 "parser.y" /* yacc.c:1906  */

#include <stdarg.h>
void yyerror(char *msg, ...)
{
    va_list ap;
    va_start(ap, msg);
    fprintf(stderr, "Error at Line %d: ", yylineno);
    vfprintf(stderr, msg, ap);
    fprintf(stderr, ".\n");
}
