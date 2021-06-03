#pragma once
#include "Page.h"
class ListPage : public Page
{
public:
	ListPage(std::string title, std::string author);
	std::string makeHTML();
};