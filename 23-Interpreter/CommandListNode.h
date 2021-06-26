#pragma once
#include <vector>
#include "Node.h"
class CommandListNode : public Node
{
public:
    void parse(Context *context) override;
    std::string toString() override;

private:
    std::vector<Node *> list;
};