#pragma once
#include <string>
#include "Entry.h"
class Directory : public Entry
{
public:
    Directory(std::string name);
    std::string getName();
    int getSize();
    Entry *add(Entry *entry);
    std::vector<Entry *>::iterator iterator();
    void accept(Visitor *v);
    std::vector<Entry *> dir;

private:
    std::string name;
};
