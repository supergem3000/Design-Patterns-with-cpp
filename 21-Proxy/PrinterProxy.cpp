#include "PrinterProxy.h"
PrinterProxy::PrinterProxy() {}
PrinterProxy::PrinterProxy(std::string name) : name(name) {}
void PrinterProxy::setPrinterName(std::string name)
{
    if (this->real != nullptr)
    {
        this->real->setPrinterName(name);
    }
    this->name = name;
}
std::string PrinterProxy::getPrinterName()
{
    return this->name;
}
void PrinterProxy::print(std::string string)
{
    this->realize();
    this->real->print(string);
}
void PrinterProxy::realize()
{
    if (this->real == nullptr)
    {
        this->real = new Printer(this->name);
    }
}