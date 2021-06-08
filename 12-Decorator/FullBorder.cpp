#include <sstream>
#include "FullBorder.h"
FullBorder::FullBorder(Display *display) : Border(display){};
int FullBorder::getColumns()
{
    return this->display->getColumns() + 2;
}
int FullBorder::getRows()
{
    return this->display->getRows() + 2;
}
std::string FullBorder::getRowText(int row)
{
    if (row == 0 || row == this->display->getRows() + 1)
    {
        return '+' + this->makeLine('-', this->display->getColumns()) + '+';
    }
    else
    {
        return '|' + this->display->getRowText(row - 1) + '|';
    }
}
std::string FullBorder::makeLine(char ch, int count)
{
    std::stringstream ss;
    for (int i = 0; i < count; i++)
    {
        ss << ch;
    }
    return ss.str();
}