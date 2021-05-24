#include "Banner.h"
#include <iostream>
Banner::Banner(std::string string)
{
	this->string = string;
}
void Banner::showWithParen()
{
	std::cout << '(' << this->string << ')' << std::endl;
}
void Banner::showWithAster()
{
	std::cout << '*' << this->string << '*' << std::endl;
}