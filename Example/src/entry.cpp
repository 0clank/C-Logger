/*
 * File: entry.cpp
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

#include <logger.h>
#include <printer.h>
#include <iostream>

#include "include.h"

#pragma comment(lib, "q1Console")

int main()
{
	std::string test = "test";

	q1::CPrinter::println(&test);
	Println(&test);
	Println("Test");

	q1::CLogger logger = q1::CLogger::create(__FILE__);

	std::string info = "some info text over here.";
	std::string debug = "some debug text over here.";
	std::string warn = "some warn text over here.";
	std::string error = "some error text over here.";

	logger.info(&info);
	logger.debug(&debug);
	logger.warn(&warn);
	logger.error(&error);

	logger = q1::CLogger::create(__FILE__)
		.disableTime()
		.disableColorization()
		.disableType()
		.enableExport()
		.renameExportFile("log.log");

	logger.info(&info);
	logger.debug(&debug);
	logger.warn(&warn);
	logger.error(&error);

	return 0;
}
