#include "Book.h"
Book::Book(std::string name)
{
    this->name = name;
}
std::string Book::getName()
{
    return this->name;
}
