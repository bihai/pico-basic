///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Copyright Nurve Networks LLC 2008
// 
// Filename: XGS_PIC_C64_FONT_8X8_V010.h
//
// Original Author: Joshua Hintze
// 
// Last Modified: 11.10.08
//
// Overview: This is a data file that contains the defintions for the C64 8x8 partial character set. It contains
// blank, 0...9, period, comma, plus, minus, divide, multiply, other symbols and the letters A...Z. 
// If you are using the tile mode drivers and wish to use the GFX_Tmap*(...) tile console functions for printing text
// to the screen, you can include this file inline with your main program to define the tile bitmaps for the character set.
//
// Modifying: You can modify the bitmap data as you see fit. However if you add other patterns you must update the
// GFX_TMap* functions so they handle the changes appropriately.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


unsigned char g_TileFontBitmap[] __attribute__((far)) = {

////////////// Space
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,



////////////// Punctuation 
// !
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// "
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// #
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
1, 1, 1, 1, 1, 1, 1, 1,
0, 1, 1, 0, 0, 1, 1, 0,
1, 1, 1, 1, 1, 1, 1, 1,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// $
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 1, 1, 1, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 1, 1, 1, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// %
0, 1, 1, 0, 0, 0, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// &
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 1, 1, 1, 0, 0, 0,
0, 1, 1, 0, 0, 1, 1, 1,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0,


// '
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// (
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// )
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// *
0, 0, 0, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
1, 1, 1, 1, 1, 1, 1, 1,
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// +
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// ,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,


// -
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// .
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// /
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 1, 1,
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,




/////////// LETTERS 0-9 in C64 font
// 0
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 1, 1, 1, 0,
0, 1, 1, 1, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// 1
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// 2
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// 3
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// 4
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 1, 1, 1, 0,
0, 0, 0, 1, 1, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// 5
0, 1, 1, 1, 1, 1, 1, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// 6
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// 7
0, 1, 1, 1, 1, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// 8
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// 9
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


//////////// More punctuation
// :
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// ;
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,


// <
0, 0, 0, 0, 1, 1, 1, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// =
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// >
0, 1, 1, 1, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 1, 1, 1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// ?
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,

// @
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 1, 1, 1, 0,
0, 1, 1, 0, 1, 1, 1, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,



/////////// LETTERS A-Z in C64 font
// A
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// B
0, 1, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// C
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// D
0, 1, 1, 1, 1, 0, 0, 0,
0, 1, 1, 0, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 1, 1, 0, 0,
0, 1, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// E
0, 1, 1, 1, 1, 1, 1, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// F
0, 1, 1, 1, 1, 1, 1, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// G
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 1, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// H
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// I
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// J
0, 0, 0, 1, 1, 1, 1, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 1, 1, 0, 1, 1, 0, 0,
0, 0, 1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// K
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 1, 1, 0, 0,
0, 1, 1, 1, 1, 0, 0, 0,
0, 1, 1, 1, 0, 0, 0, 0,
0, 1, 1, 1, 1, 0, 0, 0,
0, 1, 1, 0, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// L
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// M
0, 1, 1, 0, 0, 0, 1, 1,
0, 1, 1, 1, 0, 1, 1, 1,
0, 1, 1, 1, 1, 1, 1, 1,
0, 1, 1, 0, 1, 0, 1, 1,
0, 1, 1, 0, 0, 0, 1, 1,
0, 1, 1, 0, 0, 0, 1, 1,
0, 1, 1, 0, 0, 0, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0,


// N
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 1, 0, 1, 1, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 1, 1, 0, 1, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// O
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// P
0, 1, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// Q
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// R
0, 1, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 1, 1, 1, 0, 0,
0, 1, 1, 1, 1, 0, 0, 0,
0, 1, 1, 0, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// S
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// T
0, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// U
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// V
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// W
0, 1, 1, 0, 0, 0, 1, 1,
0, 1, 1, 0, 0, 0, 1, 1,
0, 1, 1, 0, 0, 0, 1, 1,
0, 1, 1, 0, 1, 0, 1, 1,
0, 1, 1, 1, 1, 1, 1, 1,
0, 1, 1, 1, 0, 1, 1, 1,
0, 1, 1, 0, 0, 0, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0,


// X
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// Y
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 1, 1, 0, 0, 1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// Z
0, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 1, 1, 1, 1, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,



/////////// And more punctuation
// [
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// forward slash
0, 0, 0, 0, 0, 0, 0, 0,
1, 1, 0, 0, 0, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 0, 0, 0, 0,

// ]
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0,
0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// ^
0, 0, 0, 1, 0, 0, 0, 0,
0, 0, 1, 0, 1, 0, 0, 0,
0, 1, 0, 0, 0, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,


// _
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0,

};

