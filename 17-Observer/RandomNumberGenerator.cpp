#include "RandomNumberGenerator.h"
int RandomNumberGenerator::getNumber()
{
    return this->number;
}
void RandomNumberGenerator::execute()
{
    std::uniform_int_distribution<unsigned> u(0, 49);
    for (int i = 0; i < 20; i++)
    {
        this->number = u(this->random_e);
        this->notifyObservers();
    }
}