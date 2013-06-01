/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "parser.y"

	#include <stdio.h>
	#include <assert.h>
	#include "Nodo.h"
	#include "NodoPila.h"
	void yyerror(char *s);


/* Line 268 of yacc.c  */
#line 80 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     TEXTO = 258,
     DOCTYPE = 259,
     A = 260,
     _A = 261,
     B = 262,
     _B = 263,
     BLOCKQUOTE = 264,
     BLOCKQUOTE_ = 265,
     _BLOCKQUOTE = 266,
     BODY = 267,
     BODY_ = 268,
     _BODY = 269,
     BR = 270,
     _BR = 271,
     BUTTON = 272,
     BUTTON_ = 273,
     _BUTTON = 274,
     CAPTION = 275,
     CAPTION_ = 276,
     _CAPTION = 277,
     CODE = 278,
     _CODE = 279,
     DIV = 280,
     DIV_ = 281,
     _DIV = 282,
     DL = 283,
     _DL = 284,
     DT = 285,
     _DT = 286,
     DD = 287,
     _DD = 288,
     EM = 289,
     _EM = 290,
     EMBED = 291,
     _EMBED = 292,
     FORM = 293,
     FORM_ = 294,
     _FORM = 295,
     H1 = 296,
     H1_ = 297,
     _H1 = 298,
     H2 = 299,
     H2_ = 300,
     _H2 = 301,
     H3 = 302,
     H3_ = 303,
     _H3 = 304,
     H4 = 305,
     H4_ = 306,
     _H4 = 307,
     H5 = 308,
     H5_ = 309,
     _H5 = 310,
     H6 = 311,
     H6_ = 312,
     _H6 = 313,
     HEAD = 314,
     HEAD_ = 315,
     _HEAD = 316,
     HEADER = 317,
     _HEADER = 318,
     HR = 319,
     HR_ = 320,
     _HR = 321,
     HTML = 322,
     HTML_ = 323,
     _HTML = 324,
     IMG = 325,
     _IMG = 326,
     INPUT = 327,
     _INPUT = 328,
     LI = 329,
     LI_ = 330,
     _LI = 331,
     LINK = 332,
     _LINK = 333,
     META = 334,
     _META = 335,
     OBJECT = 336,
     _OBJECT = 337,
     OL = 338,
     OL_ = 339,
     _OL = 340,
     P = 341,
     P_ = 342,
     _P = 343,
     PRE = 344,
     PRE_ = 345,
     _PRE = 346,
     SCRIPT = 347,
     SCRIPT_ = 348,
     _SCRIPT = 349,
     SPAN = 350,
     _SPAN = 351,
     STRONG = 352,
     _STRONG = 353,
     STYLE = 354,
     _STYLE = 355,
     TABLE = 356,
     _TABLE = 357,
     TD = 358,
     _TD = 359,
     TEXTAREA = 360,
     TEXTAREA_ = 361,
     _TEXTAREA = 362,
     TH = 363,
     _TH = 364,
     TITLE = 365,
     _TITLE = 366,
     TR = 367,
     _TR = 368,
     UL = 369,
     _UL = 370,
     CLOSE = 371,
     ERROR = 372
   };
#endif
/* Tokens.  */
#define TEXTO 258
#define DOCTYPE 259
#define A 260
#define _A 261
#define B 262
#define _B 263
#define BLOCKQUOTE 264
#define BLOCKQUOTE_ 265
#define _BLOCKQUOTE 266
#define BODY 267
#define BODY_ 268
#define _BODY 269
#define BR 270
#define _BR 271
#define BUTTON 272
#define BUTTON_ 273
#define _BUTTON 274
#define CAPTION 275
#define CAPTION_ 276
#define _CAPTION 277
#define CODE 278
#define _CODE 279
#define DIV 280
#define DIV_ 281
#define _DIV 282
#define DL 283
#define _DL 284
#define DT 285
#define _DT 286
#define DD 287
#define _DD 288
#define EM 289
#define _EM 290
#define EMBED 291
#define _EMBED 292
#define FORM 293
#define FORM_ 294
#define _FORM 295
#define H1 296
#define H1_ 297
#define _H1 298
#define H2 299
#define H2_ 300
#define _H2 301
#define H3 302
#define H3_ 303
#define _H3 304
#define H4 305
#define H4_ 306
#define _H4 307
#define H5 308
#define H5_ 309
#define _H5 310
#define H6 311
#define H6_ 312
#define _H6 313
#define HEAD 314
#define HEAD_ 315
#define _HEAD 316
#define HEADER 317
#define _HEADER 318
#define HR 319
#define HR_ 320
#define _HR 321
#define HTML 322
#define HTML_ 323
#define _HTML 324
#define IMG 325
#define _IMG 326
#define INPUT 327
#define _INPUT 328
#define LI 329
#define LI_ 330
#define _LI 331
#define LINK 332
#define _LINK 333
#define META 334
#define _META 335
#define OBJECT 336
#define _OBJECT 337
#define OL 338
#define OL_ 339
#define _OL 340
#define P 341
#define P_ 342
#define _P 343
#define PRE 344
#define PRE_ 345
#define _PRE 346
#define SCRIPT 347
#define SCRIPT_ 348
#define _SCRIPT 349
#define SPAN 350
#define _SPAN 351
#define STRONG 352
#define _STRONG 353
#define STYLE 354
#define _STYLE 355
#define TABLE 356
#define _TABLE 357
#define TD 358
#define _TD 359
#define TEXTAREA 360
#define TEXTAREA_ 361
#define _TEXTAREA 362
#define TH 363
#define _TH 364
#define TITLE 365
#define _TITLE 366
#define TR 367
#define _TR 368
#define UL 369
#define _UL 370
#define CLOSE 371
#define ERROR 372




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 10 "parser.y"

        char *string;
        int columna;
        int linea;
        int largo;



