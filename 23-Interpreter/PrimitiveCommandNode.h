#pragma once
#include "Node.h"
class PrimitiveCommandNode : public Node
{
public:
    void parse(Context *context) override;
    std::string toString() override;

private:
    std::string name;
};