#pragma once
#include <string>
#include "Product.h"
class Factory
{
public:
	virtual Product* create(std::string owner) final;
protected:
	virtual Product* createProduct(std::string owner) = 0;
	virtual void registerProduct(Product* product) = 0;
};