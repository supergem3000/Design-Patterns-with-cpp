#pragma once
#include "Border.h"
class SideBorder : public Border
{
public:
    SideBorder(Display *display, char ch);
    int getColumns();
    int getRows();
    std::string getRowText(int row);

private:
    char borderChar;
};
