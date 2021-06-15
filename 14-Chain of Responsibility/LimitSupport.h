#pragma once
#include "Support.h"
class LimitSupport : public Support
{
public:
    LimitSupport(std::string name, int limit);

protected:
    bool resolve(Trouble *troule) override;

private:
    int limit;
};
