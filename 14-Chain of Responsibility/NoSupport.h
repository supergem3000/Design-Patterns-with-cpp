#pragma once
#include "Support.h"
class NoSupport : public Support
{
public:
    NoSupport(std::string name);

protected:
    bool resolve(Trouble *trouble) override;
};
