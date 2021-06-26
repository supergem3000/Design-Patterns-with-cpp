#include <iostream>
#include "Printable.h"
#include "PrinterProxy.h"

int main()
{
    Printable *p = new PrinterProxy("Alice");
    std::cout << "现在的名字是" << p->getPrinterName() << "。" << std::endl;
    p->setPrinterName("Bob");
    std::cout << "现在的名字是" << p->getPrinterName() << "。" << std::endl;
    p->print("Hello, world.");
    return 0;
}