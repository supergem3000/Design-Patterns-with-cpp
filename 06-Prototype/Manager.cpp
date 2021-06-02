#include "Manager.h"
void Manager::_register(std::string name, Product* proto)
{
	this->showcase.insert(std::pair<std::string, Product*>(name, proto));
}
Product* Manager::create(std::string protoname)
{
	Product* p = this->showcase.find(protoname)->second;
	return p->createClone();
}