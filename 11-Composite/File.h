#pragma once
#include "Entry.h"
class File : public Entry
{
public:
    File(std::string name, int size);
    std::string getName();
    int getSize();

protected:
    void printList(std::string prefix);

private:
    std::string name;
    int size;
};
