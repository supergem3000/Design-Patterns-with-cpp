#include "ProbStrategy.h"
ProbStrategy::ProbStrategy(int seed) : random_e(seed) {}
Hand *ProbStrategy::nextHand()
{
    std::uniform_int_distribution<unsigned> u(0, this->getSum(currentHandValue) - 1);
    int bet = u(this->random_e);
    int handvalue = 0;
    if (bet < this->history[this->currentHandValue][0])
    {
        handvalue = 0;
    }
    else if (bet < this->history[this->currentHandValue][0] + this->history[this->currentHandValue][1])
    {
        handvalue = 1;
    }
    else
    {
        handvalue = 2;
    }
    this->prevHandValue = this->currentHandValue;
    this->currentHandValue = handvalue;
    return Hand::getHand(handvalue);
}
int ProbStrategy::getSum(int hv)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += this->history[hv][i];
    }
    return sum;
}
void ProbStrategy::study(bool win)
{
    if (win)
    {
        this->history[this->prevHandValue][this->currentHandValue]++;
    }
    else
    {
        this->history[this->prevHandValue][(this->currentHandValue + 1) % 3]++;
        this->history[this->prevHandValue][(this->currentHandValue + 2) % 3]++;
    }
}