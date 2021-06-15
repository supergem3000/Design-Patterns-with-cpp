#pragma once
#include <string>
#include <vector>
#include "Element.h"
class Entry : public Element
{
public:
    virtual std::string getName() = 0;
    virtual int getSize() = 0;
    Entry *add(Entry *entry);
    std::vector<Entry *>::iterator iterator();
    std::string toString();
};
