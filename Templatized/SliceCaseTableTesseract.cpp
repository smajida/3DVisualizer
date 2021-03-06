/***********************************************************************
SliceCaseTableTesseract - Specialized versions of
SliceCaseTable for two- and three-dimensional tesseracts.
Copyright (c) 2005-2007 Oliver Kreylos

This file is part of the 3D Data Visualizer (Visualizer).

The 3D Data Visualizer is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License as published
by the Free Software Foundation; either version 2 of the License, or (at
your option) any later version.

The 3D Data Visualizer is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License along
with the 3D Data Visualizer; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
***********************************************************************/

#include <Templatized/SliceCaseTableTesseract.h>

namespace Visualization {

namespace Templatized {

/******************************************************
Static elements of class SliceCaseTable<Tesseract<3> >:
******************************************************/

const int SliceCaseTable<Tesseract<3> >::edgeIndices[256][7]=
	{
	{-1, -1, -1, -1, -1, -1, -1}, //   0
	{ 0,  8,  4, -1, -1, -1, -1}, //   1
	{ 0,  5,  9, -1, -1, -1, -1}, //   2
	{ 5,  9,  8,  4, -1, -1, -1}, //   3
	{ 4, 10,  1, -1, -1, -1, -1}, //   4
	{ 0,  8, 10,  1, -1, -1, -1}, //   5
	{-1, -1, -1, -1, -1, -1, -1}, //   6
	{ 5,  9,  8, 10,  1, -1, -1}, //   7
	{ 5,  1, 11, -1, -1, -1, -1}, //   8
	{-1, -1, -1, -1, -1, -1, -1}, //   9
	{ 0,  1, 11,  9, -1, -1, -1}, //  10
	{ 1, 11,  9,  8,  4, -1, -1}, //  11
	{ 4, 10, 11,  5, -1, -1, -1}, //  12
	{ 0,  8, 10, 11,  5, -1, -1}, //  13
	{ 0,  4, 10, 11,  9, -1, -1}, //  14
	{10, 11,  9,  8, -1, -1, -1}, //  15
	{ 8,  2,  6, -1, -1, -1, -1}, //  16
	{ 0,  2,  6,  4, -1, -1, -1}, //  17
	{-1, -1, -1, -1, -1, -1, -1}, //  18
	{ 5,  9,  2,  6,  4, -1, -1}, //  19
	{-1, -1, -1, -1, -1, -1, -1}, //  20
	{ 0,  2,  6, 10,  1, -1, -1}, //  21
	{-1, -1, -1, -1, -1, -1, -1}, //  22
	{ 5,  9,  2,  6, 10,  1, -1}, //  23
	{-1, -1, -1, -1, -1, -1, -1}, //  24
	{-1, -1, -1, -1, -1, -1, -1}, //  25
	{-1, -1, -1, -1, -1, -1, -1}, //  26
	{ 1, 11,  9,  2,  6,  4, -1}, //  27
	{-1, -1, -1, -1, -1, -1, -1}, //  28
	{ 0,  2,  6, 10, 11,  5, -1}, //  29
	{-1, -1, -1, -1, -1, -1, -1}, //  30
	{ 9,  2,  6, 10, 11, -1, -1}, //  31
	{ 9,  7,  2, -1, -1, -1, -1}, //  32
	{-1, -1, -1, -1, -1, -1, -1}, //  33
	{ 0,  5,  7,  2, -1, -1, -1}, //  34
	{ 5,  7,  2,  8,  4, -1, -1}, //  35
	{-1, -1, -1, -1, -1, -1, -1}, //  36
	{-1, -1, -1, -1, -1, -1, -1}, //  37
	{-1, -1, -1, -1, -1, -1, -1}, //  38
	{ 5,  7,  2,  8, 10,  1, -1}, //  39
	{-1, -1, -1, -1, -1, -1, -1}, //  40
	{-1, -1, -1, -1, -1, -1, -1}, //  41
	{ 0,  1, 11,  7,  2, -1, -1}, //  42
	{ 1, 11,  7,  2,  8,  4, -1}, //  43
	{-1, -1, -1, -1, -1, -1, -1}, //  44
	{-1, -1, -1, -1, -1, -1, -1}, //  45
	{ 0,  4, 10, 11,  7,  2, -1}, //  46
	{ 8, 10, 11,  7,  2, -1, -1}, //  47
	{ 8,  9,  7,  6, -1, -1, -1}, //  48
	{ 0,  9,  7,  6,  4, -1, -1}, //  49
	{ 0,  5,  7,  6,  8, -1, -1}, //  50
	{ 5,  7,  6,  4, -1, -1, -1}, //  51
	{-1, -1, -1, -1, -1, -1, -1}, //  52
	{ 0,  9,  7,  6, 10,  1, -1}, //  53
	{-1, -1, -1, -1, -1, -1, -1}, //  54
	{ 5,  7,  6, 10,  1, -1, -1}, //  55
	{-1, -1, -1, -1, -1, -1, -1}, //  56
	{-1, -1, -1, -1, -1, -1, -1}, //  57
	{ 0,  1, 11,  7,  6,  8, -1}, //  58
	{ 4,  1, 11,  7,  6, -1, -1}, //  59
	{-1, -1, -1, -1, -1, -1, -1}, //  60
	{-1, -1, -1, -1, -1, -1, -1}, //  61
	{-1, -1, -1, -1, -1, -1, -1}, //  62
	{10, 11,  7,  6, -1, -1, -1}, //  63
	{10,  6,  3, -1, -1, -1, -1}, //  64
	{-1, -1, -1, -1, -1, -1, -1}, //  65
	{-1, -1, -1, -1, -1, -1, -1}, //  66
	{-1, -1, -1, -1, -1, -1, -1}, //  67
	{ 4,  6,  3,  1, -1, -1, -1}, //  68
	{ 0,  8,  6,  3,  1, -1, -1}, //  69
	{-1, -1, -1, -1, -1, -1, -1}, //  70
	{ 5,  9,  8,  6,  3,  1, -1}, //  71
	{-1, -1, -1, -1, -1, -1, -1}, //  72
	{-1, -1, -1, -1, -1, -1, -1}, //  73
	{-1, -1, -1, -1, -1, -1, -1}, //  74
	{-1, -1, -1, -1, -1, -1, -1}, //  75
	{ 4,  6,  3, 11,  5, -1, -1}, //  76
	{ 0,  8,  6,  3, 11,  5, -1}, //  77
	{ 0,  4,  6,  3, 11,  9, -1}, //  78
	{ 8,  6,  3, 11,  9, -1, -1}, //  79
	{ 8,  2,  3, 10, -1, -1, -1}, //  80
	{ 0,  2,  3, 10,  4, -1, -1}, //  81
	{-1, -1, -1, -1, -1, -1, -1}, //  82
	{ 5,  9,  2,  3, 10,  4, -1}, //  83
	{ 4,  8,  2,  3,  1, -1, -1}, //  84
	{ 0,  2,  3,  1, -1, -1, -1}, //  85
	{-1, -1, -1, -1, -1, -1, -1}, //  86
	{ 5,  9,  2,  3,  1, -1, -1}, //  87
	{-1, -1, -1, -1, -1, -1, -1}, //  88
	{-1, -1, -1, -1, -1, -1, -1}, //  89
	{-1, -1, -1, -1, -1, -1, -1}, //  90
	{-1, -1, -1, -1, -1, -1, -1}, //  91
	{ 4,  8,  2,  3, 11,  5, -1}, //  92
	{ 0,  2,  3, 11,  5, -1, -1}, //  93
	{-1, -1, -1, -1, -1, -1, -1}, //  94
	{ 9,  2,  3, 11, -1, -1, -1}, //  95
	{-1, -1, -1, -1, -1, -1, -1}, //  96
	{-1, -1, -1, -1, -1, -1, -1}, //  97
	{-1, -1, -1, -1, -1, -1, -1}, //  98
	{-1, -1, -1, -1, -1, -1, -1}, //  99
	{-1, -1, -1, -1, -1, -1, -1}, // 100
	{-1, -1, -1, -1, -1, -1, -1}, // 101
	{-1, -1, -1, -1, -1, -1, -1}, // 102
	{-1, -1, -1, -1, -1, -1, -1}, // 103
	{-1, -1, -1, -1, -1, -1, -1}, // 104
	{-1, -1, -1, -1, -1, -1, -1}, // 105
	{-1, -1, -1, -1, -1, -1, -1}, // 106
	{-1, -1, -1, -1, -1, -1, -1}, // 107
	{-1, -1, -1, -1, -1, -1, -1}, // 108
	{-1, -1, -1, -1, -1, -1, -1}, // 109
	{-1, -1, -1, -1, -1, -1, -1}, // 110
	{-1, -1, -1, -1, -1, -1, -1}, // 111
	{ 8,  9,  7,  3, 10, -1, -1}, // 112
	{ 0,  9,  7,  3, 10,  4, -1}, // 113
	{ 0,  5,  7,  3, 10,  8, -1}, // 114
	{ 4,  5,  7,  3, 10, -1, -1}, // 115
	{ 4,  8,  9,  7,  3,  1, -1}, // 116
	{ 0,  9,  7,  3,  1, -1, -1}, // 117
	{-1, -1, -1, -1, -1, -1, -1}, // 118
	{ 5,  7,  3,  1, -1, -1, -1}, // 119
	{-1, -1, -1, -1, -1, -1, -1}, // 120
	{-1, -1, -1, -1, -1, -1, -1}, // 121
	{-1, -1, -1, -1, -1, -1, -1}, // 122
	{-1, -1, -1, -1, -1, -1, -1}, // 123
	{-1, -1, -1, -1, -1, -1, -1}, // 124
	{-1, -1, -1, -1, -1, -1, -1}, // 125
	{-1, -1, -1, -1, -1, -1, -1}, // 126
	{11,  7,  3, -1, -1, -1, -1}, // 127
	{11,  3,  7, -1, -1, -1, -1}, // 128
	{-1, -1, -1, -1, -1, -1, -1}, // 129
	{-1, -1, -1, -1, -1, -1, -1}, // 130
	{-1, -1, -1, -1, -1, -1, -1}, // 131
	{-1, -1, -1, -1, -1, -1, -1}, // 132
	{-1, -1, -1, -1, -1, -1, -1}, // 133
	{-1, -1, -1, -1, -1, -1, -1}, // 134
	{-1, -1, -1, -1, -1, -1, -1}, // 135
	{ 5,  1,  3,  7, -1, -1, -1}, // 136
	{-1, -1, -1, -1, -1, -1, -1}, // 137
	{ 0,  1,  3,  7,  9, -1, -1}, // 138
	{ 1,  3,  7,  9,  8,  4, -1}, // 139
	{ 4, 10,  3,  7,  5, -1, -1}, // 140
	{ 0,  8, 10,  3,  7,  5, -1}, // 141
	{ 0,  4, 10,  3,  7,  9, -1}, // 142
	{ 8, 10,  3,  7,  9, -1, -1}, // 143
	{-1, -1, -1, -1, -1, -1, -1}, // 144
	{-1, -1, -1, -1, -1, -1, -1}, // 145
	{-1, -1, -1, -1, -1, -1, -1}, // 146
	{-1, -1, -1, -1, -1, -1, -1}, // 147
	{-1, -1, -1, -1, -1, -1, -1}, // 148
	{-1, -1, -1, -1, -1, -1, -1}, // 149
	{-1, -1, -1, -1, -1, -1, -1}, // 150
	{-1, -1, -1, -1, -1, -1, -1}, // 151
	{-1, -1, -1, -1, -1, -1, -1}, // 152
	{-1, -1, -1, -1, -1, -1, -1}, // 153
	{-1, -1, -1, -1, -1, -1, -1}, // 154
	{-1, -1, -1, -1, -1, -1, -1}, // 155
	{-1, -1, -1, -1, -1, -1, -1}, // 156
	{-1, -1, -1, -1, -1, -1, -1}, // 157
	{-1, -1, -1, -1, -1, -1, -1}, // 158
	{-1, -1, -1, -1, -1, -1, -1}, // 159
	{ 9, 11,  3,  2, -1, -1, -1}, // 160
	{-1, -1, -1, -1, -1, -1, -1}, // 161
	{ 0,  5, 11,  3,  2, -1, -1}, // 162
	{ 5, 11,  3,  2,  8,  4, -1}, // 163
	{-1, -1, -1, -1, -1, -1, -1}, // 164
	{-1, -1, -1, -1, -1, -1, -1}, // 165
	{-1, -1, -1, -1, -1, -1, -1}, // 166
	{-1, -1, -1, -1, -1, -1, -1}, // 167
	{ 5,  1,  3,  2,  9, -1, -1}, // 168
	{-1, -1, -1, -1, -1, -1, -1}, // 169
	{ 0,  1,  3,  2, -1, -1, -1}, // 170
	{ 4,  1,  3,  2,  8, -1, -1}, // 171
	{ 4, 10,  3,  2,  9,  5, -1}, // 172
	{-1, -1, -1, -1, -1, -1, -1}, // 173
	{ 0,  4, 10,  3,  2, -1, -1}, // 174
	{ 8, 10,  3,  2, -1, -1, -1}, // 175
	{ 8,  9, 11,  3,  6, -1, -1}, // 176
	{ 0,  9, 11,  3,  6,  4, -1}, // 177
	{ 0,  5, 11,  3,  6,  8, -1}, // 178
	{ 4,  5, 11,  3,  6, -1, -1}, // 179
	{-1, -1, -1, -1, -1, -1, -1}, // 180
	{-1, -1, -1, -1, -1, -1, -1}, // 181
	{-1, -1, -1, -1, -1, -1, -1}, // 182
	{-1, -1, -1, -1, -1, -1, -1}, // 183
	{ 5,  1,  3,  6,  8,  9, -1}, // 184
	{-1, -1, -1, -1, -1, -1, -1}, // 185
	{ 0,  1,  3,  6,  8, -1, -1}, // 186
	{ 4,  1,  3,  6, -1, -1, -1}, // 187
	{-1, -1, -1, -1, -1, -1, -1}, // 188
	{-1, -1, -1, -1, -1, -1, -1}, // 189
	{-1, -1, -1, -1, -1, -1, -1}, // 190
	{10,  3,  6, -1, -1, -1, -1}, // 191
	{10,  6,  7, 11, -1, -1, -1}, // 192
	{-1, -1, -1, -1, -1, -1, -1}, // 193
	{-1, -1, -1, -1, -1, -1, -1}, // 194
	{-1, -1, -1, -1, -1, -1, -1}, // 195
	{ 4,  6,  7, 11,  1, -1, -1}, // 196
	{ 0,  8,  6,  7, 11,  1, -1}, // 197
	{-1, -1, -1, -1, -1, -1, -1}, // 198
	{-1, -1, -1, -1, -1, -1, -1}, // 199
	{ 5,  1, 10,  6,  7, -1, -1}, // 200
	{-1, -1, -1, -1, -1, -1, -1}, // 201
	{ 0,  1, 10,  6,  7,  9, -1}, // 202
	{-1, -1, -1, -1, -1, -1, -1}, // 203
	{ 4,  6,  7,  5, -1, -1, -1}, // 204
	{ 0,  8,  6,  7,  5, -1, -1}, // 205
	{ 0,  4,  6,  7,  9, -1, -1}, // 206
	{ 8,  6,  7,  9, -1, -1, -1}, // 207
	{ 8,  2,  7, 11, 10, -1, -1}, // 208
	{ 0,  2,  7, 11, 10,  4, -1}, // 209
	{-1, -1, -1, -1, -1, -1, -1}, // 210
	{-1, -1, -1, -1, -1, -1, -1}, // 211
	{ 4,  8,  2,  7, 11,  1, -1}, // 212
	{ 0,  2,  7, 11,  1, -1, -1}, // 213
	{-1, -1, -1, -1, -1, -1, -1}, // 214
	{-1, -1, -1, -1, -1, -1, -1}, // 215
	{ 5,  1, 10,  8,  2,  7, -1}, // 216
	{-1, -1, -1, -1, -1, -1, -1}, // 217
	{-1, -1, -1, -1, -1, -1, -1}, // 218
	{-1, -1, -1, -1, -1, -1, -1}, // 219
	{ 5,  4,  8,  2,  7, -1, -1}, // 220
	{ 0,  2,  7,  5, -1, -1, -1}, // 221
	{-1, -1, -1, -1, -1, -1, -1}, // 222
	{ 9,  2,  7, -1, -1, -1, -1}, // 223
	{ 9, 11, 10,  6,  2, -1, -1}, // 224
	{-1, -1, -1, -1, -1, -1, -1}, // 225
	{ 0,  5, 11, 10,  6,  2, -1}, // 226
	{-1, -1, -1, -1, -1, -1, -1}, // 227
	{ 4,  6,  2,  9, 11,  1, -1}, // 228
	{-1, -1, -1, -1, -1, -1, -1}, // 229
	{-1, -1, -1, -1, -1, -1, -1}, // 230
	{-1, -1, -1, -1, -1, -1, -1}, // 231
	{ 5,  1, 10,  6,  2,  9, -1}, // 232
	{-1, -1, -1, -1, -1, -1, -1}, // 233
	{ 0,  1, 10,  6,  2, -1, -1}, // 234
	{-1, -1, -1, -1, -1, -1, -1}, // 235
	{ 5,  4,  6,  2,  9, -1, -1}, // 236
	{-1, -1, -1, -1, -1, -1, -1}, // 237
	{ 0,  4,  6,  2, -1, -1, -1}, // 238
	{ 8,  6,  2, -1, -1, -1, -1}, // 239
	{ 8,  9, 11, 10, -1, -1, -1}, // 240
	{ 0,  9, 11, 10,  4, -1, -1}, // 241
	{ 0,  5, 11, 10,  8, -1, -1}, // 242
	{ 4,  5, 11, 10, -1, -1, -1}, // 243
	{ 1,  4,  8,  9, 11, -1, -1}, // 244
	{ 0,  9, 11,  1, -1, -1, -1}, // 245
	{-1, -1, -1, -1, -1, -1, -1}, // 246
	{ 5, 11,  1, -1, -1, -1, -1}, // 247
	{ 5,  1, 10,  8,  9, -1, -1}, // 248
	{-1, -1, -1, -1, -1, -1, -1}, // 249
	{ 0,  1, 10,  8, -1, -1, -1}, // 250
	{ 4,  1, 10, -1, -1, -1, -1}, // 251
	{ 5,  4,  8,  9, -1, -1, -1}, // 252
	{ 0,  9,  5, -1, -1, -1, -1}, // 253
	{ 0,  4,  8, -1, -1, -1, -1}, // 254
	{-1, -1, -1, -1, -1, -1, -1}  // 255
	};

const int SliceCaseTable<Tesseract<3> >::neighbourMasks[256]=
	{
	0x0000, 0x0015, 0x0016, 0x0017, 0x0019, 0x001d, 0x001f, 0x001f,
	0x001a, 0x001f, 0x001e, 0x001f, 0x001b, 0x001f, 0x001f, 0x000f,
	0x0025, 0x0035, 0x0037, 0x0037, 0x003d, 0x003d, 0x003f, 0x003f,
	0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x002f,
	0x0026, 0x0037, 0x0036, 0x0037, 0x003f, 0x003f, 0x003f, 0x003f,
	0x003e, 0x003f, 0x003e, 0x003f, 0x003f, 0x003f, 0x003f, 0x002f,
	0x0027, 0x0037, 0x0037, 0x0033, 0x003f, 0x003f, 0x003f, 0x003b,
	0x003f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003f, 0x003f, 0x002b,
	0x0029, 0x003d, 0x003f, 0x003f, 0x0039, 0x003d, 0x003f, 0x003f,
	0x003b, 0x003f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003f, 0x002f,
	0x002d, 0x003d, 0x003f, 0x003f, 0x003d, 0x003c, 0x003f, 0x003e,
	0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003e, 0x003f, 0x002e,
	0x002f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f,
	0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x002f,
	0x002f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003e, 0x003f, 0x003a,
	0x003f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003e, 0x003f, 0x002a,
	0x002a, 0x003f, 0x003e, 0x003f, 0x003b, 0x003f, 0x003f, 0x003f,
	0x003a, 0x003f, 0x003e, 0x003f, 0x003b, 0x003f, 0x003f, 0x002f,
	0x002f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f,
	0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x002f,
	0x002e, 0x003f, 0x003e, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f,
	0x003e, 0x003f, 0x003c, 0x003d, 0x003f, 0x003f, 0x003d, 0x002d,
	0x002f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003f, 0x003f, 0x003b,
	0x003f, 0x003f, 0x003d, 0x0039, 0x003f, 0x003f, 0x003d, 0x0029,
	0x002b, 0x003f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003f, 0x003f,
	0x003b, 0x003f, 0x003f, 0x003f, 0x0033, 0x0037, 0x0037, 0x0027,
	0x002f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003e, 0x003f, 0x003e,
	0x003f, 0x003f, 0x003f, 0x003f, 0x0037, 0x0036, 0x0037, 0x0026,
	0x002f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f,
	0x003f, 0x003f, 0x003d, 0x003d, 0x0037, 0x0037, 0x0035, 0x0025,
	0x000f, 0x001f, 0x001f, 0x001b, 0x001f, 0x001e, 0x001f, 0x001a,
	0x001f, 0x001f, 0x001d, 0x0019, 0x0017, 0x0016, 0x0015, 0x0000
	};

}

}
