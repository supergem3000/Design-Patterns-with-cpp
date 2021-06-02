#include <iostream>
#include "MessageBox.h"
MessageBox::MessageBox(char decochar)
{
	this->decochar = decochar;
}
void MessageBox::use(std::string s)
{
	int length = s.size();
	for (int i = 0; i < length + 4; i++)
	{
		std::cout << decochar;
	}
	std::cout << std::endl;
	std::cout << this->decochar << ' ' << s << ' ' << this->decochar << std::endl;
	for (int i = 0; i < length + 4; i++)
	{
		std::cout << decochar;
	}
	std::cout << std::endl;
}
Product* MessageBox::createClone()
{
	return new MessageBox(*this);
}