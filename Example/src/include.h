#include <logger.h>
#include <iostream>

namespace test {
	inline void test()
	{
		q1::CLogger logger;
		std::string test = "test";
		logger.file(test);
		std::cout << logger.file() << std::endl;
	}
}
