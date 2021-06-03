#pragma once
#include <string>
class Item
{
public:
	Item(std::string caption);
	virtual std::string makeHTML() = 0;
protected:
	std::string caption;
};