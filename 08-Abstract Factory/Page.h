#pragma once
#include <vector>
#include "Item.h"
class Page
{
public:
	Page(std::string title, std::string author);
	void add(Item* item);
	void output();
	virtual std::string makeHTML() = 0;
protected:
	std::string title;
	std::string author;
	std::vector<Item*> content;
};