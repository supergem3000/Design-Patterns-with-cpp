#pragma once
#include "Link.h"
#include "Page.h"
#include "Tray.h"
class Factory
{
public:
	virtual Link* createLink(std::string caption, std::string url) = 0;
	virtual Tray* createTray(std::string caption) = 0;
	virtual Page* createPage(std::string title, std::string author) = 0;
};