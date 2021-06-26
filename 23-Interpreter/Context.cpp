#include <sstream>
#include "Context.h"
#include "ParseException.hpp"
Context::Context(const std::string &text, const char &delim)
    : empty(""), currToken(empty)
{
    size_t lastPos = text.find_first_not_of(delim, 0);
    size_t pos = text.find(delim, lastPos);
    while (lastPos != std::string::npos)
    {
        this->tokens.push_back(text.substr(lastPos, pos - lastPos));
        lastPos = text.find_first_not_of(delim, pos);
        pos = text.find(delim, lastPos);
    }
    this->iter = this->tokens.begin();
    this->nextToken();
}
const std::string &Context::nextToken()
{
    if (this->iter != this->tokens.end())
    {
        this->currToken = *this->iter;
        this->iter++;
    }
    else
    {
        this->currToken = this->empty;
    }
    return this->currToken;
}
const std::string &Context::currentToken()
{
    return this->currToken;
}
void Context::skipToken(std::string token)
{
    if (token.compare(this->currToken) != 0)
    {
        throw new ParseException("Warning: " + token + "is expected, but " + this->currToken + " is found.");
    }
    this->nextToken();
}
int Context::currentNumber()
{
    int number = 0;
    try
    {
        number = std::stoi(this->currToken);
    }
    catch (const std::exception &e)
    {
        throw ParseException(std::string("Warning: ") + e.what());
    }
    return number;
}