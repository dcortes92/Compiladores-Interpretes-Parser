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
     FOOTER = 293,
     _FOOTER = 294,
     FORM = 295,
     FORM_ = 296,
     _FORM = 297,
     H1 = 298,
     H1_ = 299,
     _H1 = 300,
     H2 = 301,
     H2_ = 302,
     _H2 = 303,
     H3 = 304,
     H3_ = 305,
     _H3 = 306,
     H4 = 307,
     H4_ = 308,
     _H4 = 309,
     H5 = 310,
     H5_ = 311,
     _H5 = 312,
     H6 = 313,
     H6_ = 314,
     _H6 = 315,
     HEAD = 316,
     HEAD_ = 317,
     _HEAD = 318,
     HEADER = 319,
     _HEADER = 320,
     HR = 321,
     HR_ = 322,
     _HR = 323,
     HTML = 324,
     HTML_ = 325,
     _HTML = 326,
     IMG = 327,
     _IMG = 328,
     INPUT = 329,
     _INPUT = 330,
     LI = 331,
     LI_ = 332,
     _LI = 333,
     LINK = 334,
     _LINK = 335,
     META = 336,
     _META = 337,
     OBJECT = 338,
     _OBJECT = 339,
     OL = 340,
     OL_ = 341,
     _OL = 342,
     P = 343,
     P_ = 344,
     _P = 345,
     PRE = 346,
     PRE_ = 347,
     _PRE = 348,
     SCRIPT = 349,
     SCRIPT_ = 350,
     _SCRIPT = 351,
     SPAN = 352,
     _SPAN = 353,
     STRONG = 354,
     _STRONG = 355,
     STYLE = 356,
     _STYLE = 357,
     TABLE = 358,
     _TABLE = 359,
     TD = 360,
     _TD = 361,
     TEXTAREA = 362,
     TEXTAREA_ = 363,
     _TEXTAREA = 364,
     TH = 365,
     _TH = 366,
     TITLE = 367,
     _TITLE = 368,
     TR = 369,
     _TR = 370,
     UL = 371,
     _UL = 372,
     CLOSE = 373
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
#define FOOTER 293
#define _FOOTER 294
#define FORM 295
#define FORM_ 296
#define _FORM 297
#define H1 298
#define H1_ 299
#define _H1 300
#define H2 301
#define H2_ 302
#define _H2 303
#define H3 304
#define H3_ 305
#define _H3 306
#define H4 307
#define H4_ 308
#define _H4 309
#define H5 310
#define H5_ 311
#define _H5 312
#define H6 313
#define H6_ 314
#define _H6 315
#define HEAD 316
#define HEAD_ 317
#define _HEAD 318
#define HEADER 319
#define _HEADER 320
#define HR 321
#define HR_ 322
#define _HR 323
#define HTML 324
#define HTML_ 325
#define _HTML 326
#define IMG 327
#define _IMG 328
#define INPUT 329
#define _INPUT 330
#define LI 331
#define LI_ 332
#define _LI 333
#define LINK 334
#define _LINK 335
#define META 336
#define _META 337
#define OBJECT 338
#define _OBJECT 339
#define OL 340
#define OL_ 341
#define _OL 342
#define P 343
#define P_ 344
#define _P 345
#define PRE 346
#define PRE_ 347
#define _PRE 348
#define SCRIPT 349
#define SCRIPT_ 350
#define _SCRIPT 351
#define SPAN 352
#define _SPAN 353
#define STRONG 354
#define _STRONG 355
#define STYLE 356
#define _STYLE 357
#define TABLE 358
#define _TABLE 359
#define TD 360
#define _TD 361
#define TEXTAREA 362
#define TEXTAREA_ 363
#define _TEXTAREA 364
#define TH 365
#define _TH 366
#define TITLE 367
#define _TITLE 368
#define TR 369
#define _TR 370
#define UL 371
#define _UL 372
#define CLOSE 373




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 8 "parser.y"

        char *string;



/* Line 2068 of yacc.c  */
#line 292 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


