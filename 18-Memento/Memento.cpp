#include "Memento.h"
Memento::Memento(int money) : money(money) {}
int Memento::getMoney()
{
    return this->money;
}
void Memento::addFruit(std::string fruit)
{
    this->fruits.push_back(fruit);
}
