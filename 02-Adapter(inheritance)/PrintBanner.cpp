#include "PrintBanner.h"
PrintBanner::PrintBanner(std::string string) :Banner(string) {};
void PrintBanner::printWeak()
{
	this->showWithParen();
}
void PrintBanner::printStrong()
{
	this->showWithAster();
}