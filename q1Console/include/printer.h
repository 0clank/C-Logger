/*
 * File: printer.h
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

#ifndef __PRINTER_H__
#define __PRINTER_H__

#include <string>

#define Print(x) q1::CPrinter::print(x)
#define Println(x) q1::CPrinter::println(x)

namespace q1
{
	class CPrinter
	{
	public:
		static void print(const std::string* str);
		static void print(const std::string str);

		static void print(const std::wstring* wstr);
		static void print(const std::wstring wstr);

		static void print(const char* str);
		static void print(const wchar_t* wstr);

		static void print(const double* db);
		static void print(const double db);

		static void print(const float* fl);
		static void print(const float fl);

		static void print(const long long* ln);
		static void print(const long long ln);
		static void print(const unsigned long long* ln);
		static void print(const unsigned long long ln);

		static void print(const long* ln);
		static void print(const long ln);
		static void print(const unsigned long* ln);
		static void print(const unsigned long ln);

		static void print(const int* number);
		static void print(const int number);
		static void print(const unsigned int* number);
		static void print(const unsigned int number);

		static void print(const short* sh);
		static void print(const short sh);
		static void print(const unsigned short* sh);
		static void print(const unsigned short sh);

		static void print(const char ch);
		static void print(const unsigned char* ch);
		static void print(const unsigned char ch);

		static void print(const bool* b);
		static void print(const bool b);



		static void println(const std::string* str);
		static void println(const std::string str);

		static void println(const std::wstring* wstr);
		static void println(const std::wstring wstr);

		static void println(const char* str);
		static void println(const wchar_t* wstr);

		static void println(const double* db);
		static void println(const double db);

		static void println(const float* fl);
		static void println(const float fl);

		static void println(const long long* ln);
		static void println(const long long ln);
		static void println(const unsigned long long* ln);
		static void println(const unsigned long long ln);

		static void println(const long* ln);
		static void println(const long ln);
		static void println(const unsigned long* ln);
		static void println(const unsigned long ln);

		static void println(const int* number);
		static void println(const int number);
		static void println(const unsigned int* number);
		static void println(const unsigned int number);

		static void println(const short* sh);
		static void println(const short sh);
		static void println(const unsigned short* sh);
		static void println(const unsigned short sh);

		static void println(const char ch);
		static void println(const unsigned char* ch);
		static void println(const unsigned char ch);

		static void println(const bool* b);
		static void println(const bool b);

	private:

	};
}

#endif