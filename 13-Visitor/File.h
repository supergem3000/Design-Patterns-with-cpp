#pragma once
#include "Entry.h"
class File : public Entry
{
public:
    File(std::string name, int size);
    std::string getName();
    int getSize();
    void accept(Visitor *v);

private:
    std::string name;
    int size;
};
