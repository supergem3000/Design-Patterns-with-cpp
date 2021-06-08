#pragma once
#include "Border.h"
class FullBorder : public Border
{
public:
    FullBorder(Display *display);
    int getColumns();
    int getRows();
    std::string getRowText(int row);

private:
    std::string makeLine(char ch, int count);
};