/* Line 293 of yacc.c  */
#line 359 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 371 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   952

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNRULES -- Number of states.  */
#define YYNSTATES  256

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   372

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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    10,    12,    15,    17,    20,    23,
      26,    29,    32,    35,    37,    40,    42,    45,    48,    50,
      53,    55,    57,    61,    63,    65,    68,    70,    73,    76,
      79,    82,    85,    88,    91,    94,    97,   100,   103,   106,
     109,   112,   115,   118,   121,   124,   127,   130,   133,   136,
     137,   140,   143,   147,   151,   153,   156,   158,   161,   165,
     169,   171,   174,   176,   180,   184,   186,   189,   193,   197,
     201,   203,   207,   209,   213,   216,   220,   224,   228,   230,
     233,   235,   237,   239,   241,   243,   245,   249,   251,   254,
     258,   260,   263,   267,   269,   272,   276,   278,   281,   285,
     287,   290,   294,   296,   299,   302,   304,   307,   310,   313,
     317,   319,   322,   326,   328,   332,   334,   337,   340,   343,
     349,   351,   354,   358,   360,   363,   367,   369,   372,   376,
     377,   381,   385,   390,   394,   395,   397,   400,   402,   406,
     408,   410,   412,   416,   418,   422,   424,   427,   431,   433,
     435,   437,   439
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     119,     0,    -1,   120,   122,   128,   121,    -1,   181,    -1,
      67,    -1,    68,   116,    -1,    69,    -1,   123,   124,    -1,
     123,   125,    -1,   123,   170,    -1,   123,   162,    -1,   123,
     163,    -1,   123,   167,    -1,    59,    -1,    60,   116,    -1,
      61,    -1,   126,   127,    -1,   126,   180,    -1,   110,    -1,
     126,   180,    -1,   110,    -1,   111,    -1,   129,   131,   130,
      -1,   181,    -1,    12,    -1,    13,   116,    -1,    14,    -1,
     132,   131,    -1,   133,   131,    -1,   134,   131,    -1,   137,
     131,    -1,   138,   131,    -1,   141,   131,    -1,   142,   131,
      -1,   143,   131,    -1,   147,   131,    -1,   148,   131,    -1,
     149,   131,    -1,   156,   131,    -1,   157,   131,    -1,   158,
     131,    -1,   162,   131,    -1,   159,   131,    -1,   166,   131,
      -1,   167,   131,    -1,   171,   131,    -1,   179,   131,    -1,
     160,   131,    -1,   180,   131,    -1,    -1,     5,     6,    -1,
       7,     8,    -1,   135,   164,   136,    -1,   135,   180,   136,
      -1,     9,    -1,    10,   116,    -1,    11,    -1,    15,    16,
      -1,   139,   157,   140,    -1,   139,   180,   140,    -1,    17,
      -1,    18,   116,    -1,    19,    -1,    23,   180,    24,    -1,
     142,   131,    27,    -1,    25,    -1,    26,   116,    -1,    28,
     144,    29,    -1,    28,   145,    29,    -1,   144,   180,    33,
      -1,    32,    -1,   145,   180,    31,    -1,    30,    -1,    34,
     180,    35,    -1,    36,    37,    -1,   148,   158,    40,    -1,
     148,   179,    40,    -1,   148,   138,    40,    -1,    38,    -1,
      39,   116,    -1,   150,    -1,   151,    -1,   152,    -1,   153,
      -1,   154,    -1,   155,    -1,   150,   180,    43,    -1,    41,
      -1,    42,   116,    -1,   151,   180,    46,    -1,    44,    -1,
      45,   116,    -1,   152,   180,    49,    -1,    47,    -1,    48,
     116,    -1,   153,   180,    52,    -1,    50,    -1,    51,   116,
      -1,   154,   180,    55,    -1,    53,    -1,    54,   116,    -1,
     155,   180,    58,    -1,    56,    -1,    57,   116,    -1,   156,
      66,    -1,    64,    -1,    65,   116,    -1,    70,    71,    -1,
      72,    73,    -1,   159,   161,    85,    -1,    83,    -1,    84,
     116,    -1,   160,   161,   115,    -1,   114,    -1,   161,   180,
      76,    -1,    74,    -1,    75,   116,    -1,    77,    78,    -1,
      79,    80,    -1,   165,   168,   180,   168,    88,    -1,    86,
      -1,    87,   116,    -1,   166,   180,    91,    -1,    89,    -1,
      90,   116,    -1,   167,   180,    94,    -1,    92,    -1,    93,
     116,    -1,    95,   180,    96,    -1,    -1,    97,   180,    98,
      -1,    99,   180,   100,    -1,   101,   172,   175,   102,    -1,
     173,   180,   174,    -1,    -1,    20,    -1,    21,   116,    -1,
      22,    -1,   175,   176,   113,    -1,   112,    -1,   177,    -1,
     178,    -1,   177,   180,   109,    -1,   108,    -1,   178,   180,
     104,    -1,   103,    -1,   105,   107,    -1,   105,   180,   107,
      -1,   164,    -1,   169,    -1,   146,    -1,     3,    -1,   117,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   136,   136,   137,   141,   142,   146,   150,   153,   154,
     155,   156,   157,   158,   159,   163,   166,   169,   170,   172,
     173,   177,   181,   182,   186,   187,   191,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     220,   224,   228,   229,   233,   234,   238,   241,   245,   246,
     250,   251,   255,   259,   263,   264,   265,   269,   270,   274,
     275,   279,   280,   284,   288,   292,   293,   294,   295,   296,
     300,   301,   302,   303,   304,   305,   309,   310,   311,   315,
     316,   317,   321,   322,   323,   327,   328,   329,   333,   334,
     335,   339,   340,   341,   345,   346,   347,   351,   355,   359,
     360,   361,   365,   366,   370,   371,   372,   376,   380,   384,
     388,   389,   393,   394,   395,   399,   400,   401,   405,   406,
     410,   414,   418,   422,   423,   427,   428,   432,   436,   437,
     441,   442,   446,   447,   451,   452,   456,   457,   461,   462,
     463,   464,   468
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TEXTO", "DOCTYPE", "A", "_A", "B", "_B",
  "BLOCKQUOTE", "BLOCKQUOTE_", "_BLOCKQUOTE", "BODY", "BODY_", "_BODY",
  "BR", "_BR", "BUTTON", "BUTTON_", "_BUTTON", "CAPTION", "CAPTION_",
  "_CAPTION", "CODE", "_CODE", "DIV", "DIV_", "_DIV", "DL", "_DL", "DT",
  "_DT", "DD", "_DD", "EM", "_EM", "EMBED", "_EMBED", "FORM", "FORM_",
  "_FORM", "H1", "H1_", "_H1", "H2", "H2_", "_H2", "H3", "H3_", "_H3",
  "H4", "H4_", "_H4", "H5", "H5_", "_H5", "H6", "H6_", "_H6", "HEAD",
  "HEAD_", "_HEAD", "HEADER", "_HEADER", "HR", "HR_", "_HR", "HTML",
  "HTML_", "_HTML", "IMG", "_IMG", "INPUT", "_INPUT", "LI", "LI_", "_LI",
  "LINK", "_LINK", "META", "_META", "OBJECT", "_OBJECT", "OL", "OL_",
  "_OL", "P", "P_", "_P", "PRE", "PRE_", "_PRE", "SCRIPT", "SCRIPT_",
  "_SCRIPT", "SPAN", "_SPAN", "STRONG", "_STRONG", "STYLE", "_STYLE",
  "TABLE", "_TABLE", "TD", "_TD", "TEXTAREA", "TEXTAREA_", "_TEXTAREA",
  "TH", "_TH", "TITLE", "_TITLE", "TR", "_TR", "UL", "_UL", "CLOSE",
  "ERROR", "$accept", "ARCHIVO", "HTML_OPEN_TAG", "HTML_CLOSE_TAG",
  "CABEZA", "CABEZA_OPEN", "CABEZA_CLOSE", "TITULO", "TITULO_OPEN",
  "TITULO_CLOSE", "CUERPO", "CUERPO_OPEN", "CUERPO_CLOSE",
  "CONTENIDO_BODY", "A_TAG", "B_TAG", "BLOCKQUOTE_TAG",
  "BLOCKQUOTE_TAG_OPEN", "BLOCKQUOTE_TAG_CLOSE", "BR_TAG", "BUTTON_TAG",
  "BUTTON_TAG_OPEN", "BUTTON_TAG_CLOSE", "CODE_TAG", "DIV_TAG", "DL_TAG",
  "DD_TAG", "DT_TAG", "EM_TAG", "EMBED_TAG", "FORM_TAG", "H1_H6_TAG",
  "H1_TAG", "H2_TAG", "H3_TAG", "H4_TAG", "H5_TAG", "H6_TAG", "HR_TAG",
  "IMG_TAG", "INPUT_TAG", "OL_TAG", "UL_TAG", "LI_TAG", "LINK_TAG",
  "META_TAG", "P_TAG", "P_TAG_OPEN", "PRE_TAG", "SCRIPT_TAG", "SPAN_TAG",
  "STRONG_TAG", "STYLE_TAG", "TABLE_TAG", "CAPTION_TAG",
  "CAPTION_TAG_OPEN", "CAPTION_TAG_CLOSE", "TR_TAG", "TH_TD_TAG", "TH_TAG",
  "TD_TAG", "TEXTAREA_TAG", "TEXTUAL", "ERROR_CAPTURADO", 0
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   118,   119,   119,   120,   120,   121,   122,   123,   123,
     123,   123,   123,   123,   123,   124,   125,   126,   126,   126,
     126,   127,   128,   128,   129,   129,   130,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   133,   134,   134,   135,   135,   136,   137,   138,   138,
     139,   139,   140,   141,   142,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   147,   148,   148,   148,   148,   148,
     149,   149,   149,   149,   149,   149,   150,   150,   150,   151,
     151,   151,   152,   152,   152,   153,   153,   153,   154,   154,
     154,   155,   155,   155,   156,   156,   156,   157,   158,   159,
     159,   159,   160,   160,   161,   161,   161,   162,   163,   164,
     165,   165,   166,   166,   166,   167,   167,   167,   168,   168,
     169,   170,   171,   172,   172,   173,   173,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     180,   180,   181
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     1,     2,     1,     2,     2,     2,
       2,     2,     2,     1,     2,     1,     2,     2,     1,     2,
       1,     1,     3,     1,     1,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       2,     2,     3,     3,     1,     2,     1,     2,     3,     3,
       1,     2,     1,     3,     3,     1,     2,     3,     3,     3,
       1,     3,     1,     3,     2,     3,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     2,     1,     2,     2,     2,     3,
       1,     2,     3,     1,     3,     1,     2,     2,     2,     5,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     0,
       3,     3,     4,     3,     0,     1,     2,     1,     3,     1,
       1,     1,     3,     1,     3,     1,     2,     3,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,   152,     0,     0,     3,     5,     1,    13,
       0,     0,     0,    14,    24,     0,     0,    49,    23,    15,
       0,     0,   126,     0,     0,    18,     7,     8,     0,    10,
      11,    12,     9,    25,     6,     2,   151,     0,     0,    54,
       0,     0,    60,     0,     0,    65,     0,     0,     0,     0,
      78,     0,    87,     0,    90,     0,    93,     0,    96,     0,
      99,     0,   102,     0,   105,     0,     0,     0,   110,     0,
     120,     0,   123,     0,     0,   134,     0,   113,     0,    49,
      49,    49,     0,    49,    49,     0,    49,    49,    49,   150,
      49,    49,    49,    80,    81,    82,    83,    84,    85,    49,
      49,    49,    49,    49,    49,   148,   129,    49,    49,   149,
      49,    49,    49,   117,   118,   127,     0,    21,    16,    17,
       0,    50,    51,    55,    57,    61,     0,    66,    72,    70,
       0,     0,     0,    74,    79,    88,    91,    94,    97,   100,
     103,   106,   107,   108,   111,   121,   124,     0,   135,     0,
       0,     0,   146,     0,    26,    22,    27,    28,    29,     0,
       0,    30,    31,     0,     0,    32,    33,    34,    35,    36,
      49,    49,    49,    37,     0,     0,     0,     0,     0,     0,
     104,    38,    39,    40,   115,     0,    42,     0,    47,     0,
      41,     0,     0,    43,    49,    44,    49,    45,    46,    48,
     131,   125,    63,    67,     0,    68,     0,    73,   130,   136,
     139,     0,     0,   147,    56,    52,    53,    62,    58,    59,
      64,    77,    75,    76,    86,    89,    92,    95,    98,   101,
     116,   109,     0,   112,     0,   129,   122,    69,    71,   132,
     145,   143,     0,   140,   141,   137,   133,   114,   128,     0,
     138,     0,     0,   119,   142,   144
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    35,    11,    12,    26,    27,    28,   118,
      16,    17,   155,   199,    79,    80,    81,    82,   215,    83,
      84,    85,   218,    86,    87,    88,   130,   131,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   187,   104,    30,   105,   106,   107,   108,
     192,   109,    32,   110,   150,   151,   246,   211,   242,   243,
     244,   111,   112,     6
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -116
static const yytype_int16 yypact[] =
{
     -62,  -116,  -115,  -116,    19,   -44,  -116,  -116,  -116,  -116,
    -107,     1,   -50,  -116,  -116,   -95,   -47,   838,  -116,  -116,
     -55,   -52,  -116,   -91,    60,  -116,  -116,  -116,    42,  -116,
    -116,    60,  -116,  -116,  -116,  -116,  -116,    24,    25,  -116,
     -84,    18,  -116,   -81,    60,  -116,   -80,   -20,    60,     0,
    -116,   -78,  -116,   -77,  -116,   -76,  -116,   -75,  -116,   -72,
    -116,   -70,  -116,   -68,  -116,   -63,   -15,   -16,  -116,   -57,
    -116,   -51,  -116,   -49,    60,    -3,    44,  -116,    50,   838,
     838,   838,    60,   838,   838,    51,   838,   838,   838,  -116,
     838,   838,   838,    60,    60,    60,    60,    60,    60,   280,
     838,   838,   187,   187,   838,  -116,   -29,   838,   838,  -116,
     838,   838,   838,  -116,  -116,  -116,   -32,  -116,  -116,  -116,
     -19,  -116,  -116,  -116,  -116,  -116,    55,  -116,  -116,  -116,
      48,   120,    45,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,   -17,  -116,   -30,
     -25,    60,  -116,    -9,  -116,  -116,  -116,  -116,  -116,    91,
      91,  -116,  -116,    84,    84,  -116,    77,  -116,  -116,  -116,
     373,   466,   559,  -116,    62,    78,    83,    74,    81,    75,
    -116,  -116,  -116,  -116,  -116,    26,  -116,    88,  -116,    28,
    -116,    60,    60,  -116,   652,  -116,   745,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,   107,  -116,   113,  -116,  -116,  -116,
    -116,  -100,   128,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,    76,  -116,    59,   -29,  -116,  -116,  -116,  -116,
    -116,  -116,    43,    60,    60,  -116,  -116,  -116,  -116,    70,
    -116,    52,    56,  -116,  -116,  -116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,     9,  -116,  -116,  -116,  -116,    -1,  -116,
      71,  -116,     2,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,    79,
      80,  -116,  -116,    66,   158,  -116,    90,  -116,  -116,   164,
     -58,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,    87,   -24,   171
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     116,     7,   239,   240,   119,     1,     2,   120,   241,    13,
     128,    19,   129,    14,    15,     9,    10,   148,   149,     8,
     126,    33,    34,   113,   132,   115,    78,    20,   114,    21,
     121,    36,   123,   122,   124,   125,   127,   133,   134,   135,
     136,   137,    22,    23,   138,    36,   139,    36,   140,    24,
     147,    36,   153,   141,    36,     3,   142,   143,   160,   144,
      25,   164,    48,    36,   154,   145,   191,   146,   200,   174,
     175,   176,   177,   178,   179,   201,    48,   203,    48,   202,
     207,   208,    48,   194,   196,    48,   209,   210,   156,   157,
     158,    36,   161,   162,    48,   165,   166,   167,   213,   168,
     169,   173,   214,   217,   220,   224,   204,   206,   181,   182,
     183,   186,   188,   190,    70,    71,   193,   195,     3,   197,
     198,    66,    48,    36,   225,    74,   227,   212,    70,    71,
      70,    71,   226,   229,    70,    71,   228,    70,    71,    74,
     237,    74,   230,   233,   238,    74,    70,    71,    74,   205,
     245,   152,   247,   117,    48,   248,   250,    74,   253,   216,
     255,   254,   170,   232,   163,   232,   219,   234,   235,   189,
      29,   171,   159,   231,    70,    71,    31,   249,   172,   162,
     183,   198,    18,     0,     0,    74,     0,     0,     0,     0,
      36,     0,    37,     0,    38,     0,    39,    40,     0,     0,
       0,     0,    41,     0,    42,    43,    70,    71,     0,     0,
      44,     0,    45,    46,     0,    47,     0,    74,     0,   251,
     252,    48,     0,    49,     0,    50,    51,     0,    52,    53,
       0,    54,    55,     0,    56,    57,     0,    58,    59,     0,
      60,    61,     0,    62,    63,     0,     0,     0,     0,     0,
       0,    64,    65,     0,     0,     0,     0,    66,     0,    67,
       0,   184,   185,     0,    20,     0,     0,     0,     0,     0,
      68,    69,     0,    70,    71,     0,    72,    73,     0,    22,
      23,     0,     0,    36,    74,    37,     0,    38,    75,    39,
      40,     0,    76,     0,     0,    41,     0,    42,    43,     0,
       0,    77,     0,    44,     0,    45,    46,     0,    47,     0,
       0,     0,     0,     0,    48,     0,    49,     0,    50,    51,
       0,    52,    53,     0,    54,    55,     0,    56,    57,     0,
      58,    59,     0,    60,    61,     0,    62,    63,     0,     0,
       0,     0,     0,     0,    64,    65,   180,     0,     0,     0,
      66,     0,    67,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,    68,    69,     0,    70,    71,     0,    72,
      73,     0,    22,    23,     0,     0,    36,    74,    37,     0,
      38,    75,    39,    40,     0,    76,     0,     0,    41,     0,
      42,    43,     0,     0,    77,     0,    44,     0,    45,    46,
       0,    47,     0,     0,     0,     0,     0,    48,     0,    49,
       0,    50,    51,   221,    52,    53,     0,    54,    55,     0,
      56,    57,     0,    58,    59,     0,    60,    61,     0,    62,
      63,     0,     0,     0,     0,     0,     0,    64,    65,     0,
       0,     0,     0,    66,     0,    67,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,    68,    69,     0,    70,
      71,     0,    72,    73,     0,    22,    23,     0,     0,    36,
      74,    37,     0,    38,    75,    39,    40,     0,    76,     0,
       0,    41,     0,    42,    43,     0,     0,    77,     0,    44,
       0,    45,    46,     0,    47,     0,     0,     0,     0,     0,
      48,     0,    49,     0,    50,    51,   222,    52,    53,     0,
      54,    55,     0,    56,    57,     0,    58,    59,     0,    60,
      61,     0,    62,    63,     0,     0,     0,     0,     0,     0,
      64,    65,     0,     0,     0,     0,    66,     0,    67,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,    68,
      69,     0,    70,    71,     0,    72,    73,     0,    22,    23,
       0,     0,    36,    74,    37,     0,    38,    75,    39,    40,
       0,    76,     0,     0,    41,     0,    42,    43,     0,     0,
      77,     0,    44,     0,    45,    46,     0,    47,     0,     0,
       0,     0,     0,    48,     0,    49,     0,    50,    51,   223,
      52,    53,     0,    54,    55,     0,    56,    57,     0,    58,
      59,     0,    60,    61,     0,    62,    63,     0,     0,     0,
       0,     0,     0,    64,    65,     0,     0,     0,     0,    66,
       0,    67,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,    68,    69,     0,    70,    71,     0,    72,    73,
       0,    22,    23,     0,     0,    36,    74,    37,     0,    38,
      75,    39,    40,     0,    76,     0,     0,    41,     0,    42,
      43,     0,     0,    77,     0,    44,     0,    45,    46,     0,
      47,     0,     0,     0,     0,     0,    48,     0,    49,     0,
      50,    51,     0,    52,    53,     0,    54,    55,     0,    56,
      57,     0,    58,    59,     0,    60,    61,     0,    62,    63,
       0,     0,     0,     0,     0,     0,    64,    65,     0,     0,
       0,     0,    66,     0,    67,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,    68,    69,     0,    70,    71,
       0,    72,    73,   236,    22,    23,     0,     0,    36,    74,
      37,     0,    38,    75,    39,    40,     0,    76,     0,     0,
      41,     0,    42,    43,     0,     0,    77,     0,    44,     0,
      45,    46,     0,    47,     0,     0,     0,     0,     0,    48,
       0,    49,     0,    50,    51,     0,    52,    53,     0,    54,
      55,     0,    56,    57,     0,    58,    59,     0,    60,    61,
       0,    62,    63,     0,     0,     0,     0,     0,     0,    64,
      65,     0,     0,     0,     0,    66,     0,    67,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,    68,    69,
       0,    70,    71,     0,    72,    73,     0,    22,    23,   201,
       0,    36,    74,    37,     0,    38,    75,    39,    40,     0,
      76,     0,     0,    41,     0,    42,    43,     0,     0,    77,
       0,    44,     0,    45,    46,     0,    47,     0,     0,     0,
       0,     0,    48,     0,    49,     0,    50,    51,     0,    52,
      53,     0,    54,    55,     0,    56,    57,     0,    58,    59,
       0,    60,    61,     0,    62,    63,     0,     0,     0,     0,
       0,     0,    64,    65,     0,     0,     0,     0,    66,     0,
      67,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,    68,    69,     0,    70,    71,     0,    72,    73,     0,
      22,    23,     0,     0,     0,    74,     0,     0,     0,    75,
       0,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,    77
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-116))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      24,   116,   102,   103,    28,    67,    68,    31,   108,   116,
      30,    61,    32,    12,    13,    59,    60,    20,    21,     0,
      44,   116,    69,    78,    48,   116,    17,    77,    80,    79,
       6,     3,   116,     8,    16,   116,   116,    37,   116,   116,
     116,   116,    92,    93,   116,     3,   116,     3,   116,    99,
      74,     3,    76,   116,     3,   117,    71,    73,    82,   116,
     110,    85,    34,     3,    14,   116,    95,   116,   100,    93,
      94,    95,    96,    97,    98,    94,    34,    29,    34,    24,
      35,    98,    34,   107,   108,    34,   116,   112,    79,    80,
      81,     3,    83,    84,    34,    86,    87,    88,   107,    90,
      91,    92,    11,    19,    27,    43,   130,   131,    99,   100,
     101,   102,   103,   104,    86,    87,   107,   108,   117,   110,
     111,    70,    34,     3,    46,    97,    52,   151,    86,    87,
      86,    87,    49,    58,    86,    87,    55,    86,    87,    97,
      33,    97,   116,   115,    31,    97,    86,    87,    97,    29,
      22,   107,    76,   111,    34,    96,   113,    97,    88,   160,
     104,   109,    91,   187,    85,   189,   164,   191,   192,   103,
      12,    91,    82,    85,    86,    87,    12,   235,    91,   170,
     171,   172,    11,    -1,    -1,    97,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    -1,    17,    18,    86,    87,    -1,    -1,
      23,    -1,    25,    26,    -1,    28,    -1,    97,    -1,   243,
     244,    34,    -1,    36,    -1,    38,    39,    -1,    41,    42,
      -1,    44,    45,    -1,    47,    48,    -1,    50,    51,    -1,
      53,    54,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,    84,    -1,    86,    87,    -1,    89,    90,    -1,    92,
      93,    -1,    -1,     3,    97,     5,    -1,     7,   101,     9,
      10,    -1,   105,    -1,    -1,    15,    -1,    17,    18,    -1,
      -1,   114,    -1,    23,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    38,    39,
      -1,    41,    42,    -1,    44,    45,    -1,    47,    48,    -1,
      50,    51,    -1,    53,    54,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    86,    87,    -1,    89,
      90,    -1,    92,    93,    -1,    -1,     3,    97,     5,    -1,
       7,   101,     9,    10,    -1,   105,    -1,    -1,    15,    -1,
      17,    18,    -1,    -1,   114,    -1,    23,    -1,    25,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,    38,    39,    40,    41,    42,    -1,    44,    45,    -1,
      47,    48,    -1,    50,    51,    -1,    53,    54,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    86,
      87,    -1,    89,    90,    -1,    92,    93,    -1,    -1,     3,
      97,     5,    -1,     7,   101,     9,    10,    -1,   105,    -1,
      -1,    15,    -1,    17,    18,    -1,    -1,   114,    -1,    23,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    38,    39,    40,    41,    42,    -1,
      44,    45,    -1,    47,    48,    -1,    50,    51,    -1,    53,
      54,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,
      84,    -1,    86,    87,    -1,    89,    90,    -1,    92,    93,
      -1,    -1,     3,    97,     5,    -1,     7,   101,     9,    10,
      -1,   105,    -1,    -1,    15,    -1,    17,    18,    -1,    -1,
     114,    -1,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    -1,    38,    39,    40,
      41,    42,    -1,    44,    45,    -1,    47,    48,    -1,    50,
      51,    -1,    53,    54,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    84,    -1,    86,    87,    -1,    89,    90,
      -1,    92,    93,    -1,    -1,     3,    97,     5,    -1,     7,
     101,     9,    10,    -1,   105,    -1,    -1,    15,    -1,    17,
      18,    -1,    -1,   114,    -1,    23,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      38,    39,    -1,    41,    42,    -1,    44,    45,    -1,    47,
      48,    -1,    50,    51,    -1,    53,    54,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    86,    87,
      -1,    89,    90,    91,    92,    93,    -1,    -1,     3,    97,
       5,    -1,     7,   101,     9,    10,    -1,   105,    -1,    -1,
      15,    -1,    17,    18,    -1,    -1,   114,    -1,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    -1,    38,    39,    -1,    41,    42,    -1,    44,
      45,    -1,    47,    48,    -1,    50,    51,    -1,    53,    54,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    86,    87,    -1,    89,    90,    -1,    92,    93,    94,
      -1,     3,    97,     5,    -1,     7,   101,     9,    10,    -1,
     105,    -1,    -1,    15,    -1,    17,    18,    -1,    -1,   114,
      -1,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,    -1,    38,    39,    -1,    41,
      42,    -1,    44,    45,    -1,    47,    48,    -1,    50,    51,
      -1,    53,    54,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    86,    87,    -1,    89,    90,    -1,
      92,    93,    -1,    -1,    -1,    97,    -1,    -1,    -1,   101,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,    68,   117,   119,   120,   181,   116,     0,    59,
      60,   122,   123,   116,    12,    13,   128,   129,   181,    61,
      77,    79,    92,    93,    99,   110,   124,   125,   126,   162,
     163,   167,   170,   116,    69,   121,     3,     5,     7,     9,
      10,    15,    17,    18,    23,    25,    26,    28,    34,    36,
      38,    39,    41,    42,    44,    45,    47,    48,    50,    51,
      53,    54,    56,    57,    64,    65,    70,    72,    83,    84,
      86,    87,    89,    90,    97,   101,   105,   114,   131,   132,
     133,   134,   135,   137,   138,   139,   141,   142,   143,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   162,   164,   165,   166,   167,   169,
     171,   179,   180,    78,    80,   116,   180,   111,   127,   180,
     180,     6,     8,   116,    16,   116,   180,   116,    30,    32,
     144,   145,   180,    37,   116,   116,   116,   116,   116,   116,
     116,   116,    71,    73,   116,   116,   116,   180,    20,    21,
     172,   173,   107,   180,    14,   130,   131,   131,   131,   164,
     180,   131,   131,   157,   180,   131,   131,   131,   131,   131,
     138,   158,   179,   131,   180,   180,   180,   180,   180,   180,
      66,   131,   131,   131,    74,    75,   131,   161,   131,   161,
     131,    95,   168,   131,   180,   131,   180,   131,   131,   131,
     100,    94,    24,    29,   180,    29,   180,    35,    98,   116,
     112,   175,   180,   107,    11,   136,   136,    19,   140,   140,
      27,    40,    40,    40,    43,    46,    49,    52,    55,    58,
     116,    85,   180,   115,   180,   180,    91,    33,    31,   102,
     103,   108,   176,   177,   178,    22,   174,    76,    96,   168,
     113,   180,   180,    88,   109,   104
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
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
  *++yyvsp = yylval;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 136 "parser.y"
    {imprimir();}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 137 "parser.y"
    {printf("ERROR\n");}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 141 "parser.y"
    {insertar("html");}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 142 "parser.y"
    {insertar("html");}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 146 "parser.y"
    {insertar("/html");}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 158 "parser.y"
    {insertar("head");}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 159 "parser.y"
    {insertar("head");}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 163 "parser.y"
    {insertar("/head");}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 169 "parser.y"
    {}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 170 "parser.y"
    {insertar("title");}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 173 "parser.y"
    {insertar("title");}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 177 "parser.y"
    {insertar("/title");}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 182 "parser.y"
    {printf("ERROR\n");}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 186 "parser.y"
    {insertar("body");}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 187 "parser.y"
    {insertar("body");}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 191 "parser.y"
    {insertar("/body");}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 220 "parser.y"
    {insertar("a"); insertar("/a");}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 224 "parser.y"
    {insertar("b"); insertar("/b");}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 233 "parser.y"
    {insertar("blockquote");}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 234 "parser.y"
    {insertar("blockquote");}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 238 "parser.y"
    {insertar("/blockquote");}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 241 "parser.y"
    {insertar("br"); insertar("/br");}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 250 "parser.y"
    {insertar("button");}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 251 "parser.y"
    {insertar("button");}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 255 "parser.y"
    {insertar("/button");}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 259 "parser.y"
    {insertar("code"); insertar("texto"); insertar("/code");}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 264 "parser.y"
    {insertar("div");}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 265 "parser.y"
    {insertar("/div");}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 269 "parser.y"
    {insertar("dl"); insertar("dl");}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 274 "parser.y"
    {insertar("texto"); insertar("/dd");}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 275 "parser.y"
    {insertar("dd");}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 279 "parser.y"
    {insertar("texto"); insertar("/dt");}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 280 "parser.y"
    {insertar("dt");}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 284 "parser.y"
    {insertar("em"); insertar("texto"); insertar("/em");}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 288 "parser.y"
    {insertar("embed"); insertar("/embed");}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 292 "parser.y"
    {insertar("/form");}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 293 "parser.y"
    {insertar("/form");}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 294 "parser.y"
    {insertar("/form");}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 295 "parser.y"
    {insertar("form");}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 296 "parser.y"
    {insertar("form");}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 309 "parser.y"
    {insertar("/h1");}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 310 "parser.y"
    {insertar("h1");}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 311 "parser.y"
    {insertar("h1");}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 315 "parser.y"
    {insertar("/h2");}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 316 "parser.y"
    {insertar("h2");}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 317 "parser.y"
    {insertar("h2");}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 321 "parser.y"
    {insertar("/h3");}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 322 "parser.y"
    {insertar("h3");}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 323 "parser.y"
    {insertar("h3");}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 327 "parser.y"
    {insertar("/h4");}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 328 "parser.y"
    {insertar("h4");}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 329 "parser.y"
    {insertar("h4");}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 333 "parser.y"
    {insertar("/h5");}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 334 "parser.y"
    {insertar("h5");}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 335 "parser.y"
    {insertar("h5");}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 339 "parser.y"
    {insertar("/h6");}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 340 "parser.y"
    {insertar("h6");}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 341 "parser.y"
    {insertar("h6");}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 345 "parser.y"
    {insertar("/hr");}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 346 "parser.y"
    {insertar("hr");}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 347 "parser.y"
    {insertar("hr");}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 351 "parser.y"
    {insertar("img"); insertar("/img");}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 355 "parser.y"
    {insertar("input"); insertar("/input");}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 359 "parser.y"
    {insertar("/ol");}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 360 "parser.y"
    {insertar("ol");}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 361 "parser.y"
    {insertar("ol");}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 365 "parser.y"
    {insertar("/ul");}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 366 "parser.y"
    {insertar("ul");}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 370 "parser.y"
    {insertar("/li");}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 371 "parser.y"
    {insertar("li");}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 372 "parser.y"
    {insertar("li");}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 376 "parser.y"
    {insertar("link"); insertar("/link");}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 380 "parser.y"
    {insertar("meta"); insertar("/meta");}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 384 "parser.y"
    {insertar("/p");}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 388 "parser.y"
    {insertar("p");}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 389 "parser.y"
    {insertar("p");}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 393 "parser.y"
    {insertar("/pre");}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 394 "parser.y"
    {insertar("pre");}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 395 "parser.y"
    {insertar("pre");}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 399 "parser.y"
    {insertar("/script");}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 400 "parser.y"
    {insertar("script");}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 401 "parser.y"
    {insertar("script");}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 405 "parser.y"
    {insertar("span"); insertar("texto"); insertar("/span");}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 410 "parser.y"
    {insertar("strong"); insertar("/strong");}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 414 "parser.y"
    {insertar("style"); insertar("/style");}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 418 "parser.y"
    {insertar("table"); insertar("/table");}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 427 "parser.y"
    {insertar("caption");}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 428 "parser.y"
    {insertar("caption");}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 432 "parser.y"
    {insertar("/caption");}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 436 "parser.y"
    {insertar("/tr");}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 437 "parser.y"
    {insertar("tr");}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 446 "parser.y"
    {insertar("/th");}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 447 "parser.y"
    {insertar("th");}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 451 "parser.y"
    {insertar("/td");}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 452 "parser.y"
    {insertar("td");}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 456 "parser.y"
    {insertar("textarea"); insertar("/textarea");}
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 457 "parser.y"
    {insertar("textarea"); insertar("/textarea");}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 464 "parser.y"
    { insertar("texto");}
    break;



