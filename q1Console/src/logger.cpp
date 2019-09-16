/*
 * File: logger.cpp
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

#include <iostream>
#include <ctime>

#include "../include/logger.h"

/**
 * Getter of m_File
 * @returns Value of m_File
 */
String& q1::CLogger::file()
{
	return m_File;
}

/**
 * Getter of m_Space
 * @returns Value of m_Space
 */
String& q1::CLogger::space()
{
	return m_Space;
}

/**
 * Getter of m_ShortSpace
 * @returns Value of m_ShortSpace
 */
String& q1::CLogger::shortSpace()
{
	return m_ShortSpace;
}

/**
 * Setter of m_File
 * @param str Value to set as m_File
 */
void q1::CLogger::file(String& str)
{
	m_File = str;
}

/**
 * Setter of m_Space
 * @param str Value to set as m_Space
 */
void q1::CLogger::space(String& str)
{
	m_Space = str;
}

/**
 * Setter of m_ShortSpace
 * @param str Value to set as m_ShortSpace
 */
void q1::CLogger::shortSpace(String& str)
{
	m_ShortSpace = str;
}

/**
 * Gets the current time as std::string using localtime_s() <br>
 * The string will have following format: Wed Feb 13 17:17:11 2013 <br>
 * 
 * Format: "%d-%m-%Y %H:%M:%S"
 * 
 * @returns The current time
 */
String q1::CLogger::timeAsString()
{
	time_t rawTime;
	tm* timeInfo = new tm;
	char buffer[80];

	time(&rawTime);
	localtime_s(timeInfo, &rawTime);

	strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", timeInfo);
	std::string str(buffer);

	delete timeInfo;
	timeInfo = nullptr;

	return str;
}