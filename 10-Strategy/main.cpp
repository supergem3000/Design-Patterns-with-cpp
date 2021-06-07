#include "Hand.h"
#include "Player.h"
#include "ProbStrategy.h"
#include "WinningStrategy.h"
#include <iostream>
int main()
{
    int seed1 = 1, seed2 = 2;
    Player *player1 = new Player("Taro", new WinningStrategy(seed1));
    Player *player2 = new Player("Hana", new ProbStrategy(seed2));
    for (int i = 0; i < 10000; i++)
    {
        Hand *nextHand1 = player1->nextHand();
        Hand *nextHand2 = player2->nextHand();
        if (nextHand1->isStrongerThan(nextHand2))
        {
            std::cout << "Winner:" << player1->toString() << std::endl;
            player1->win();
            player2->lose();
        }
        else if (nextHand2->isStrongerThan(nextHand1))
        {
            std::cout << "Winner:" << player2->toString() << std::endl;
            player1->lose();
            player2->win();
        }
        else
        {
            std::cout << "Even..." << std::endl;
            player1->even();
            player2->even();
        }
    }
    std::cout << "Total result:" << std::endl;
    std::cout << player1->toString() << std::endl;
    std::cout << player2->toString() << std::endl;
    return 0;
}