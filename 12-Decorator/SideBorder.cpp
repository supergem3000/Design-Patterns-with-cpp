#include "SideBorder.h"
SideBorder::SideBorder(Display *display, char ch) : Border(display), borderChar(ch) {}
int SideBorder::getColumns()
{
    return this->display->getColumns() + 2;
}
int SideBorder::getRows()
{
    return this->display->getRows();
}
std::string SideBorder::getRowText(int row)
{
    return this->borderChar + this->display->getRowText(row) + this->borderChar;
}