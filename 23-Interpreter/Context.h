#pragma once
#include <string>
#include <vector>
class Context
{
public:
    Context(const std::string &text, const char &delim = ' ');
    const std::string &nextToken();
    const std::string &currentToken();
    void skipToken(std::string token);
    int currentNumber();

private:
    std::string &currToken;
    std::vector<std::string> tokens;
    std::vector<std::string>::iterator iter;
    std::string empty;
};