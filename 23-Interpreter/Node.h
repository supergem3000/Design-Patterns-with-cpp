#pragma once
#include "Context.h"
class Node
{
public:
    virtual void parse(Context *context) = 0;
    virtual std::string toString() = 0;
};