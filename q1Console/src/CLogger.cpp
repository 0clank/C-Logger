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
#include <fstream>
#include <ctime>

#ifdef _WIN32
#include <windows.h>
#endif

#include "../include/CLogger.h"
#include "../include/color.h"

q1::CLogger q1::logger::internalLogger = q1::CLogger::create(__FILE__);

/**
 * Creates an instance of CLogger
 * 
 * @param file File
 */
q1::CLogger::CLogger(std::string file)
{
	const size_t last_slash_idx = file.find_last_of("\\/");
	if (std::string::npos != last_slash_idx)
	{
		file.erase(0, last_slash_idx + 1);
	}

	m_File = file;
}

/**
 * Creates an instance of CLogger
 * 
 * @returns CLogger instance
 */
q1::CLogger q1::CLogger::create(std::string file)
{
	return CLogger(file);
}

/**
 * Setter of m_File
 * @param str Value to set as m_File
 * @returns Current object
 */
q1::CLogger& q1::CLogger::file(std::string* str)
{
	m_File = *str;
	return *this;
}

/**
 * Setter of m_File
 * @param str Value to set as m_File
 * @returns Current object
 */
q1::CLogger& q1::CLogger::file(std::string str)
{
	m_File = str;
	return *this;
}

/**
 * Disables the Logger timestamp
 * @returns Current object
 */
q1::CLogger& q1::CLogger::disableTime()
{
	m_Time = false;
	return *this;
}

/**
 * Enables the logger timestamp
 * @returns current object
 */
q1::CLogger& q1::CLogger::enableTime()
{
	m_Time = true;
	return *this;
}

/**
 * Disables the Logger type
 * @returns Current object
 */
q1::CLogger& q1::CLogger::disableType()
{
	m_Type = false;
	return *this;
}

/**
 * Enables the logger type
 * @returns current object
 */
q1::CLogger& q1::CLogger::enableType()
{
	m_Type = true;
	return *this;
}

/**
 * Disables the Logger colorization
 * @returns Current object
 */
q1::CLogger& q1::CLogger::disableColorization()
{
	m_Color = false;
	return *this;
}

/**
 * Enables the logger colorization
 * @returns current object
 */
q1::CLogger& q1::CLogger::enableColorization()
{
	m_Color = true;
	return *this;
}

/**
 * Disables the Logger export
 * @returns Current object
 */
q1::CLogger& q1::CLogger::disableExport()
{
	m_Export = false;
	return *this;
}

/**
 * Enables the logger export
 * @returns current object
 */
q1::CLogger& q1::CLogger::enableExport()
{
	m_Export = true;
	return *this;
}

/**
 * Changes the name of the log file
 * @returns current object
 */
q1::CLogger& q1::CLogger::renameExportFile(std::string* str)
{
	m_ExportFile = *str;
	return *this;
}

/**
 * Changes the name of the log file
 * @returns current object
 */
q1::CLogger& q1::CLogger::renameExportFile(const char* str)
{
	m_ExportFile = str;
	return *this;
}

/**
 * Prints out a info string
 * @param pointer String to print
 */
void q1::CLogger::info(const std::string* pointer)
{
	colorizedTime();
	colorizedType(LOG_INFO);
	printFile();

	std::cout << *pointer << std::endl;
	printToFile(pointer->c_str(), true);
}

/**
 * Prints out a info string
 * @param copy String to print
 */
void q1::CLogger::info(const std::string copy)
{
	this->info(&copy);
}

/**
 * Prints out a info string
 * @param pointer String to print
 */
void q1::CLogger::info(const char* pointer)
{
	std::string str = pointer;
	this->info(&str);
}

/**
 * Prints out a debug string
 * @param pointer String to print
 */
void q1::CLogger::debug(const std::string* pointer)
{
#ifdef _DEBUG
	colorizedTime();
	colorizedType(LOG_DEBUG);
	printFile();

	std::cout << *pointer << std::endl;
	printToFile(pointer->c_str(), true);
#endif
}

/**
 * Prints out a debug string
 * @param copy String to print
 */
void q1::CLogger::debug(const std::string copy)
{
	this->debug(&copy);
}

/**
 * Prints out a debug string
 * @param pointer String to print
 */
void q1::CLogger::debug(const char* pointer)
{
	std::string str = pointer;
	this->debug(&str);
}

/**
 * Prints out a warm string
 * @param pointer String to print
 */
void q1::CLogger::warn(const std::string* pointer)
{
	colorizedTime();
	colorizedType(LOG_WARN);
	printFile();

	std::cout << *pointer << std::endl;
	printToFile(pointer->c_str(), true);
}

