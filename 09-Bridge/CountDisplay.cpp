#include "CountDisplay.h"
CountDisplay::CountDisplay(DisplayImpl *impl) : Display(impl) {}
void CountDisplay::multiDisplay(int times)
{
    this->open();
    for (int i = 0; i < times; i++)
    {
        this->print();
    }
    this->close();
}