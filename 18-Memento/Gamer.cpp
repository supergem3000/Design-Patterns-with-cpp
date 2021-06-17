#include <iostream>
#include <sstream>
#include "Gamer.h"
Gamer::Gamer(int money) : money(money) {}
std::vector<std::string> Gamer::fruitsname = {"苹果", "葡萄", "香蕉", "橘子"};
int Gamer::getMoney()
{
    return this->money;
}
void Gamer::bet()
{
    std::uniform_int_distribution<unsigned> u(1, 6);
    int dice = u(this->random_e);
    if (dice == 1)
    {
        this->money += 100;
        std::cout << " 所持金钱增加了。" << std::endl;
    }
    else if (dice == 2)
    {
        this->money /= 2;
        std::cout << " 所持金钱减半了。" << std::endl;
    }
    else if (dice == 6)
    {
        std::string f = this->getFruit();
        std::cout << " 获得了水果(" << f << ")。" << std::endl;
        this->fruits.push_back(f);
    }
    else
    {
        std::cout << " 什么都没有发生。" << std::endl;
    }
}
Memento *Gamer::createMemento()
{
    Memento *m = new Memento(this->money);
    for (std::vector<std::string>::iterator it = this->fruits.begin(); it != this->fruits.end(); it++)
    {
        std::string f = *it;
        std::string good = "好吃的";
        if (f.compare(0, good.size(), good) == 0)
        {
            m->addFruit(f);
        }
    }
    return m;
}
void Gamer::restoreMemento(Memento *memento)
{
    this->money = memento->money;
    this->fruits = memento->fruits;
}
std::string Gamer::toString()
{
    std::stringstream ss;
    ss << "[money = " << this->money << ", fruits = " << '[';
    for (auto it = this->fruits.begin(); it != this->fruits.end(); it++)
    {
        ss << (*it);
        if (it + 1 != this->fruits.end())
        {
            ss << ", ";
        }
    }
    ss << "]]";
    return ss.str();
}
std::string Gamer::getFruit()
{
    std::string prefix = "";
    std::bernoulli_distribution u1;
    if (u1(this->random_e))
    {
        prefix = "好吃的";
    }
    std::uniform_int_distribution<unsigned> u2(0, Gamer::fruitsname.size() - 1);
    return prefix + Gamer::fruitsname.at(u2(this->random_e));
}