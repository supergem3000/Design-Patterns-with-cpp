#pragma once
#include <string>
#include "Product.h"
class MessageBox : public Product
{
public:
	MessageBox(char decochar);
	void use(std::string s);
	Product* createClone();
private:
	char decochar;
};