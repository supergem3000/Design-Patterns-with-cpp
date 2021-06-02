#include <iostream>
#include "UnderlinePen.h"
UnderlinePen::UnderlinePen(char ulchar)
{
	this->ulchar = ulchar;
}
void UnderlinePen::use(std::string s)
{
	int length = s.size();
	std::cout << "\"" << s << "\"" << std::endl;
	std::cout << ' ';
	for (int i = 0; i < length; i++)
	{
		std::cout << this->ulchar;
	}
	std::cout << ' ' << std::endl;
}
Product* UnderlinePen::createClone()
{
	return new UnderlinePen(*this);
}