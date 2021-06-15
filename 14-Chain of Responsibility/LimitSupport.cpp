#include "LimitSupport.h"
LimitSupport::LimitSupport(std::string name, int limit) : Support(name), limit(limit) {}
bool LimitSupport::resolve(Trouble *trouble)
{
    return trouble->getNumber() < limit;
}