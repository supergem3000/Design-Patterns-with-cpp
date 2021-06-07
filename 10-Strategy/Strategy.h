#pragma once
#include "Hand.h"
class Strategy
{
public:
    virtual Hand *nextHand() = 0;
    virtual void study(bool win) = 0;
};
