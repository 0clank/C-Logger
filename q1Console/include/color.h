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
