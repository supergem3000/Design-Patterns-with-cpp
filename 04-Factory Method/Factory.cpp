#include "Factory.h"
Product* Factory::create(std::string owner)
{
	Product* p = this->createProduct(owner);
	this->registerProduct(p);
	return p;
}