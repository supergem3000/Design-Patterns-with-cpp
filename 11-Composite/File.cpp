#include <iostream>
#include "File.h"
File::File(std::string name, int size)
{
    this->name = name;
    this->size = size;
}
std::string File::getName()
{
    return this->name;
}
int File::getSize()
{
    return this->size;
}
void File::printList(std::string prefix)
{
    std::cout << prefix << '/' << this->toString() << std::endl;
}