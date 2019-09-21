#include <logger.h>
#include <iostream>
#include <printer.h>

class test
{
public:
	static void ttest()
	{
		std::string test;
		q1::CPrinter::println(&test);
	}
};
