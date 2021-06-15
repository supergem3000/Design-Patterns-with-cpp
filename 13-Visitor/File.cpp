#include "File.h"
#include "Visitor.h"
File::File(std::string name, int size) : name(name), size(size) {}
std::string File::getName()
{
    return this->name;
}
int File::getSize()
{
    return this->size;
}
void File::accept(Visitor *v)
{
    v->visit(this);
}