/**
 * Prints out a warn string
 * @param copy String to print
 */
void q1::CLogger::warn(const std::string copy)
{
	this->warn(&copy);
}

/**
 * Prints out a warn string
 * @param pointer String to print
 */
void q1::CLogger::warn(const char* pointer)
{
	std::string str = pointer;
	this->warn(&str);
}

/**
 * Prints out a error string
 * @param pointer String to print
 */
void q1::CLogger::error(const std::string* pointer)
{
	colorizedTime();
	colorizedType(LOG_ERROR);
	printFile();

	std::cout << *pointer << std::endl;;
	printToFile(pointer->c_str(), true);
}

/**
 * Prints out a error string
 * @param copy String to print
 */
void q1::CLogger::error(const std::string copy)
{
	this->error(&copy);
}

/**
 * Prints out a error string
 * @param pointer String to print
 */
void q1::CLogger::error(const char* pointer)
{
	std::string str = pointer;
	this->error(&str);
}

/**
 * Prints out the file name
 */
void q1::CLogger::printFile()
{
	std::string str = "[" + m_File + "]: ";
	std::cout << str;
	printToFile(str.c_str(), false);
}

/**
 * Prints a string to the file
 */
void q1::CLogger::printToFile(const char* pointer, bool bBreak)
{
	if (m_Export)
	{
		std::ofstream outdata;
		outdata.open(m_ExportFile, std::ios_base::app);

		if (!outdata)
		{
			q1::logger::internalLogger.error("Failed to open file " + m_ExportFile);
		}

		outdata << pointer;

		if (bBreak)
		{
			outdata << std::endl;
		}

		outdata.close();
	}
}

/**
 * Prints out the current time in gray <br>
 * If Windows: Gets the current output handle and changes the text color to gray to print out the time <br>
 * Else: Using ANSI Escape (Linux and MAC)
 * @note It gets the handle in here because not every user wants to include windows.h -> Cant include it in logger.h
 */
void q1::CLogger::colorizedTime()
{
#ifdef _WIN32
	if (m_Time)
	{
		std::string time = timeAsString() + " ";

		if (m_Color)
		{
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, GRAY);

			std::cout << time;

			SetConsoleTextAttribute(hConsole, RESET);
		}
		else
		{
			std::cout << time;
		}

		printToFile(time.c_str(), false);
	}
#endif
}

/**
 * Prints out the log type <br>
 * If Windows: Gets the current output handle and changes the text color to gray to print out the time <br>
 * Else: Using ANSI Escape (Linux and MAC)
 * @note It gets the handle in here because not every user wants to include windows.h -> Cant include it in logger.h
 */
void q1::CLogger::colorizedType(uint16_t type)
{
	if (m_Type)
	{
		if (m_Color)
		{
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

			switch (type)
			{
			case LOG_INFO:
				SetConsoleTextAttribute(hConsole, GREEN);
				std::cout << STR_INFO;
				printToFile(STR_INFO, false);
				break;
			case LOG_DEBUG:
				SetConsoleTextAttribute(hConsole, CYAN);
				std::cout << STR_DEBUG;
				printToFile(STR_DEBUG, false);
				break;
			case LOG_WARN:
				SetConsoleTextAttribute(hConsole, YELLOW);
				std::cout << STR_WARN;
				printToFile(STR_WARN, false);
				break;
			case LOG_ERROR:
				SetConsoleTextAttribute(hConsole, RED);
				std::cout << STR_ERROR;
				printToFile(STR_ERROR, false);
				break;
			default:
				SetConsoleTextAttribute(hConsole, RED);
				std::cout << STR_ERROR;
				printToFile(STR_ERROR, false);
				break;
			}

			SetConsoleTextAttribute(hConsole, RESET);
		}
		else
		{
			switch (type)
			{
			case LOG_INFO:
				std::cout << STR_INFO;
				printToFile(STR_INFO, false);
				break;
			case LOG_DEBUG:
				std::cout << STR_DEBUG;
				printToFile(STR_DEBUG, false);
				break;
			case LOG_WARN:
				std::cout << STR_WARN;
				printToFile(STR_WARN, false);
				break;
			case LOG_ERROR:
				std::cout << STR_ERROR;
				printToFile(STR_ERROR, false);
				break;
			default:
				std::cout << STR_ERROR;
				printToFile(STR_ERROR, false);
				break;
			}
		}
	}
}

/**
 * Gets the current time as std::string using localtime_s() <br>
 * The string will have following format: Wed Feb 13 17:17:11 2013 <br>
 * 
 * Format: "%d-%m-%Y %H:%M:%S"
 * 
 * @returns The current time
 */
std::string q1::CLogger::timeAsString()
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
