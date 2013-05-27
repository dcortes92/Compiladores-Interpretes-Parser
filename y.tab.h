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
     NUMERO = 259,
     NUMERO_255 = 260,
     HEX = 261,
     A_ATTRIBUTE = 262,
     BLOCKQUOTE_ATTRIBUTE = 263,
     BODY_ATTRIBUTE = 264,
     BUTTOM_ATTRIBUTE = 265,
     CAPTION_ATTRIBUTE = 266,
     DIV_ATTRIBUTE = 267,
     EMBED_ATTRIBUTE = 268,
     FORM_ATTRIBUTE = 269,
     H1_H6_ATTRIBUTE = 270,
     HEAD_ATTRIBUTE = 271,
     HR_ATTRIBUTE = 272,
     IMG_ATTRIBUTE = 273,
     INPUT_ATTRIBUTE = 274,
     LI_ATTRIBUTE = 275,
     LINK_ATTRIBUTE = 276,
     META_ATTRIBUTE = 277,
     OBJECT_ATTRIBUTE = 278,
     OL_ATTRIBUTE = 279,
     P_ATTRIBUTE = 280,
     PRE_ATTRIBUTE = 281,
     SCRIPT_ATTRIBUTE = 282,
     SPAN_ATTRIBUTE = 283,
     STYLE_ATTRIBUTE = 284,
     TABLE_ATTRIBUTE = 285,
     TR_ATTRIBUTE = 286,
     TD_TH_ATTRIBUTE = 287,
     TEXTAREA_ATTRIBUTE = 288,
     UL_ATTRIUTE = 289,
     URL = 290,
     LOCAL_URL = 291,
     DOCTYPE_TOKEN = 292,
     A = 293,
     A_ = 294,
     _A = 295,
     ACRONYM = 296,
     B = 297,
     _B = 298,
     BLOCKQUOTE = 299,
     BLOCKQUOTE_ = 300,
     _BLOCKQUOTE = 301,
     BODY = 302,
     BODY_ = 303,
     _BODY = 304,
     BR = 305,
     _BR = 306,
     BUTTON = 307,
     BUTTON_ = 308,
     _BUTTON = 309,
     CAPTION = 310,
     CODE = 311,
     _CODE = 312,
     DIV = 313,
     _DIV = 314,
     DL = 315,
     DL_ = 316,
     _DL = 317,
     DT = 318,
     _DT = 319,
     DD = 320,
     DD_ = 321,
     EM = 322,
     _EM = 323,
     EMBED = 324,
     EMBED_ = 325,
     _EMBED = 326,
     FOOTER = 327,
     _FOOTER = 328,
     FORM = 329,
     FORM_ = 330,
     _FORM = 331,
     H1 = 332,
     H1_ = 333,
     _H1 = 334,
     H2 = 335,
     H2_ = 336,
     _H2 = 337,
     H3 = 338,
     H3_ = 339,
     _H3 = 340,
     H4 = 341,
     H4_ = 342,
     _H4 = 343,
     H5 = 344,
     H5_ = 345,
     _H5 = 346,
     H6 = 347,
     H6_ = 348,
     _H6 = 349,
     HEAD = 350,
     HEAD_ = 351,
     _HEAD = 352,
     HEADER = 353,
     HEADER_ = 354,
     HR = 355,
     HR_ = 356,
     _HR = 357,
     HTML = 358,
     HTML_ = 359,
     _HTML = 360,
     IMG = 361,
     _IMG = 362,
     INPUT = 363,
     _INPUT = 364,
     LI = 365,
     LI_ = 366,
     _LI = 367,
     LINK = 368,
     _LINK = 369,
     META = 370,
     _META = 371,
     OBJECT = 372,
     _OBJECT = 373,
     OL = 374,
     OL_ = 375,
     _OL = 376,
     OPTION = 377,
     OPTION_ = 378,
     _OPTION = 379,
     P = 380,
     P_ = 381,
     _P = 382,
     PRE = 383,
     PRE_ = 384,
     _PRE = 385,
     SCRIPT = 386,
     _SCRIPT = 387,
     SPAN = 388,
     _SPAN = 389,
     STRONG = 390,
     _STRONG = 391,
     STYLE = 392,
     _STYLE = 393,
     TABLE = 394,
     _TABLE = 395,
     TD = 396,
     _TD = 397,
     TH = 398,
     _TH = 399,
     TITLE = 400,
     _TITLE = 401,
     TR = 402,
     _TR = 403,
     UL = 404,
     _UL = 405,
     CLOSE = 406
   };
