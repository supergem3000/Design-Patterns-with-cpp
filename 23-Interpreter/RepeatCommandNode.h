#pragma once
#include "Node.h"
class RepeatCommandNode : public Node
{
public:
    void parse(Context *context);
    std::string toString();

private:
    int number;
    Node *commandListNode;
};