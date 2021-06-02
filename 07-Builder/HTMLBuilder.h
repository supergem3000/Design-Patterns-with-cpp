#pragma once
#include <fstream>
#include "Builder.h"
class HTMLBuilder : public Builder
{
public:
	void makeTitle(std::string title);
	void makeString(std::string str);
	void makeItems(std::vector<std::string>* items);
	void close();
	std::string getResult();
private:
	std::string filename;
	std::ofstream out;
};