#pragma once
#include "Display.h"
class StringDisplay : public Display
{
public:
    StringDisplay(std::string string);
    int getColumns();
    int getRows();
    std::string getRowText(int row);

private:
    std::string string;
};
