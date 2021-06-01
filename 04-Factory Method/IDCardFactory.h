#pragma once
#include <vector>
#include "Factory.h"
#include "IDCard.h"
class IDCardFactory : public Factory
{
public:
	std::vector<std::string>* getOwners();
protected:
	Product* createProduct(std::string owner);
	void registerProduct(Product* product);
private:
	std::vector<std::string> *owners = new std::vector<std::string>();
};