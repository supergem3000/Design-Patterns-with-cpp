#pragma once
#include <sstream>
#include "Builder.h"
class TextBuilder : public Builder
{
public:
	void makeTitle(std::string title);
	void makeString(std::string str);
	void makeItems(std::vector<std::string>* items);
	void close();
	std::string getResult();
private:
	std::stringstream ss;
};