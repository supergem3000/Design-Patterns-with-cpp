#pragma once
#include <string>
class Hand
{
public:
    const static int HANDVALUE_GUU; // 石头
    const static int HANDVALUE_CHO; // 剪刀
    const static int HANDVALUE_PAA; // 布
    static Hand *const hand[3];
    static Hand *getHand(int handvalue);
    bool isStrongerThan(Hand *h);
    bool isWeakerThan(Hand *h);
    std::string toString();

private:
    const static std::string name[3];
    int handvalue;
    Hand(int handvalue);
    int fight(Hand *h);
};