/* Line 1806 of yacc.c  */
#line 2695 "y.tab.c"
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

  *++yyvsp = yylval;


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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 471 "parser.y"


/*Variables para el árbol de parsing*/
PTRNODOPILA ptrPila = NULL;
struct nodoLista *ptr = NULL;
int cantidadTabsPorTag = 0;
/*Fin variables para el árbol de parsing*/

void yyerror(char *s)
{
	fprintf(stderr, "Error hola hola hola %s\n",s);
}

int main() {
	return yyparse();
}


/**********************************************/
/**********************************************/
/* Funciones para generar el árbol de parsing */
/**********************************************/
/**********************************************/

/*Si al insertar el nodo no hay nada en la lista, se crea la lista con un único nodo.*/
struct nodoLista* crearLista(char *tag)
{
    /*Asignación de memoria*/
    struct nodoLista *ptr = (struct nodoLista*)malloc(sizeof(struct nodoLista));
    if(ptr == NULL) /*No hay memoria suficiente.*/
    {
        printf("No se pudo crear el Nodo. No hay suficiente memoria.\n");
    }
    else
    {
        ptr->etiqueta = strdup(tag); /*Se establecen los valores de las datos del nodo*/
        ptr->padre = "ROOT";
        ptr->ptrSiguiente = NULL;
        ptr->cantidadTabs = cantidadTabsPorTag;
        nodoInicial = nodoActual = ptr; /*Se actualiza la referencia al primer nodo*/

        /*Se establece el nuevo padre*/
        push(&ptrPila, tag);
        cantidadTabsPorTag++;
    }
    return ptr;
}

