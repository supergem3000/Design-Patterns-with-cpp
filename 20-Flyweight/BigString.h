#pragma once
#include <string>
#include <vector>
#include "BigChar.h"
class BigString
{
public:
    BigString(std::string string);
    void print();

private:
    std::vector<BigChar *> bigchars;
};