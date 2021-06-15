#pragma once
#include <string>
class Trouble
{
public:
    Trouble(int number);
    int getNumber();
    std::string toString();

private:
    int number;
};
