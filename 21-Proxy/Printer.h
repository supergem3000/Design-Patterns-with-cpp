#pragma once
#include "Printable.h"
class Printer : public Printable
{
public:
    Printer();
    Printer(std::string name);
    void setPrinterName(std::string name) override;
    std::string getPrinterName() override;
    void print(std::string string) override;

private:
    std::string name;
    void heavyJob(std::string msg);
};