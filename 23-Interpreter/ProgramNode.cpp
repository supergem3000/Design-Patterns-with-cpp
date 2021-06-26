#include "ProgramNode.h"
#include "CommandListNode.h"
void ProgramNode::parse(Context *context)
{
    context->skipToken("program");
    this->commandListNode = new CommandListNode();
    this->commandListNode->parse(context);
}
std::string ProgramNode::toString()
{
    return "[program " + this->commandListNode->toString() + ']';
}