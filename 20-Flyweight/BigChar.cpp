#include "big.h"
#include "BigChar.h"
#include <iostream>
BigChar::BigChar(char charname) : charname(charname)
{
    switch (charname)
    {
    case '0':
        this->fontdata = big0;
        break;
    case '1':
        this->fontdata = big1;
        break;
    case '2':
        this->fontdata = big2;
        break;
    case '3':
        this->fontdata = big3;
        break;
    case '4':
        this->fontdata = big4;
        break;
    default:
        this->fontdata = charname + "?";
        break;
    }
}
void BigChar::print()
{
    std::cout << this->fontdata;
}