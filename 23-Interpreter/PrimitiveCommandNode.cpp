#include "PrimitiveCommandNode.h"
#include "ParseException.hpp"
void PrimitiveCommandNode::parse(Context *context)
{
    this->name = context->currentToken();
    context->skipToken(name);
    if (this->name.compare("go") != 0 && this->name.compare("right") != 0 && this->name.compare("left") != 0)
    {
        throw ParseException(this->name + " is undefined");
    }
}
std::string PrimitiveCommandNode::toString()
{
    return this->name;
}