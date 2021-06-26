#pragma once
#include "Printable.h"
#include "Printer.h"
class PrinterProxy : public Printable
{
public:
    PrinterProxy();
    PrinterProxy(std::string name);
    void setPrinterName(std::string name) override;
    std::string getPrinterName() override;
    void print(std::string string) override;

private:
    std::string name;
    Printer *real = nullptr;
    void realize();
};