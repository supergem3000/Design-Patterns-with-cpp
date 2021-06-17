#pragma once
#include <map>
#include "BigChar.h"
class BigCharFactory
{
public:
    static BigCharFactory *getInstance();
    BigChar *getBigChar(char charname);

private:
    std::map<char, BigChar *> pool;
    static BigCharFactory *singleton;
    BigCharFactory();
};