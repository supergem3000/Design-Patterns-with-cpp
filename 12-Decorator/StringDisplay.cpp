#include "StringDisplay.h"
StringDisplay::StringDisplay(std::string string) : string(string) {}
int StringDisplay::getColumns()
{
    return this->string.size();
}
int StringDisplay::getRows()
{
    return 1;
}
std::string StringDisplay::getRowText(int row)
{
    if (row == 0)
    {
        return this->string;
    }
    else
    {
        return nullptr;
    }
}