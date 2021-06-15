#include <chrono>
#include <iostream>
#include <thread>
#include "DigitObserver.h"
void DigitObserver::update(NumberGenerator *generator)
{
    std::cout << "DigitObserver:" << generator->getNumber() << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
}