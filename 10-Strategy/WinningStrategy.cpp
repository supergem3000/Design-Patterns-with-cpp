#include "WinningStrategy.h"
WinningStrategy::WinningStrategy(int seed) : random_e(seed){};
Hand *WinningStrategy::nextHand()
{
    if (!this->won)
    {
        std::uniform_int_distribution<unsigned> u(0, 2);
        this->prevHand = Hand::getHand(u(this->random_e));
    }
    return prevHand;
}
void WinningStrategy::study(bool win)
{
    this->won = win;
}