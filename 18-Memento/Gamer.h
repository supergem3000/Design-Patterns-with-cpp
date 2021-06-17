#pragma once
#include <random>
#include <string>
#include <vector>
#include "Memento.h"
class Gamer
{
public:
    Gamer(int money);
    int getMoney();
    void bet();
    Memento *createMemento();
    void restoreMemento(Memento *memento);
    std::string toString();

private:
    int money;
    std::vector<std::string> fruits;
    std::default_random_engine random_e;
    static std::vector<std::string> fruitsname;
    std::string getFruit();
};