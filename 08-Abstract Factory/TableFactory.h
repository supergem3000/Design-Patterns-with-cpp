#pragma once
#include "Factory.h"
class TableFactory : public Factory
{
public:
    Link *createLink(std::string caption, std::string url);
    Tray *createTray(std::string caption);
    Page *createPage(std::string title, std::string author);
};
