#pragma once
#include <string>
#include <vector>
class Gamer;
class Memento
{
public:
    int getMoney();

protected:
    int money;
    std::vector<std::string> fruits;
    Memento(int money);
    void addFruit(std::string fruit);
    friend class Gamer;
    // 声明友元，Gamer可以访问Memento中的protected成员。
};