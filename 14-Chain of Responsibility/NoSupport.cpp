#include "NoSupport.h"
#include <iostream>
NoSupport::NoSupport(std::string name) : Support(name) {}
bool NoSupport::resolve(Trouble *trouble)
{
    return false;
}