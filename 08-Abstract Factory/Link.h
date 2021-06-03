#pragma once
#include "Item.h"
class Link : public Item
{
public:
	Link(std::string caption, std::string url);
protected:
	std::string url;
};