#pragma once
#include <string>
class Printable
{
public:
    virtual void setPrinterName(std::string name) = 0;
    virtual std::string getPrinterName() = 0;
    virtual void print(std::string string) = 0;
};