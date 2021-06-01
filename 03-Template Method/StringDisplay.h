#pragma once
#include <string>
#include "AbstractDisplay.h"
class StringDisplay : public AbstractDisplay
{
public:
	StringDisplay(std::string string);
	void open();
	void print();
	void close();
private:
	std::string string;
	int width;
	void printLine();
};