#include <iostream>
#include "StringDisplay.h"

StringDisplay::StringDisplay(std::string string)
{
	this->string = string;
	this->width = string.size();
}
void StringDisplay::open()
{
	this->printLine();
}
void StringDisplay::print()
{
	std::cout << '|' << this->string << '|' << std::endl;
}
void StringDisplay::close()
{
	this->printLine();
}
void StringDisplay::printLine()
{
	std::cout << '+';
	for (int i = 0; i < this->width; i++)
	{
		std::cout << '-';
	}
	std::cout << '+' << std::endl;
}