#pragma once
#include <random>
#include "Strategy.h"
class WinningStrategy : public Strategy
{
public:
    WinningStrategy(int seed);
    Hand *nextHand();
    void study(bool win);

private:
    std::default_random_engine random_e;
    bool won = false;
    Hand *prevHand;
};
