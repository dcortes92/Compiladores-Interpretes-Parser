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

	void yyerror(const char *s);


/* Line 268 of yacc.c  */
#line 81 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
#line 11 "parser.y"

        char *string;



/* Line 293 of yacc.c  */
#line 357 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 369 "y.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   948

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNRULES -- Number of states.  */
#define YYNSTATES  309

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
       0,     0,     3,     9,    12,    14,    17,    20,    23,    26,
      29,    32,    34,    37,    39,    42,    45,    47,    49,    53,
      55,    58,    60,    63,    66,    69,    72,    75,    78,    81,
      84,    87,    90,    93,    96,    99,   102,   105,   108,   111,
     114,   117,   120,   123,   126,   129,   132,   135,   138,   141,
     142,   146,   149,   152,   156,   160,   162,   165,   167,   170,
     174,   178,   182,   184,   188,   190,   193,   195,   199,   203,
     205,   209,   211,   215,   217,   221,   223,   227,   231,   233,
     236,   238,   241,   244,   247,   248,   250,   253,   255,   259,
     261,   264,   268,   270,   273,   277,   279,   282,   286,   288,
     291,   295,   297,   300,   304,   306,   309,   312,   314,   317,
     321,   325,   330,   331,   333,   336,   338,   343,   344,   347,
     349,   354,   355,   357,   360,   362,   366,   370,   376,   378,
     381,   385,   387,   390,   394,   396,   399,   403,   404,   407,
     411,   413,   417,   420,   423,   428,   431,   435,   436,   438,
     441,   443,   448,   453,   454,   457,   459,   464,   465,   468,
     470,   475,   476,   479,   481,   484,   488,   490,   493,   495,
     497,   499
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     119,     0,    -1,     4,   120,   122,   128,   121,    -1,    67,
     116,    -1,    69,    -1,   123,   124,    -1,   123,   125,    -1,
     123,   188,    -1,   123,   177,    -1,   123,   178,    -1,   123,
     182,    -1,    59,    -1,    60,   116,    -1,    61,    -1,   126,
     127,    -1,   126,   206,    -1,   110,    -1,   111,    -1,   129,
     131,   130,    -1,    12,    -1,    13,   116,    -1,    14,    -1,
     132,   131,    -1,   134,   131,    -1,   135,   131,    -1,   138,
     131,    -1,   139,   131,    -1,   140,   131,    -1,   142,   131,
      -1,   145,   131,    -1,   151,   131,    -1,   152,   131,    -1,
     158,   131,    -1,   160,   131,    -1,   161,   131,    -1,   162,
     131,    -1,   163,   131,    -1,   164,   131,    -1,   165,   131,
      -1,   166,   131,    -1,   167,   131,    -1,   177,   131,    -1,
     168,   131,    -1,   181,   131,    -1,   182,   131,    -1,   190,
     131,    -1,   204,   131,    -1,   171,   131,    -1,   206,   131,
      -1,    -1,   133,   206,     6,    -1,     5,   116,    -1,     7,
       8,    -1,   136,   179,   137,    -1,   136,   206,   137,    -1,
       9,    -1,    10,   116,    -1,    11,    -1,    15,    16,    -1,
     156,   166,   157,    -1,   156,   206,   157,    -1,   141,   206,
      24,    -1,    23,    -1,   143,   131,   144,    -1,    25,    -1,
      26,   116,    -1,    27,    -1,   146,   147,    29,    -1,   146,
     148,    29,    -1,    28,    -1,   147,   206,    33,    -1,    32,
      -1,   148,   206,    31,    -1,    30,    -1,   150,   206,    35,
      -1,    34,    -1,    36,   116,    37,    -1,   153,   155,   154,
      -1,    38,    -1,    39,   116,    -1,    40,    -1,   167,   155,
      -1,   204,   155,    -1,   139,   155,    -1,    -1,    17,    -1,
      18,   116,    -1,    19,    -1,   159,   206,    43,    -1,    41,
      -1,    42,   116,    -1,   160,   206,    46,    -1,    44,    -1,
      45,   116,    -1,   161,   206,    49,    -1,    47,    -1,    48,
     116,    -1,   162,   206,    52,    -1,    50,    -1,    51,   116,
      -1,   163,   206,    55,    -1,    53,    -1,    54,   116,    -1,
     164,   206,    58,    -1,    56,    -1,    57,   116,    -1,   165,
      66,    -1,    64,    -1,    65,   116,    -1,    70,   116,    71,
      -1,    72,   116,    73,    -1,   169,   174,   170,   168,    -1,
      -1,    83,    -1,    84,   116,    -1,    85,    -1,   172,   174,
     173,   171,    -1,    -1,   114,   116,    -1,   115,    -1,   175,
     206,   176,   174,    -1,    -1,    74,    -1,    75,   116,    -1,
      76,    -1,    77,   116,    78,    -1,    79,   116,    80,    -1,
     180,   184,   206,   184,    88,    -1,    86,    -1,    87,   116,
      -1,   181,   206,    91,    -1,    89,    -1,    90,   116,    -1,
     183,   206,    94,    -1,    92,    -1,    93,   116,    -1,   185,
     206,    96,    -1,    -1,    95,   116,    -1,   187,   206,    98,
      -1,    97,    -1,   189,   206,   100,    -1,   189,   100,    -1,
      99,   116,    -1,   191,   192,   195,   102,    -1,   101,   116,
      -1,   193,   206,   194,    -1,    -1,    20,    -1,    21,   116,
      -1,    22,    -1,   196,   198,   197,   195,    -1,   196,   201,
     197,   195,    -1,    -1,   112,   116,    -1,   113,    -1,   199,
     206,   200,   198,    -1,    -1,   108,   116,    -1,   109,    -1,
     202,   206,   203,   201,    -1,    -1,   103,   116,    -1,   104,
      -1,   205,   107,    -1,   205,   206,   107,    -1,   105,    -1,
     105,   116,    -1,   179,    -1,   186,    -1,   149,    -1,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   136,   136,   140,   144,   148,   151,   152,   153,   154,
     155,   160,   161,   164,   168,   172,   173,   177,   181,   185,
     186,   190,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     225,   229,   233,   237,   238,   242,   243,   247,   251,   255,
     256,   260,   264,   268,   272,   273,   277,   281,   282,   286,
     290,   291,   295,   296,   300,   304,   308,   312,   316,   317,
     321,   324,   325,   326,   327,   331,   332,   336,   340,   343,
     344,   348,   349,   350,   354,   355,   356,   360,   361,   362,
     366,   367,   368,   372,   373,   374,   378,   379,   380,   384,
     388,   392,   393,   397,   398,   402,   406,   407,   411,   415,
     419,   420,   424,   425,   429,   433,   437,   441,   445,   446,
     450,   451,   452,   456,   460,   461,   465,   466,   470,   474,
     478,   482,   483,   487,   491,   495,   499,   500,   504,   505,
     509,   513,   514,   515,   519,   523,   527,   528,   532,   536,
     540,   541,   545,   549,   553,   554,   558,   559,   563,   564,
     565,   566
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
  "CONTENIDO_BODY", "A_TAG", "A_TAG_OPEN", "B_TAG", "BLOCKQUOTE_TAG",
  "BLOCKQUOTE_TAG_OPEN", "BLOCKQUOTE_TAG_CLOSE", "BR_TAG", "BUTTON_TAG",
  "CODE_TAG", "CODE_TAG_OPEN", "DIV_TAG", "DIV_TAG_OPEN", "DIV_TAG_CLOSE",
  "DL_TAG", "DL_TAG_OPEN", "DD_TAG", "DT_TAG", "EM_TAG", "EMBED_TAG_OPEN",
  "EMBED_TAG", "FORM_TAG", "FORM_TAG_OPEN", "FORM_TAG_CLOSE",
  "FORM_TAG_CONTENIDO", "BUTTON_TAG_OPEN", "BUTTON_TAG_CLOSE", "H1_TAG",
  "H1_TAG_OPEN", "H2_TAG", "H3_TAG", "H4_TAG", "H5_TAG", "H6_TAG",
  "HR_TAG", "IMG_TAG", "INPUT_TAG", "OL_TAG", "OL_TAG_OPEN",
  "OL_TAG_CLOSE", "UL_TAG", "UL_TAG_OPEN", "UL_TAG_CLOSE", "LI_TAG",
  "LI_TAG_OPEN", "LI_TAG_CLOSE", "LINK_TAG", "META_TAG", "P_TAG",
  "P_TAG_OPEN", "PRE_TAG", "SCRIPT_TAG", "SCRIPT_TAG_OPEN", "SPAN_TAG",
  "SPAN_TAG_OPEN", "STRONG_TAG", "STRONG_TAG_OPEN", "STYLE_TAG",
  "STYLE_TAG_OPEN", "TABLE_TAG", "TABLE_TAG_OPEN", "CAPTION_TAG",
  "CAPTION_TAG_OPEN", "CAPTION_TAG_CLOSE", "TR_TAG", "TR_TAG_OPEN",
  "TR_TAG_CLOSE", "TH_TAG", "TH_TAG_OPEN", "TH_TAG_CLOSE", "TD_TAG",
  "TD_TAG_OPEN", "TD_TAG_CLOSE", "TEXTAREA_TAG", "TEXTAREA_TAG_OPEN",
  "TEXTUAL", 0
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
       0,   118,   119,   120,   121,   122,   123,   123,   123,   123,
     123,   123,   123,   124,   125,   126,   126,   127,   128,   129,
     129,   130,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   133,   134,   135,   135,   136,   136,   137,   138,   139,
     139,   140,   141,   142,   143,   143,   144,   145,   145,   146,
     147,   147,   148,   148,   149,   150,   151,   152,   153,   153,
     154,   155,   155,   155,   155,   156,   156,   157,   158,   159,
     159,   160,   160,   160,   161,   161,   161,   162,   162,   162,
     163,   163,   163,   164,   164,   164,   165,   165,   165,   166,
     167,   168,   168,   169,   169,   170,   171,   171,   172,   173,
     174,   174,   175,   175,   176,   177,   178,   179,   180,   180,
     181,   181,   181,   182,   183,   183,   184,   184,   185,   186,
     187,   188,   188,   189,   190,   191,   192,   192,   193,   193,
     194,   195,   195,   195,   196,   197,   198,   198,   199,   200,
     201,   201,   202,   203,   204,   204,   205,   205,   206,   206,
     206,   206
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     1,     2,     2,     2,     2,     2,
       2,     1,     2,     1,     2,     2,     1,     1,     3,     1,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       3,     2,     2,     3,     3,     1,     2,     1,     2,     3,
       3,     3,     1,     3,     1,     2,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     2,
       1,     2,     2,     2,     0,     1,     2,     1,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     2,     1,     2,     3,
       3,     4,     0,     1,     2,     1,     4,     0,     2,     1,
       4,     0,     1,     2,     1,     3,     3,     5,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     0,     2,     3,
       1,     3,     2,     2,     4,     2,     3,     0,     1,     2,
       1,     4,     4,     0,     2,     1,     4,     0,     2,     1,
       4,     0,     2,     1,     2,     3,     1,     2,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     3,    11,     0,     0,
       0,    12,    19,     0,     0,    49,    13,     0,     0,   134,
       0,     0,    16,     5,     6,     0,     8,     9,    10,     0,
       7,     0,    20,     4,     2,   171,     0,     0,    55,     0,
       0,    85,     0,    62,    64,     0,    69,    75,     0,    78,
       0,    89,     0,    92,     0,    95,     0,    98,     0,   101,
       0,   104,     0,   107,     0,     0,     0,   113,     0,   128,
       0,   131,     0,   140,     0,   166,     0,     0,    49,     0,
      49,    49,     0,    49,    49,    49,     0,    49,    49,    49,
       0,   170,     0,    49,    49,    84,     0,    49,     0,    49,
      49,    49,    49,    49,    49,    49,    49,    49,   121,    49,
     121,    49,   168,   137,    49,    49,   169,     0,    49,   147,
      49,     0,    49,     0,     0,   135,   143,    17,    14,    15,
       0,   142,     0,    51,    52,    56,    58,    86,    65,     0,
      79,    90,    93,    96,    99,   102,   105,   108,     0,     0,
     114,   129,   132,   145,   167,   118,    21,    18,    22,     0,
      23,    24,     0,     0,    25,    26,    27,     0,    28,     0,
      29,    73,    71,     0,     0,     0,    30,    31,    84,     0,
      84,    84,     0,     0,    32,     0,    33,    49,    34,    49,
      35,    49,    36,    49,    37,    49,   106,    38,    39,    40,
      42,   122,     0,     0,     0,    47,     0,    41,     0,     0,
       0,    43,    49,    44,     0,    45,   148,     0,   153,     0,
      46,   164,     0,    48,   125,   126,   133,   141,    76,   109,
     110,    50,    57,    53,    54,    61,    66,    63,    67,     0,
      68,     0,    74,    83,    80,    77,    81,    82,    87,    59,
      60,    88,    91,    94,    97,   100,   103,   123,   115,   112,
       0,   119,   117,   138,   137,     0,   130,   139,   149,     0,
       0,   157,     0,   165,    70,    72,   111,   124,   121,   116,
       0,   136,   154,   144,     0,     0,     0,     0,     0,     0,
     150,   146,   120,   127,   162,   158,   155,   153,     0,   153,
       0,   151,   159,   157,   152,   163,   161,   156,   160
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,    34,     9,    10,    23,    24,    25,   128,
      14,    15,   157,   223,    78,    79,    80,    81,    82,   233,
      83,    84,    85,    86,    87,    88,   237,    89,    90,   173,
     174,    91,    92,    93,    94,    95,   245,   179,    96,   249,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   259,   109,   110,   262,   203,   204,   278,   111,
      27,   112,   113,   114,   115,    29,   209,   210,   116,   117,
      30,    31,   118,   119,   218,   219,   291,   270,   271,   297,
     286,   287,   303,   288,   289,   306,   120,   121,   122
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -281
static const yytype_int16 yypact[] =
{
      -2,   -55,    26,   -96,   -38,  -281,  -281,  -281,   -80,    11,
     -52,  -281,  -281,   -79,   -31,   834,  -281,   -77,   -74,  -281,
     -73,   -72,  -281,  -281,  -281,     0,  -281,  -281,  -281,    78,
    -281,    50,  -281,  -281,  -281,  -281,   -71,    38,  -281,   -68,
      34,  -281,   -65,  -281,  -281,   -64,  -281,  -281,   -61,  -281,
     -57,  -281,   -56,  -281,   -53,  -281,   -50,  -281,   -48,  -281,
     -44,  -281,   -34,  -281,   -33,   -23,   -22,  -281,   -17,  -281,
      -1,  -281,     2,  -281,    12,    14,    28,    51,   834,    78,
     834,   834,    78,   834,   834,   834,    78,   834,   834,   834,
     -14,  -281,    78,   834,   834,   -10,    76,   834,    78,   834,
     834,   834,   834,   834,   183,   834,   834,   834,   -46,   834,
     -46,   834,  -281,     7,   834,   834,  -281,    78,   834,    10,
     834,    46,   834,    -8,   -16,  -281,  -281,  -281,  -281,  -281,
      -9,  -281,     6,  -281,  -281,  -281,  -281,  -281,  -281,    79,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,    74,    83,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,   145,
    -281,  -281,   146,   146,  -281,  -281,  -281,   134,  -281,   132,
    -281,  -281,  -281,   209,   248,   125,  -281,  -281,   -10,   121,
     -10,   -10,   147,   147,  -281,   124,  -281,   276,  -281,   369,
    -281,   462,  -281,   555,  -281,   648,  -281,  -281,  -281,  -281,
    -281,  -281,    52,    85,    78,  -281,    56,  -281,    58,    78,
      78,  -281,   741,  -281,    80,  -281,  -281,    60,    65,    78,
    -281,  -281,    73,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,   139,
    -281,   150,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,   -51,
     106,  -281,    69,  -281,     7,    91,  -281,  -281,  -281,    75,
      87,   -93,   173,  -281,  -281,  -281,  -281,  -281,   -46,  -281,
     108,  -281,  -281,  -281,    81,    86,    90,    78,    90,    78,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,    65,    95,    65,
     101,  -281,  -281,    99,  -281,  -281,    96,  -281,  -281
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,    20,  -281,  -281,  -281,  -281,  -281,    47,
    -281,   -90,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -167,  -281,    30,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,   118,   -39,
     -43,  -281,  -281,   -47,  -281,  -281,  -109,  -281,  -281,   208,
    -281,   138,  -281,  -281,   213,  -281,   -35,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -280,  -281,   -62,
     -59,  -281,  -281,   -60,  -281,  -281,   -26,  -281,   -25
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     129,   206,     1,    35,   130,   178,   132,    41,    42,    16,
     284,   243,     3,   246,   247,   285,   171,   301,   172,   304,
       6,     7,     8,    12,    13,    17,     5,    18,   201,   202,
     216,   217,    67,    68,    47,    77,    11,    32,    33,   123,
      19,    20,   124,   125,   126,   133,   134,    21,   135,    35,
     136,   137,   138,    35,   159,   139,   180,   163,    22,   140,
     141,   167,    66,   142,   225,   156,   143,   175,   144,   181,
     224,   183,   145,   185,   187,   189,   191,   193,   195,    35,
      47,    35,   146,   147,    47,   226,    69,    70,   178,   212,
     178,   178,   214,   148,   149,    75,   222,    73,   158,   150,
     160,   161,   208,   164,   165,   166,   227,   168,   169,   170,
      47,   127,    47,   176,   177,   151,   228,   184,   152,   186,
     188,   190,   192,   194,   197,   198,   199,   200,   153,   205,
     154,   207,    69,    70,   211,   213,    69,    70,   215,   180,
     220,   180,   180,    73,   155,   229,    65,    73,   239,   241,
     131,   231,   181,   221,   181,   181,   230,   232,   235,   236,
     242,   244,    69,    70,    69,    70,   248,   251,   257,   292,
     258,   261,   274,    73,   263,    73,   268,   269,   267,   260,
     273,   275,   277,    76,   264,   265,    35,   281,    36,   283,
      37,   282,    38,    39,   272,   290,   293,   294,    40,   284,
      41,    42,   295,   296,   302,   305,    43,   285,    44,    45,
     234,    46,    35,   250,   182,   279,   276,    47,    26,    48,
     162,    49,    50,    28,    51,    52,   299,    53,    54,   280,
      55,    56,     0,    57,    58,     0,    59,    60,   238,    61,
      62,     0,     0,    47,   307,     0,   308,    63,    64,   196,
       0,    35,     0,    65,     0,    66,     0,     0,     0,     0,
      17,     0,   298,     0,   300,     0,    67,    68,     0,    69,
      70,     0,    71,    72,     0,    19,    20,   240,     0,    35,
      73,    36,    47,    37,    74,    38,    39,     0,    75,     0,
       0,    40,     0,    41,    42,    69,    70,    76,     0,    43,
       0,    44,    45,     0,    46,     0,    73,     0,     0,     0,
      47,     0,    48,     0,    49,    50,     0,    51,    52,     0,
      53,    54,   252,    55,    56,     0,    57,    58,     0,    59,
      60,     0,    61,    62,    69,    70,     0,     0,     0,     0,
      63,    64,     0,     0,     0,    73,    65,     0,    66,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,    67,
      68,     0,    69,    70,     0,    71,    72,     0,    19,    20,
       0,     0,    35,    73,    36,     0,    37,    74,    38,    39,
       0,    75,     0,     0,    40,     0,    41,    42,     0,     0,
      76,     0,    43,     0,    44,    45,     0,    46,     0,     0,
       0,     0,     0,    47,     0,    48,     0,    49,    50,     0,
      51,    52,     0,    53,    54,     0,    55,    56,   253,    57,
      58,     0,    59,    60,     0,    61,    62,     0,     0,     0,
       0,     0,     0,    63,    64,     0,     0,     0,     0,    65,
       0,    66,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,    67,    68,     0,    69,    70,     0,    71,    72,
       0,    19,    20,     0,     0,    35,    73,    36,     0,    37,
      74,    38,    39,     0,    75,     0,     0,    40,     0,    41,
      42,     0,     0,    76,     0,    43,     0,    44,    45,     0,
      46,     0,     0,     0,     0,     0,    47,     0,    48,     0,
      49,    50,     0,    51,    52,     0,    53,    54,     0,    55,
      56,     0,    57,    58,   254,    59,    60,     0,    61,    62,
       0,     0,     0,     0,     0,     0,    63,    64,     0,     0,
       0,     0,    65,     0,    66,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,    67,    68,     0,    69,    70,
       0,    71,    72,     0,    19,    20,     0,     0,    35,    73,
      36,     0,    37,    74,    38,    39,     0,    75,     0,     0,
      40,     0,    41,    42,     0,     0,    76,     0,    43,     0,
      44,    45,     0,    46,     0,     0,     0,     0,     0,    47,
       0,    48,     0,    49,    50,     0,    51,    52,     0,    53,
      54,     0,    55,    56,     0,    57,    58,     0,    59,    60,
     255,    61,    62,     0,     0,     0,     0,     0,     0,    63,
      64,     0,     0,     0,     0,    65,     0,    66,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,    67,    68,
       0,    69,    70,     0,    71,    72,     0,    19,    20,     0,
       0,    35,    73,    36,     0,    37,    74,    38,    39,     0,
      75,     0,     0,    40,     0,    41,    42,     0,     0,    76,
       0,    43,     0,    44,    45,     0,    46,     0,     0,     0,
       0,     0,    47,     0,    48,     0,    49,    50,     0,    51,
      52,     0,    53,    54,     0,    55,    56,     0,    57,    58,
       0,    59,    60,     0,    61,    62,   256,     0,     0,     0,
       0,     0,    63,    64,     0,     0,     0,     0,    65,     0,
      66,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,    67,    68,     0,    69,    70,     0,    71,    72,     0,
      19,    20,     0,     0,    35,    73,    36,     0,    37,    74,
      38,    39,     0,    75,     0,     0,    40,     0,    41,    42,
       0,     0,    76,     0,    43,     0,    44,    45,     0,    46,
       0,     0,     0,     0,     0,    47,     0,    48,     0,    49,
      50,     0,    51,    52,     0,    53,    54,     0,    55,    56,
       0,    57,    58,     0,    59,    60,     0,    61,    62,     0,
       0,     0,     0,     0,     0,    63,    64,     0,     0,     0,
       0,    65,     0,    66,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,    67,    68,     0,    69,    70,     0,
      71,    72,   266,    19,    20,     0,     0,    35,    73,    36,
       0,    37,    74,    38,    39,     0,    75,     0,     0,    40,
       0,    41,    42,     0,     0,    76,     0,    43,     0,    44,
      45,     0,    46,     0,     0,     0,     0,     0,    47,     0,
      48,     0,    49,    50,     0,    51,    52,     0,    53,    54,
       0,    55,    56,     0,    57,    58,     0,    59,    60,     0,
      61,    62,     0,     0,     0,     0,     0,     0,    63,    64,
       0,     0,     0,     0,    65,     0,    66,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,    67,    68,     0,
      69,    70,     0,    71,    72,     0,    19,    20,     0,     0,
       0,    73,     0,     0,     0,    74,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,    76
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-281))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      25,   110,     4,     3,    29,    95,    31,    17,    18,    61,
     103,   178,    67,   180,   181,   108,    30,   297,    32,   299,
     116,    59,    60,    12,    13,    77,     0,    79,    74,    75,
      20,    21,    83,    84,    34,    15,   116,   116,    69,   116,
      92,    93,   116,   116,   116,   116,     8,    99,   116,     3,
      16,   116,   116,     3,    79,   116,    95,    82,   110,   116,
     116,    86,    72,   116,    80,    14,   116,    92,   116,    95,
      78,    96,   116,    98,    99,   100,   101,   102,   103,     3,
      34,     3,   116,   116,    34,    94,    86,    87,   178,   114,
     180,   181,   117,   116,   116,   105,   121,    97,    78,   116,
      80,    81,    95,    83,    84,    85,   100,    87,    88,    89,
      34,   111,    34,    93,    94,   116,    37,    97,   116,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   116,   109,
     116,   111,    86,    87,   114,   115,    86,    87,   118,   178,
     120,   180,   181,    97,   116,    71,    70,    97,   173,   174,
     100,     6,   178,   107,   180,   181,    73,    11,    24,    27,
      35,    40,    86,    87,    86,    87,    19,    43,   116,   278,
      85,   115,    33,    97,   116,    97,   116,   112,    98,   204,
     107,    31,    76,   114,   209,   210,     3,    96,     5,   102,
       7,   116,     9,    10,   219,    22,    88,   116,    15,   103,
      17,    18,   116,   113,   109,   104,    23,   108,    25,    26,
     163,    28,     3,   183,    96,   262,   259,    34,    10,    36,
      82,    38,    39,    10,    41,    42,   288,    44,    45,   264,
      47,    48,    -1,    50,    51,    -1,    53,    54,    29,    56,
      57,    -1,    -1,    34,   303,    -1,   306,    64,    65,    66,
      -1,     3,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,   287,    -1,   289,    -1,    83,    84,    -1,    86,
      87,    -1,    89,    90,    -1,    92,    93,    29,    -1,     3,
      97,     5,    34,     7,   101,     9,    10,    -1,   105,    -1,
      -1,    15,    -1,    17,    18,    86,    87,   114,    -1,    23,
      -1,    25,    26,    -1,    28,    -1,    97,    -1,    -1,    -1,
      34,    -1,    36,    -1,    38,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    50,    51,    -1,    53,
      54,    -1,    56,    57,    86,    87,    -1,    -1,    -1,    -1,
      64,    65,    -1,    -1,    -1,    97,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,
      84,    -1,    86,    87,    -1,    89,    90,    -1,    92,    93,
      -1,    -1,     3,    97,     5,    -1,     7,   101,     9,    10,
      -1,   105,    -1,    -1,    15,    -1,    17,    18,    -1,    -1,
     114,    -1,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    -1,    38,    39,    -1,
      41,    42,    -1,    44,    45,    -1,    47,    48,    49,    50,
      51,    -1,    53,    54,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    84,    -1,    86,    87,    -1,    89,    90,
      -1,    92,    93,    -1,    -1,     3,    97,     5,    -1,     7,
     101,     9,    10,    -1,   105,    -1,    -1,    15,    -1,    17,
      18,    -1,    -1,   114,    -1,    23,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      38,    39,    -1,    41,    42,    -1,    44,    45,    -1,    47,
      48,    -1,    50,    51,    52,    53,    54,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    86,    87,
      -1,    89,    90,    -1,    92,    93,    -1,    -1,     3,    97,
       5,    -1,     7,   101,     9,    10,    -1,   105,    -1,    -1,
      15,    -1,    17,    18,    -1,    -1,   114,    -1,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    -1,    38,    39,    -1,    41,    42,    -1,    44,
      45,    -1,    47,    48,    -1,    50,    51,    -1,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    86,    87,    -1,    89,    90,    -1,    92,    93,    -1,
      -1,     3,    97,     5,    -1,     7,   101,     9,    10,    -1,
     105,    -1,    -1,    15,    -1,    17,    18,    -1,    -1,   114,
      -1,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,    -1,    38,    39,    -1,    41,
      42,    -1,    44,    45,    -1,    47,    48,    -1,    50,    51,
      -1,    53,    54,    -1,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    86,    87,    -1,    89,    90,    -1,
      92,    93,    -1,    -1,     3,    97,     5,    -1,     7,   101,
       9,    10,    -1,   105,    -1,    -1,    15,    -1,    17,    18,
      -1,    -1,   114,    -1,    23,    -1,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    38,
      39,    -1,    41,    42,    -1,    44,    45,    -1,    47,    48,
      -1,    50,    51,    -1,    53,    54,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    83,    84,    -1,    86,    87,    -1,
      89,    90,    91,    92,    93,    -1,    -1,     3,    97,     5,
      -1,     7,   101,     9,    10,    -1,   105,    -1,    -1,    15,
      -1,    17,    18,    -1,    -1,   114,    -1,    23,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      36,    -1,    38,    39,    -1,    41,    42,    -1,    44,    45,
      -1,    47,    48,    -1,    50,    51,    -1,    53,    54,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      86,    87,    -1,    89,    90,    -1,    92,    93,    -1,    -1,
      -1,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,   119,    67,   120,     0,   116,    59,    60,   122,
     123,   116,    12,    13,   128,   129,    61,    77,    79,    92,
      93,    99,   110,   124,   125,   126,   177,   178,   182,   183,
     188,   189,   116,    69,   121,     3,     5,     7,     9,    10,
      15,    17,    18,    23,    25,    26,    28,    34,    36,    38,
      39,    41,    42,    44,    45,    47,    48,    50,    51,    53,
      54,    56,    57,    64,    65,    70,    72,    83,    84,    86,
      87,    89,    90,    97,   101,   105,   114,   131,   132,   133,
     134,   135,   136,   138,   139,   140,   141,   142,   143,   145,
     146,   149,   150,   151,   152,   153,   156,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   171,
     172,   177,   179,   180,   181,   182,   186,   187,   190,   191,
     204,   205,   206,   116,   116,   116,   116,   111,   127,   206,
     206,   100,   206,   116,     8,   116,    16,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,    14,   130,   131,   206,
     131,   131,   179,   206,   131,   131,   131,   206,   131,   131,
     131,    30,    32,   147,   148,   206,   131,   131,   139,   155,
     167,   204,   166,   206,   131,   206,   131,   206,   131,   206,
     131,   206,   131,   206,   131,   206,    66,   131,   131,   131,
     131,    74,    75,   174,   175,   131,   174,   131,    95,   184,
     185,   131,   206,   131,   206,   131,    20,    21,   192,   193,
     131,   107,   206,   131,    78,    80,    94,   100,    37,    71,
      73,     6,    11,   137,   137,    24,    27,   144,    29,   206,
      29,   206,    35,   155,    40,   154,   155,   155,    19,   157,
     157,    43,    46,    49,    52,    55,    58,   116,    85,   170,
     206,   115,   173,   116,   206,   206,    91,    98,   116,   112,
     195,   196,   206,   107,    33,    31,   168,    76,   176,   171,
     184,    96,   116,   102,   103,   108,   198,   199,   201,   202,
      22,   194,   174,    88,   116,   116,   113,   197,   206,   197,
     206,   195,   109,   200,   195,   104,   203,   198,   201
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
#line 140 "parser.y"
    {insertar("html");}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 144 "parser.y"
    {insertar("/html");}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 160 "parser.y"
    {insertar("head");}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 161 "parser.y"
    {insertar("head");}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 164 "parser.y"
    {insertar("/head");}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 173 "parser.y"
    {insertar("title");}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 177 "parser.y"
    {insertar("/title");}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 185 "parser.y"
    {insertar("body");}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 186 "parser.y"
    {insertar("body");}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 190 "parser.y"
    {insertar("/body");}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 225 "parser.y"
    {insertar("/a_tag");}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 229 "parser.y"
    {insertar("a_tag");}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 233 "parser.y"
    {insertar("b_tag"); insertar("/b_tag");}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 242 "parser.y"
    {insertar("blockquote");}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 243 "parser.y"
    {insertar("blockquote");}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 247 "parser.y"
    {insertar("/blockquote");}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 251 "parser.y"
    {insertar("br_tag"); insertar("/br_tag");}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 260 "parser.y"
    {insertar("/code");}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 264 "parser.y"
    {insertar("code");}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 272 "parser.y"
    {insertar("div_tag");}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 273 "parser.y"
    {insertar("div_tag");}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 277 "parser.y"
    {insertar("/div_tag");}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 281 "parser.y"
    {insertar("/dl_tag");}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 282 "parser.y"
    {insertar("/dl_tag");}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 286 "parser.y"
    {insertar("dl_tag");}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 290 "parser.y"
    {insertar("/dd_tag");}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 291 "parser.y"
    {insertar("dd_tag");}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 295 "parser.y"
    {insertar("/dt_tag");}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 296 "parser.y"
    {insertar("dt_tag");}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 300 "parser.y"
    {insertar("/em_tag");}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 304 "parser.y"
    {insertar("em_tag");}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 308 "parser.y"
    {insertar("embed"); insertar("/embed");}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 316 "parser.y"
    {insertar("form");}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 317 "parser.y"
    {insertar("form");}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 321 "parser.y"
    {insertar("/form");}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 331 "parser.y"
    {insertar("button");}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 332 "parser.y"
    {insertar("button");}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 336 "parser.y"
    {insertar("/button");}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 340 "parser.y"
    {insertar("/h1_tag");}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 343 "parser.y"
    {insertar("h1_tag");}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 344 "parser.y"
    {insertar("h1_tag");}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 348 "parser.y"
    {insertar("/h2_tag");}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 349 "parser.y"
    {insertar("h2_tag");}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 350 "parser.y"
    {insertar("h2_tag");}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 354 "parser.y"
    {insertar("/h3_tag");}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 355 "parser.y"
    {insertar("h3_tag");}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 356 "parser.y"
    {insertar("h3_tag");}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 360 "parser.y"
    {insertar("/h4_tag");}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 361 "parser.y"
    {insertar("h4_tag");}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 362 "parser.y"
    {insertar("h4_tag");}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 366 "parser.y"
    {insertar("/h5_tag");}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 367 "parser.y"
    {insertar("h5_tag");}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 368 "parser.y"
    {insertar("h5_tag");}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 372 "parser.y"
    {insertar("/h6_tag");}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 373 "parser.y"
    {insertar("h6_tag");}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 374 "parser.y"
    {insertar("h6_tag");}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 378 "parser.y"
    {insertar("/hr_tag");}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 379 "parser.y"
    {insertar("hr_tag");}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 380 "parser.y"
    {insertar("hr_tag");}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 384 "parser.y"
    {insertar("img"); insertar("/img");}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 388 "parser.y"
    {insertar("input"); insertar("/input");}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 397 "parser.y"
    {insertar("ol_tag");}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 398 "parser.y"
    {insertar("ol_tag");}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 402 "parser.y"
    {insertar("/ol_tag");}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 411 "parser.y"
    {insertar("ul_tag");}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 415 "parser.y"
    {insertar("/ul_tag");}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 424 "parser.y"
    {insertar("li_tag");}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 425 "parser.y"
    {insertar("li_tag");}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 429 "parser.y"
    {insertar("/li_tag");}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 433 "parser.y"
    {insertar("link"); insertar("/link");}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 437 "parser.y"
    {insertar("meta"); insertar("/meta");}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 441 "parser.y"
    {insertar("/p_tag");}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 445 "parser.y"
    {insertar("p_tag");}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 446 "parser.y"
    {insertar("p_tag");}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 450 "parser.y"
    {insertar("/pre");}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 451 "parser.y"
    {insertar("pre");}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 452 "parser.y"
    {insertar("pre");}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 456 "parser.y"
    {insertar("/script");}
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 460 "parser.y"
    {insertar("script");}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 461 "parser.y"
    {insertar("script");}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 465 "parser.y"
    {insertar("/span");}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 470 "parser.y"
    {insertar("span");}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 474 "parser.y"
    {insertar("/strong");}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 478 "parser.y"
    {insertar("strong");}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 482 "parser.y"
    {insertar("/style");}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 483 "parser.y"
    {insertar("/style");}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 487 "parser.y"
    {insertar("style");}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 491 "parser.y"
    {insertar("/table");}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 495 "parser.y"
    {insertar("table");}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 504 "parser.y"
    {insertar("caption");}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 505 "parser.y"
    {insertar("caption");}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 509 "parser.y"
    {insertar("/caption");}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 519 "parser.y"
    {insertar("tr_tag");}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 523 "parser.y"
    {insertar("/tr_tag");}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 532 "parser.y"
    {insertar("th_tag");}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 536 "parser.y"
    {insertar("/th_tag");}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 545 "parser.y"
    {insertar("td_tag");}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 549 "parser.y"
    {insertar("/td_tag");}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 553 "parser.y"
    {insertar("/textarea");}
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 554 "parser.y"
    {insertar("/textarea");}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 558 "parser.y"
    {insertar("textarea");}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 559 "parser.y"
    {insertar("textarea");}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 566 "parser.y"
    {insertar("texto");}
    break;



/* Line 1806 of yacc.c  */
#line 2773 "y.tab.c"
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
#line 570 "parser.y"


/*Variables para el árbol de parsing*/
PTRNODOPILA ptrPila = NULL;
struct nodoLista *ptr = NULL;
int cantidadTabsPorTag = 0;
/*Fin variables para el árbol de parsing*/


void yyerror(const char *s)
{
	fprintf(stderr, "Error cerca de %s >>> %s\n\n", yylval.string, s);
        yyclearin;
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

