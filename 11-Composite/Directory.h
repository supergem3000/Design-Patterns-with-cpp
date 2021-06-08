#pragma once
#include <vector>
#include "Entry.h"
class Directory : public Entry
{
public:
    Directory(std::string name);
    std::string getName();
    int getSize();
    Entry *add(Entry *entry);
    // void printList();
    using Entry::printList;
    void printList(std::string prefix);

private:
    std::string name;
    std::vector<Entry *> directory;
};
