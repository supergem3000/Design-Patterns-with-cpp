#pragma once
#include "AbstractDisplay.h"
class CharDisplay : public AbstractDisplay
{
public:
	CharDisplay(char ch);
	void open();
	void print();
	void close();
private:
	char ch;
};