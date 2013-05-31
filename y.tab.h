/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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
     CLOSE = 371
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 10 "parser.y"

        char *string;



/* Line 2068 of yacc.c  */
#line 288 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


