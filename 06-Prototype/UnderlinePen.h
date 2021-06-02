#pragma once
#include <string>
#include "Product.h"
class UnderlinePen : public Product
{
public:
	UnderlinePen(char ulchar);
	void use(std::string s);
	Product* createClone();
private:
	char ulchar;
};

