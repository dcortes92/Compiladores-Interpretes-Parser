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
     _A = 294,
     B = 295,
     _B = 296,
     BLOCKQUOTE = 297,
     BLOCKQUOTE_ = 298,
     _BLOCKQUOTE = 299,
     BODY = 300,
     BODY_ = 301,
     _BODY = 302,
     BR = 303,
     _BR = 304,
     BUTTON = 305,
     BUTTON_ = 306,
     _BUTTON = 307,
     CAPTION = 308,
     CAPTION_ = 309,
     _CAPTION = 310,
     CODE = 311,
     _CODE = 312,
     DIV = 313,
     DIV_ = 314,
     _DIV = 315,
     DL = 316,
     _DL = 317,
     DT = 318,
     _DT = 319,
     DD = 320,
     _DD = 321,
     EM = 322,
     _EM = 323,
     EMBED = 324,
     _EMBED = 325,
     FOOTER = 326,
     _FOOTER = 327,
     FORM = 328,
     FORM_ = 329,
     _FORM = 330,
     H1 = 331,
     H1_ = 332,
     _H1 = 333,
     H2 = 334,
     H2_ = 335,
     _H2 = 336,
     H3 = 337,
     H3_ = 338,
     _H3 = 339,
     H4 = 340,
     H4_ = 341,
     _H4 = 342,
     H5 = 343,
     H5_ = 344,
     _H5 = 345,
     H6 = 346,
     H6_ = 347,
     _H6 = 348,
     HEAD = 349,
     HEAD_ = 350,
     _HEAD = 351,
     HEADER = 352,
     HEADER_ = 353,
     HR = 354,
     HR_ = 355,
     _HR = 356,
     HTML = 357,
     HTML_ = 358,
     _HTML = 359,
     IMG = 360,
     _IMG = 361,
     INPUT = 362,
     _INPUT = 363,
     LI = 364,
     LI_ = 365,
     _LI = 366,
     LINK = 367,
     _LINK = 368,
     META = 369,
     _META = 370,
     OBJECT = 371,
     _OBJECT = 372,
     OL = 373,
     OL_ = 374,
     _OL = 375,
     P = 376,
     P_ = 377,
     _P = 378,
     PRE = 379,
     PRE_ = 380,
     _PRE = 381,
     SCRIPT = 382,
     SCRIPT_ = 383,
     _SCRIPT = 384,
     SPAN = 385,
     _SPAN = 386,
     STRONG = 387,
     _STRONG = 388,
     STYLE = 389,
     _STYLE = 390,
     TABLE = 391,
     _TABLE = 392,
     TD = 393,
     _TD = 394,
     TEXTAREA = 395,
     TEXTAREA_ = 396,
     _TEXTAREA = 397,
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
#define _A 294
#define B 295
#define _B 296
#define BLOCKQUOTE 297
#define BLOCKQUOTE_ 298
#define _BLOCKQUOTE 299
#define BODY 300
#define BODY_ 301
#define _BODY 302
#define BR 303
#define _BR 304
#define BUTTON 305
#define BUTTON_ 306
#define _BUTTON 307
#define CAPTION 308
#define CAPTION_ 309
#define _CAPTION 310
#define CODE 311
#define _CODE 312
#define DIV 313
#define DIV_ 314
#define _DIV 315
#define DL 316
#define _DL 317
#define DT 318
#define _DT 319
#define DD 320
#define _DD 321
#define EM 322
#define _EM 323
#define EMBED 324
#define _EMBED 325
#define FOOTER 326
#define _FOOTER 327
#define FORM 328
#define FORM_ 329
#define _FORM 330
#define H1 331
#define H1_ 332
#define _H1 333
#define H2 334
#define H2_ 335
#define _H2 336
#define H3 337
#define H3_ 338
#define _H3 339
#define H4 340
#define H4_ 341
#define _H4 342
#define H5 343
#define H5_ 344
#define _H5 345
#define H6 346
#define H6_ 347
#define _H6 348
#define HEAD 349
#define HEAD_ 350
#define _HEAD 351
#define HEADER 352
#define HEADER_ 353
#define HR 354
#define HR_ 355
#define _HR 356
#define HTML 357
#define HTML_ 358
#define _HTML 359
#define IMG 360
#define _IMG 361
#define INPUT 362
#define _INPUT 363
#define LI 364
#define LI_ 365
#define _LI 366
#define LINK 367
#define _LINK 368
#define META 369
#define _META 370
#define OBJECT 371
#define _OBJECT 372
#define OL 373
#define OL_ 374
#define _OL 375
#define P 376
#define P_ 377
#define _P 378
#define PRE 379
#define PRE_ 380
#define _PRE 381
#define SCRIPT 382
#define SCRIPT_ 383
#define _SCRIPT 384
#define SPAN 385
#define _SPAN 386
#define STRONG 387
#define _STRONG 388
#define STYLE 389
#define _STYLE 390
#define TABLE 391
#define _TABLE 392
#define TD 393
#define _TD 394
#define TEXTAREA 395
#define TEXTAREA_ 396
#define _TEXTAREA 397
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


