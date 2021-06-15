#include "Trouble.h"
Trouble::Trouble(int number) : number(number) {}
int Trouble::getNumber()
{
    return number;
}
std::string Trouble::toString()
{
    return "[Trouble" + std::to_string(number) + ']';
}