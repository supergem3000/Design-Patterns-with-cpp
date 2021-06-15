#pragma once
#include "Visitor.h"
class ListVisitor : public Visitor
{
public:
    void visit(File *file);
    void visit(Directory *directory);

private:
    std::string currentdir;
};
