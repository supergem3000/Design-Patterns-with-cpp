#include <iostream>
#include "ListVisitor.h"
void ListVisitor::visit(File *file)
{
    std::cout << this->currentdir << '/' << file->toString() << std::endl;
}
void ListVisitor::visit(Directory *directory)
{
    std::cout << this->currentdir << '/' << directory->toString() << std::endl;
    std::string savedir = this->currentdir;
    this->currentdir = this->currentdir + '/' + directory->getName();
    std::vector<Entry *>::iterator it = directory->iterator();
    for (; it != directory->dir.end(); it++)
    {
        (*it)->accept(this);
    }
    this->currentdir = savedir;
}