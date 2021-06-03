#pragma once
#include "Link.h"
class ListLink : public Link
{
public:
	ListLink(std::string caption, std::string url);
	std::string makeHTML();
};