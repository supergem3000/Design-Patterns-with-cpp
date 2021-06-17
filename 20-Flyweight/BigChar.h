#pragma once
#include <string>
class BigChar
{
public:
    BigChar(char charname);
    void print();

private:
    char charname;
    std::string fontdata;
};