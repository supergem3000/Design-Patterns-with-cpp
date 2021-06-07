#pragma once
#include <string>
#include "DisplayImpl.h"
class StringDisplayImpl : public DisplayImpl
{
public:
    StringDisplayImpl(std::string string);
    void rawOpen();
    void rawPrint();
    void rawClose();

private:
    std::string string;
    int width;
    void printLine();
};
