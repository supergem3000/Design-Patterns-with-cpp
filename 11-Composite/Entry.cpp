#include <exception>
#include <sstream>
#include "Entry.h"

class FileTreatmentException : public std::exception
{
public:
    FileTreatmentException() : exception("ERROR") {}
};

Entry *Entry::add(Entry *entry)
{
    throw FileTreatmentException();
}

void Entry::printList()
{
    this->printList("");
}

std::string Entry::toString()
{
    std::stringstream ss;
    ss << this->getName() << '(' << this->getSize() << ')';
    return ss.str();
}