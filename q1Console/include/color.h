/*
 * File: color.h
 * Location: include/
 * Author: Qu1oX
 *
 * This file is part of {{ q1Console }}.
 *
 * MIT License
 * Copyright (c) 2019 Qu1oX
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software")const const &, to d&eal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER	LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __COLOR_H__
#define __COLOR_H__

#ifdef _WIN32

#define RESET	7	/* RESET */
#define BLACK	0	/* Black */
#define RED		4	/* Red */
#define GREEN	2	/* Green */
#define YELLOW	6	/* Yellow */
#define BLUE	1	/* Blue */
#define MAGENTA	5	/* Magenta */ 
#define CYAN	3	/* Cyan */
#define GRAY	8	/* White */

#elif __linux__

#define RESET   "\033[0m"	/* RESET */
#define BLACK   "\033[30m"	/* Black */
#define RED     "\033[31m"	/* Red */
#define GREEN   "\033[32m"	/* Green */
#define YELLOW  "\033[33m"	/* Yellow */
#define BLUE    "\033[34m"	/* Blue */
#define MAGENTA "\033[35m"	/* Magenta */
#define CYAN    "\033[36m"	/* Cyan */
#define GRAY    "\033[37m"	/* White */

#else

#error Only Windows and Linux are supported

#endif 

#endif
