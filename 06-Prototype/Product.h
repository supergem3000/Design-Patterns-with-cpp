#pragma once
#include <string>
class Product
{
public:
	virtual void use(std::string s) = 0;
	virtual Product* createClone() = 0;
};