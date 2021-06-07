#pragma once
#include "Display.h"
class CountDisplay : public Display
{
public:
    CountDisplay(DisplayImpl *impl);
    void multiDisplay(int times);
};
