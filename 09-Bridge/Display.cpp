#include "Display.h"
Display::Display(DisplayImpl *impl)
{
    this->impl = impl;
}
void Display::open()
{
    this->impl->rawOpen();
}
void Display::print()
{
    this->impl->rawPrint();
}
void Display::close()
{
    this->impl->rawClose();
}
void Display::display()
{
    this->open();
    this->print();
    this->close();
}