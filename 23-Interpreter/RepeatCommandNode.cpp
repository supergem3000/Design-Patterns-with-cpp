#include "RepeatCommandNode.h"
#include "CommandListNode.h"
void RepeatCommandNode::parse(Context *context)
{
    context->skipToken("repeat");
    this->number = context->currentNumber();
    context->nextToken();
    this->commandListNode = new CommandListNode();
    this->commandListNode->parse(context);
}
std::string RepeatCommandNode::toString()
{
    return "[repeat " + std::to_string(this->number) + ' ' + this->commandListNode->toString() + ']';
}