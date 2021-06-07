#include <iostream>
#include "StringDisplayImpl.h"
StringDisplayImpl::StringDisplayImpl(std::string string)
{
    this->string = string;
    this->width = string.size();
}
void StringDisplayImpl::rawOpen()
{
    this->printLine();
}
void StringDisplayImpl::rawPrint()
{
    std::cout << '|' << this->string << '|' << std::endl;
}
void StringDisplayImpl::rawClose()
{
    this->printLine();
}
void StringDisplayImpl::printLine()
{
    std::cout << '+';
    for (int i = 0; i < this->width; i++)
    {
        std::cout << '-';
    }
    std::cout << '+' << std::endl;
}