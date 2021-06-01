#pragma once
#include <string>
#include "Product.h"
class IDCard : public Product
{
public:
	IDCard(std::string owner);
	void use();
	std::string getOwner();
private:
	std::string owner;
};