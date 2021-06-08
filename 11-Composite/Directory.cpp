#include <iostream>
#include "Directory.h"
Directory::Directory(std::string name)
{
    this->name = name;
}
std::string Directory::getName()
{
    return this->name;
}
int Directory::getSize()
{
    int size = 0;
    for (std::vector<Entry *>::iterator it = this->directory.begin(); it != this->directory.end(); it++)
    {
        size += (*it)->getSize();
    }
    return size;
}
Entry *Directory::add(Entry *entry)
{
    this->directory.push_back(entry);
    return this;
}
void Directory::printList(std::string prefix)
{
    std::cout<<prefix << '/' << this->toString() <<std::endl;
    for (std::vector<Entry *>::iterator it = this->directory.begin(); it != this->directory.end(); it++)
    {
        (*it)->printList(prefix + '/' + this->name);
    }
}