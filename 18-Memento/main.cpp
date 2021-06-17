#include <chrono>
#include <iostream>
#include <thread>
#include "Gamer.h"
#include "Memento.h"

int main()
{
    Gamer gamer(100);
    Memento *memento = gamer.createMemento();
    for (int i = 0; i < 100; i++)
    {
        std::cout << "==== " << i << std::endl;
        std::cout << " 当前状态：" << gamer.toString() << std::endl;
        gamer.bet();
        std::cout << " 所持金钱为 " << gamer.getMoney() << " 元。" << std::endl;
        if (gamer.getMoney() > memento->getMoney())
        {
            std::cout << "   （所持金钱增加了许多，因此保存游戏当前的状态）" << std::endl;
            memento = gamer.createMemento();
        }
        else if (gamer.getMoney() < memento->getMoney() / 2)
        {
            std::cout << "   （所持金钱减少了许多，因此将游戏恢复至以前的状态）" << std::endl;
            gamer.restoreMemento(memento);
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << std::endl;
    }
}