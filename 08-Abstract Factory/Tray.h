#pragma once
#include <vector>
#include "Item.h"
class Tray : public Item
{
public:
	Tray(std::string caption);
	void add(Item* item);
protected:
	std::vector<Item*> tray;
};