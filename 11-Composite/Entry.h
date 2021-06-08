#pragma once
#include <string>
class Entry
{
public:
    virtual std::string getName() = 0;
    virtual int getSize() = 0;
    Entry *add(Entry *entry);
    virtual void printList();
    std::string toString();
    virtual void printList(std::string prefix) = 0;
};
