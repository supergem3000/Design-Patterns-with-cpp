#pragma once
#include "Node.h"
class CommandNode : public Node
{
public:
    void parse(Context *context) override;
    std::string toString() override;

private:
    Node *node;
};