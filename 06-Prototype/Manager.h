#pragma once
#include <map>
#include "Product.h"
class Manager
{
public:
	void _register(std::string, Product* proto);
	Product* create(std::string protoname);
private:
	std::map<std::string, Product*> showcase;
};