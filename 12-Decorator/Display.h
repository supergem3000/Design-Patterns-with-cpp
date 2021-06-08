#pragma once
#include <string>
class Display
{
public:
    virtual int getColumns() = 0;
    virtual int getRows() = 0;
    virtual std::string getRowText(int row) = 0;
    virtual void show() final;
};
