#pragma once
#include <random>
#include "Strategy.h"
class ProbStrategy : public Strategy
{
public:
    ProbStrategy(int seed);
    Hand *nextHand();
    void study(bool win);

private:
    std::default_random_engine random_e;
    int prevHandValue = 0;
    int currentHandValue = 0;
    int history[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int getSum(int hv);
};
