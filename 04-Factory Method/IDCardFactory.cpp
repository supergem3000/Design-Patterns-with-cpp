#include "IDCardFactory.h"
Product* IDCardFactory::createProduct(std::string owner)
{
	return new IDCard(owner);
}
void IDCardFactory::registerProduct(Product* product)
{
	this->owners->push_back(((IDCard*)product)->getOwner());
}
std::vector<std::string>* IDCardFactory::getOwners()
{
	return this->owners;
}