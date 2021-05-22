#pragma once
#include <string>
class Book
{
public:
    Book(std::string name);
    std::string getName();
private:
    std::string name;
};