#endif
/* Tokens.  */
#define TEXTO 258
#define NUMERO 259
#define NUMERO_255 260
#define HEX 261
#define A_ATTRIBUTE 262
#define BLOCKQUOTE_ATTRIBUTE 263
#define BODY_ATTRIBUTE 264
#define BUTTOM_ATTRIBUTE 265
#define CAPTION_ATTRIBUTE 266
#define DIV_ATTRIBUTE 267
#define EMBED_ATTRIBUTE 268
#define FORM_ATTRIBUTE 269
#define H1_H6_ATTRIBUTE 270
#define HEAD_ATTRIBUTE 271
#define HR_ATTRIBUTE 272
#define IMG_ATTRIBUTE 273
#define INPUT_ATTRIBUTE 274
#define LI_ATTRIBUTE 275
#define LINK_ATTRIBUTE 276
#define META_ATTRIBUTE 277
#define OBJECT_ATTRIBUTE 278
#define OL_ATTRIBUTE 279
#define P_ATTRIBUTE 280
#define PRE_ATTRIBUTE 281
#define SCRIPT_ATTRIBUTE 282
#define SPAN_ATTRIBUTE 283
#define STYLE_ATTRIBUTE 284
#define TABLE_ATTRIBUTE 285
#define TR_ATTRIBUTE 286
#define TD_TH_ATTRIBUTE 287
#define TEXTAREA_ATTRIBUTE 288
#define UL_ATTRIUTE 289
#define URL 290
#define LOCAL_URL 291
#define DOCTYPE_TOKEN 292
#define A 293
#define A_ 294
#define _A 295
#define ACRONYM 296
#define B 297
#define _B 298
#define BLOCKQUOTE 299
#define BLOCKQUOTE_ 300
#define _BLOCKQUOTE 301
#define BODY 302
#define BODY_ 303
#define _BODY 304
#define BR 305
#define _BR 306
#define BUTTON 307
#define BUTTON_ 308
#define _BUTTON 309
#define CAPTION 310
#define CODE 311
#define _CODE 312
#define DIV 313
#define _DIV 314
#define DL 315
#define DL_ 316
#define _DL 317
#define DT 318
#define _DT 319
#define DD 320
#define DD_ 321
#define EM 322
#define _EM 323
#define EMBED 324
#define EMBED_ 325
#define _EMBED 326
#define FOOTER 327
#define _FOOTER 328
#define FORM 329
#define FORM_ 330
#define _FORM 331
#define H1 332
#define H1_ 333
#define _H1 334
#define H2 335
#define H2_ 336
#define _H2 337
#define H3 338
#define H3_ 339
#define _H3 340
#define H4 341
#define H4_ 342
#define _H4 343
#define H5 344
#define H5_ 345
#define _H5 346
#define H6 347
#define H6_ 348
#define _H6 349
#define HEAD 350
#define HEAD_ 351
#define _HEAD 352
#define HEADER 353
#define HEADER_ 354
#define HR 355
#define HR_ 356
#define _HR 357
#define HTML 358
#define HTML_ 359
#define _HTML 360
#define IMG 361
#define _IMG 362
#define INPUT 363
#define _INPUT 364
#define LI 365
#define LI_ 366
#define _LI 367
#define LINK 368
#define _LINK 369
#define META 370
#define _META 371
#define OBJECT 372
#define _OBJECT 373
#define OL 374
#define OL_ 375
#define _OL 376
#define OPTION 377
#define OPTION_ 378
#define _OPTION 379
#define P 380
#define P_ 381
#define _P 382
#define PRE 383
#define PRE_ 384
#define _PRE 385
#define SCRIPT 386
#define _SCRIPT 387
#define SPAN 388
#define _SPAN 389
#define STRONG 390
#define _STRONG 391
#define STYLE 392
#define _STYLE 393
#define TABLE 394
#define _TABLE 395
#define TD 396
#define _TD 397
#define TH 398
#define _TH 399
#define TITLE 400
#define _TITLE 401
#define TR 402
#define _TR 403
#define UL 404
#define _UL 405
#define CLOSE 406




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


