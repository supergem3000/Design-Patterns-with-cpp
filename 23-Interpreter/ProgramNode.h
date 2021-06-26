#pragma once
#include "Node.h"
class ProgramNode : public Node
{
public:
    void parse(Context *Context) override;
    std::string toString() override;

private:
    Node *commandListNode;
};