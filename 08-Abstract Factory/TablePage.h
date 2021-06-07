#pragma once
#include "Page.h"
class TablePage : public Page
{
public:
    TablePage(std::string title, std::string author);
    std::string makeHTML();
};
