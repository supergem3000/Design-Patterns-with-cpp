#include "BigCharFactory.h"
#include "BigString.h"
BigString::BigString(std::string string) : bigchars(string.size())
{
    BigCharFactory *factory = BigCharFactory::getInstance();
    for (int i = 0; i < this->bigchars.size(); i++)
    {
        this->bigchars.at(i) = factory->getBigChar(string.at(i));
    }
}
void BigString::print()
{
    for (int i = 0; i < this->bigchars.size(); i++)
    {
        this->bigchars.at(i)->print();
    }
}