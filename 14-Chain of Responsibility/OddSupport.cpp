#include "OddSupport.h"
OddSupport::OddSupport(std::string name) : Support(name) {}
bool OddSupport::resolve(Trouble *trouble)
{
    return trouble->getNumber() % 2 == 1;
}