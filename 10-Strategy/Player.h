#pragma once
#include <string>
#include "Strategy.h"
class Player
{
public:
    Player(std::string name, Strategy *strategy);
    Hand *nextHand();
    void win();
    void lose();
    void even();
    std::string toString();

private:
    std::string name;
    Strategy *strategy;
    int wincount = 0;
    int losecount = 0;
    int gamecount = 0;
};
