#pragma once
#include "Factory.h"
#include "Link.h"
#include "Page.h"
#include "Tray.h"
class ListFactory : public Factory
{
public:
	Link* createLink(std::string caption, std::string url);
	Tray* createTray(std::string caption);
	Page* createPage(std::string title, std::string author);
};