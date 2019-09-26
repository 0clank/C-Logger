/*
 * File: printer.cpp
 * Location: src/
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

#include "../include/color.h"
#include "../include/CPrinter.h"

#include <iostream>

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const std::string* str)
{
	std::cout << *str;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const std::string str)
{
	std::cout << str;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const std::wstring* wstr)
{
	std::cout << *wstr->c_str();
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const std::wstring wstr)
{
	std::cout << wstr.c_str();
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const char* str)
{
	std::cout << str;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const wchar_t* wstr)
{
	std::cout << wstr;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const double* db)
{
	std::cout << *db;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const double db)
{
	std::cout << db;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const float* fl)
{
	std::cout << *fl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const float fl)
{
	std::cout << fl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const long long* ln)
{
	std::cout << *ln;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const long long ln)
{
	std::cout << ln;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const unsigned long long* ln)
{
	std::cout << *ln;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const unsigned long long ln)
{
	std::cout << ln;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const long* ln)
{
	std::cout << *ln;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const long ln)
{
	std::cout << ln;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const unsigned long* ln)
{
	std::cout << *ln;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const unsigned long ln)
{
	std::cout << ln;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const int* number)
{
	std::cout << *number;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const int number)
{
	std::cout << number;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const unsigned int* number)
{
	std::cout << *number;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const unsigned int number)
{
	std::cout << number;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const short* sh)
{
	std::cout << *sh;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const short sh)
{
	std::cout << sh;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const unsigned short* sh)
{
	std::cout << *sh;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const unsigned short sh)
{
	std::cout << sh;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const char ch)
{
	std::cout << ch;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const unsigned char* ch)
{
	std::cout << ch;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const unsigned char ch)
{
	std::cout << ch;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const bool* b)
{
	std::cout << *b;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::print(const bool b)
{
	std::cout << b;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const std::string* str)
{
	std::cout << *str << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const std::string str)
{
	std::cout << str << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const std::wstring* wstr)
{
	std::cout << *wstr->c_str() << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const std::wstring wstr)
{
	std::cout << wstr.c_str() << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const char* str)
{
	std::cout << str << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const wchar_t* wstr)
{
	std::cout << wstr << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const double* db)
{
	std::cout << *db << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const double db)
{
	std::cout << db << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const float* fl)
{
	std::cout << *fl << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const float fl)
{
	std::cout << fl << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const long long* ln)
{
	std::cout << *ln << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const long long ln)
{
	std::cout << ln << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const unsigned long long* ln)
{
	std::cout << *ln << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const unsigned long long ln)
{
	std::cout << ln << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const long* ln)
{
	std::cout << *ln << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const long ln)
{
	std::cout << ln << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const unsigned long* ln)
{
	std::cout << *ln << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const unsigned long ln)
{
	std::cout << ln << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const int* number)
{
	std::cout << *number << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const int number)
{
	std::cout << number << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const unsigned int* number)
{
	std::cout << *number << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const unsigned int number)
{
	std::cout << number << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const short* sh)
{
	std::cout << *sh << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const short sh)
{
	std::cout << sh << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const unsigned short* sh)
{
	std::cout << *sh << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const unsigned short sh)
{
	std::cout << sh << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const char ch)
{
	std::cout << ch << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const unsigned char* ch)
{
	std::cout << ch << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const unsigned char ch)
{
	std::cout << ch << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const bool* b)
{
	std::cout << *b << std::endl;
}

/**
 * Prints out the variable to the console
 */
void q1::CPrinter::println(const bool b)
{
	std::cout << b << std::endl;
}
