#include <chrono>
#include <iostream>
#include <thread>
#include "GraphObserver.h"
void GraphObserver::update(NumberGenerator *generator)
{
    std::cout << "GraphObserver:";
    int count = generator->getNumber();
    for (int i = 0; i < count; i++)
    {
        std::cout << '*';
    }
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
}