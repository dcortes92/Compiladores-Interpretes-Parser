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
     H1_H6_ = 296,
     H1_H6 = 297,
     _H1_H6 = 298,
     HEAD = 299,
     HEAD_ = 300,
     _HEAD = 301,
     HEADER = 302,
     _HEADER = 303,
     HR = 304,
     HR_ = 305,
     _HR = 306,
     HTML = 307,
     HTML_ = 308,
     _HTML = 309,
     IMG = 310,
     _IMG = 311,
     INPUT = 312,
     _INPUT = 313,
     LI = 314,
     LI_ = 315,
     _LI = 316,
     LINK = 317,
     _LINK = 318,
     META = 319,
     _META = 320,
     OBJECT = 321,
     _OBJECT = 322,
     OL = 323,
     OL_ = 324,
     _OL = 325,
     P = 326,
     P_ = 327,
     _P = 328,
     PRE = 329,
     PRE_ = 330,
     _PRE = 331,
     SCRIPT = 332,
     SCRIPT_ = 333,
     _SCRIPT = 334,
     SPAN = 335,
     _SPAN = 336,
     STRONG = 337,
     _STRONG = 338,
     STYLE = 339,
     _STYLE = 340,
     TABLE = 341,
     _TABLE = 342,
     TD = 343,
     _TD = 344,
     TEXTAREA = 345,
     TEXTAREA_ = 346,
     _TEXTAREA = 347,
     TH = 348,
     _TH = 349,
     TITLE = 350,
     _TITLE = 351,
     TR = 352,
     _TR = 353,
     UL = 354,
     _UL = 355,
     CLOSE = 356
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
#define H1_H6_ 296
#define H1_H6 297
#define _H1_H6 298
#define HEAD 299
#define HEAD_ 300
#define _HEAD 301
#define HEADER 302
#define _HEADER 303
#define HR 304
#define HR_ 305
#define _HR 306
#define HTML 307
#define HTML_ 308
#define _HTML 309
#define IMG 310
#define _IMG 311
#define INPUT 312
#define _INPUT 313
#define LI 314
#define LI_ 315
#define _LI 316
#define LINK 317
#define _LINK 318
#define META 319
#define _META 320
#define OBJECT 321
#define _OBJECT 322
#define OL 323
#define OL_ 324
#define _OL 325
#define P 326
#define P_ 327
#define _P 328
#define PRE 329
#define PRE_ 330
#define _PRE 331
#define SCRIPT 332
#define SCRIPT_ 333
#define _SCRIPT 334
#define SPAN 335
#define _SPAN 336
#define STRONG 337
#define _STRONG 338
#define STYLE 339
#define _STYLE 340
#define TABLE 341
#define _TABLE 342
#define TD 343
#define _TD 344
#define TEXTAREA 345
#define TEXTAREA_ 346
#define _TEXTAREA 347
#define TH 348
#define _TH 349
#define TITLE 350
#define _TITLE 351
#define TR 352
#define _TR 353
#define UL 354
#define _UL 355
#define CLOSE 356




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 10 "parser.y"

        char *string;



/* Line 2068 of yacc.c  */
#line 258 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


