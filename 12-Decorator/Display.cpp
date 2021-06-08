#include <iostream>
#include "Display.h"
void Display::show()
{
    for (int i = 0; i < this->getRows(); i++)
    {
        std::cout << this->getRowText(i) << std::endl;
    }
}