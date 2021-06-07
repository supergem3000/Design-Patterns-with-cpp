#include "Hand.h"
const int Hand::HANDVALUE_GUU = 0;
const int Hand::HANDVALUE_CHO = 1;
const int Hand::HANDVALUE_PAA = 2;
Hand *const Hand::hand[3] = {
    new Hand(Hand::HANDVALUE_GUU),
    new Hand(Hand::HANDVALUE_CHO),
    new Hand(Hand::HANDVALUE_PAA)};
const std::string Hand::name[3] = {"石头", "剪刀", "布"};
Hand::Hand(int handvalue)
{
    this->handvalue = handvalue;
}
Hand *Hand::getHand(int handvalue)
{
    return hand[handvalue];
}
bool Hand::isStrongerThan(Hand *h)
{
    return this->fight(h) == 1;
}
bool Hand::isWeakerThan(Hand *h)
{
    return this->fight(h) == -1;
}
int Hand::fight(Hand *h)
{
    if (this == h)
    {
        return 0;
    }
    else if ((this->handvalue + 1) % 3 == h->handvalue)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
std::string Hand::toString()
{
    return name[this->handvalue];
}
