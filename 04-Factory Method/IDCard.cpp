#include <iostream>
#include "IDCard.h"
IDCard::IDCard(std::string owner)
{
	std::cout << "制作" << owner << "的ID卡。" << std::endl;
	this->owner = owner;
}
void IDCard::use()
{
	std::cout << "使用" << owner << "的ID卡。" << std::endl;
}
std::string IDCard::getOwner()
{
	return this->owner;
}