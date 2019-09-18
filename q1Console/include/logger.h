/*
 * File: logger.h
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

#ifndef __LOGGER_H__
#define __LOGGER_H__

#include <string>

#define WIN32_LEAN_AND_MEAN

#define FILE_UNKNOWN_LOG "unknown"

#define LOG_INFO	0
#define LOG_DEBUG	1
#define LOG_WARN	2
#define LOG_ERROR	3

#define STR_INFO	" INFO"
#define STR_DEBUG	"DEBUG"
#define STR_WARN	" WARN"
#define STR_ERROR	"ERROR"

// Customs
#define Logger	q1::CLogger
#define String	std::string

namespace q1
{
	/**
	 * Implementation of a Logger for q1Console
	 * 
	 * Controls the logging into the console and into a file.
	 * 
	 * @author Qu1oX
	 * @since 0.1
	 * @version 0.1
	 * 
	 * @note Logger format: {{ time }}  {{ type }} [{{ file }}]: {{ string }}
	 */
	class CLogger
	{
	public:
		CLogger(String file = FILE_UNKNOWN_LOG);
		~CLogger() = default;

		CLogger& file(String& str);

		void info(const String* pointer);
		void debug(const String* pointer);
		void warn(const String* pointer);
		void error(const String* pointer);

	private:
		std::string m_File;

		void printSpace();
		void printLinebreak();
		void printFile();
		void colorizedTime();
		void colorizedType(uint16_t type);

		String timeAsString();
	};
}

#endif
