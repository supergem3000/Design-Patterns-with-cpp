#pragma once
#include "Directory.h"
#include "File.h"
class Visitor
{
public:
    virtual void visit(File *file) = 0;
    virtual void visit(Directory *directory) = 0;
};