/*Inserta un nuevo nodo en la lista enlazada.*/
struct nodoLista* insertar(char *tag)
{
    /*Si la lista está vacía*/
    if(nodoInicial == NULL)
    {
        return (crearLista(tag));
    }

    /*Asignación de memoria*/
    struct nodoLista *ptr = (struct nodoLista*)malloc(sizeof(struct nodoLista));

    if(ptr == NULL) /*No hay memoria suficiente*/
    {
        printf("No se pudo crear el Nodo. No hay suficiente memoria.\n");
    }
    else
    {
        char *tagCierre = strdup(ptrPila -> etiqueta);
        char tagCierreEsperado[] = "/";
        strcat(tagCierreEsperado, tagCierre);
        //printf("Cierre esperado %s\n", tagCierreEsperado);
        /*Si se encuentra la etiqueta de cierre esperada*/
        if(strcmp(tagCierreEsperado, tag) == 0)
        {
            pop(&ptrPila); /*Se elimina la referencia al padre actual*/
            cantidadTabsPorTag--;
        }
        else
        {
            ptr->etiqueta = strdup(tag); /*Se establecen los valores de los datos del nodo*/
            ptr->padre = strdup(ptrPila -> etiqueta);
            ptr->ptrSiguiente = NULL;
            ptr->cantidadTabs = cantidadTabsPorTag;
            nodoActual->ptrSiguiente = ptr; /*Se actualiza la referencia al primer nodo*/
            nodoActual = ptr;
            /*Si se inserta texto, no se ocupa en la pila*/
            if(strcmp(tag, "texto") != 0)
            {
                push(&ptrPila, tag);
                cantidadTabsPorTag++;
            }
        }
    }
    return ptr;
}


