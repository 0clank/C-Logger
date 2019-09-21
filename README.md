   
                                                         _  __         
                                                   __ _ / | \ \        
                                                  / _` || |  \ \       
                                                 | (_| || |  / /       
                                                  \__, ||_| /_/  _____ 
                                                     |_|        |_____|


# q1Console [![q1Console](https://img.shields.io/badge/Cpp-Console-blue?style=flat-square&logo=c%2B%2B&logoColor=White)](https://github.com/Qu1oX/q1Console) [![q1Console](https://img.shields.io/github/license/qu1ox/q1Console?style=flat-square)](https://github.com/Qu1oX/q1Console) [![q1Console](https://img.shields.io/github/v/release/qu1ox/q1Console?label=stable&style=flat-square)](https://github.com/Qu1oX/q1Console) [![q1Console](https://img.shields.io/github/v/release/qu1ox/q1Console?include_prereleases&label=beta&style=flat-square)](https://github.com/Qu1oX/q1Console)
> Simplified C++ Console Output, Input and Logging

## Features

### Printer
> Print functions for all primitiv data types as well as strings and wide strings

#### How to use
Using the macro `Print(x)` and `Println(x)` 
	
	Println("String")
	Println(&str)
	Println(1.3f)
	Println(3)
	
Or by simple using the functions

	q1::CPrinter::println("String")
	q1::CPrinter::println(&str)
	q1::CPrinter::println(1.3f)
	q1::CPrinter::println(3)


### Logger
> Logs the string in that format: {{ time }}  {{ type }} [{ file }}]: {{ string }}

> Logs the string to a file if .enableExport was called

#### How to create and configure
Create an instance of the logger
      
      q1::CLogger logger = q1::CLogger::create(__FILE__);
      
configuration   
    
      q1::CLogger logger = q1::CLogger::create(__FILE__)
		   .disableTime()
		   .disableColorization()
		   .disableType()
		   .enableExport()
		   .renameExportFile("log.log");
