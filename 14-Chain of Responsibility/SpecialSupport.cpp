#include "SpecialSupport.h"
SpecialSupport::SpecialSupport(std::string name, int number)
    : Support(name), number(number) {}
bool SpecialSupport::resolve(Trouble *trouble)
{
    return trouble->getNumber() == this->number;
}