#include <chrono>
#include <iostream>
#include <thread>
#include "Printer.h"
Printer::Printer()
{
    this->heavyJob("正在生成Printer的实例");
}
Printer::Printer(std::string name) : name(name)
{
    this->heavyJob("正在生成Printer的实例(" + name + ')');
}
void Printer::setPrinterName(std::string name)
{
    this->name = name;
}
std::string Printer::getPrinterName()
{
    return this->name;
}
void Printer::print(std::string string)
{
    std::cout << "=== " << this->name << " ===" << std::endl;
    std::cout << string << std::endl;
}
void Printer::heavyJob(std::string msg)
{
    std::cout << msg;
    for (int i = 0; i < 5; i++)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << '.';
    }
    std::cout << "结束。" << std::endl;
}