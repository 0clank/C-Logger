#include <CLogger.h>
#include <iostream>
#include <CPrinter.h>

class test
{
public:
	static void ttest()
	{
		std::string test;
		q1::CPrinter::println(&test);
	}
};
