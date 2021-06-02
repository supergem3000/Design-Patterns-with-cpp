#include "TextBuilder.h"
void TextBuilder::makeTitle(std::string title)
{
	this->ss << "==============================" << std::endl;
	this->ss << '[' << title << ']' << std::endl;
	this->ss << std::endl;
}
void TextBuilder::makeString(std::string str)
{
	this->ss << "■" << str << std::endl;
	this->ss << std::endl;
}
void TextBuilder::makeItems(std::vector<std::string>* items)
{
	for (int i = 0; i < items->size(); i++)
	{
		this->ss << " ·" << items->at(i) << std::endl;
	}
	this->ss << std::endl;
}
void TextBuilder::close()
{
	this->ss << "==============================" << std::endl;
}
std::string TextBuilder::getResult()
{
	return this->ss.str();
}