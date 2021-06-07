#pragma once
#include "DisplayImpl.h"
class Display
{
public:
    Display(DisplayImpl *impl);
    void open();
    void print();
    void close();
    virtual void display() final;

private:
    DisplayImpl *impl;
};
