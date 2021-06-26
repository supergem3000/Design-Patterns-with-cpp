#include "CommandListNode.h"
#include "CommandNode.h"
#include "ParseException.hpp"
#include <sstream>
void CommandListNode::parse(Context *context)
{
    while (true)
    {
        if (context->currentToken().empty())
        {
            throw ParseException("Missing 'end'");
        }
        else if (context->currentToken().compare("end") == 0)
        {
            context->skipToken("end");
            break;
        }
        else
        {
            Node *commandNode = new CommandNode();
            commandNode->parse(context);
            this->list.push_back(commandNode);
        }
    }
}
std::string CommandListNode::toString()
{
    std::stringstream ss;
    ss << '[';
    for (auto it = this->list.begin(); it != this->list.end(); it++)
    {
        ss << (*it)->toString();
        if (it + 1 != this->list.end())
        {
            ss << ", ";
        }
    }
    ss << ']';
    return ss.str();
}