void imprimir(void)
{
    printf("\n*** Árbol de Parsing ***\n\n");
    struct nodoLista *ptr = nodoInicial; /*Se crea una copia de la referencia 
                                        al primer nodo para recorrer la lista*/

    struct nodoLista *ptrTemp;

    int i = 0;
    int cantidad = 0;

    char *padreActual;
    char *tagActual;
    char *padreSiguiente;
    while(ptr != NULL) /*Mientras que el puntero no sea NULL*/
    {
        ptrTemp = ptr;
        cantidad = ptrTemp -> cantidadTabs;
        padreActual = strdup(ptrTemp -> padre);

        if(strcmp(padreActual, "ROOT") == 0)
        {
                printf("%s\n", ptr->etiqueta);                
        }
        else
        {
                for(i = 0; i < cantidad-1; i++)
                {
                    printf("\t");
                }

                for(i; i < cantidad; i++)
                {
                        printf("|____");
                }

                printf("%s\n", ptr->etiqueta);
        }
        
        ptr = ptr->ptrSiguiente; /*Se pasa al siguiente nodo*/
    }
    printf("\n*** Fin del Árbol de Parsing\n\n");
}

/*Funciones de la Pila*/
void push(PTRNODOPILA *top, char * valor)
{
    PTRNODOPILA nuevo;
    nuevo = malloc(sizeof(NODOPILA));
    if(nuevo != NULL)
    {
        nuevo -> etiqueta = strdup(valor);
        nuevo -> ptrSiguiente = *top;
        *top = nuevo;
    }
    else
    {
        printf("El nodo no fue creado. No hay suficiente memoria\n");
    }
}

void pop(PTRNODOPILA *top)
{
    PTRNODOPILA temp;
    temp = *top;
    *top = (*top) -> ptrSiguiente;
    free(temp);
}

int estaVacia(PTRNODOPILA top)
{
    return top == NULL;
}

void imprimirPila(PTRNODOPILA top)
{
    if(top == NULL)
    {
        printf("La pila está vacía\n");
    }
    else
    {
        while(top != NULL)
        {
            printf("%s -> ", top -> etiqueta);
            top = top -> ptrSiguiente;
        }
        printf("NULL\n");
    }
}
