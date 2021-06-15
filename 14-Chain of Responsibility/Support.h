#pragma once
#include <string>
#include "Trouble.h"
class Support
{
public:
    Support(std::string name);
    Support *setNext(Support *next);
    virtual void support(Trouble *trouble) final;
    std::string toString();

protected:
    virtual bool resolve(Trouble *trouble) = 0;
    void done(Trouble *trouble);
    void fail(Trouble *trouble);

private:
    std::string name;
    Support *next;
};
