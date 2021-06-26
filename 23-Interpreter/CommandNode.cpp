#include "CommandNode.h"
#include "PrimitiveCommandNode.h"
#include "RepeatCommandNode.h"
void CommandNode::parse(Context *context)
{
    if (context->currentToken().compare("repeat") == 0)
    {
        this->node = new RepeatCommandNode();
        this->node->parse(context);
    }
    else
    {
        this->node = new PrimitiveCommandNode();
        this->node->parse(context);
    }
}
std::string CommandNode::toString()
{
    return this->node->toString();
}