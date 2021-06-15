#include <exception>
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
std::vector<Entry *>::iterator Entry::iterator()
{
    throw FileTreatmentException();
}
std::string Entry::toString()
{
    return this->getName() + " (" + std::to_string(this->getSize()) + ')';
}