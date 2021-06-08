#pragma once
#include "Display.h"
class Border : public Display
{
protected:
    Display *display;
    Border(Display *display);
};
