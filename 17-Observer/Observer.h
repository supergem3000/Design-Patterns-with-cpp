#pragma once
#include "NumberGenerator.h"
class Observer
{
public:
    virtual void update(NumberGenerator *generator) = 0;
};

