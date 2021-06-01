#include <iostream>
#include "CharDisplay.h"
CharDisplay::CharDisplay(char ch)
{
	this->ch = ch;
}
void CharDisplay::open()
{
	std::cout << "<<" << std::endl;
}
void CharDisplay::print()
{
	std::cout << this->ch << std::endl;
}
void CharDisplay::close()
{
	std::cout << ">>" << std::endl;
}