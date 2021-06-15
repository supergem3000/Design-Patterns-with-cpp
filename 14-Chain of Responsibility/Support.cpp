#include <iostream>
#include "Support.h"
Support::Support(std::string name) : name(name) {}
Support *Support::setNext(Support *next)
{
    this->next = next;
    return this->next;
}
void Support::support(Trouble *trouble)
{
    if (this->resolve(trouble))
    {
        this->done(trouble);
    }
    else if (this->next != nullptr)
    {
        this->next->support(trouble);
    }
    else
    {
        this->fail(trouble);
    }
}
std::string Support::toString()
{
    return '[' + this->name + ']';
}
void Support::done(Trouble *trouble)
{
    std::cout << trouble->toString() << " is resolved by " << this->toString() << '.' << std::endl;
}
void Support::fail(Trouble *trouble)
{
    std::cout << trouble->toString() << " cannot be resolved." << std::endl;
}