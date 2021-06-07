#pragma once
#include "Link.h"
class TableLink : public Link
{
public:
    TableLink(std::string caption, std::string url);
    std::string makeHTML();
};
