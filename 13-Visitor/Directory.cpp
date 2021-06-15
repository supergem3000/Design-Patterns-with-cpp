#include "Directory.h"
#include "Visitor.h"
Directory::Directory(std::string name) : name(name) {}
std::string Directory::getName()
{
    return this->name;
}
int Directory::getSize()
{
    int size = 0;
    for (std::vector<Entry *>::iterator it = this->dir.begin(); it != this->dir.end(); it++)
    {
        size += (*it)->getSize();
    }
    return size;
}
Entry *Directory::add(Entry *entry)
{
    this->dir.push_back(entry);
    return this;
}
std::vector<Entry *>::iterator Directory::iterator()
{
    return this->dir.begin();
}
void Directory::accept(Visitor *v)
{
    v->visit(this);
}