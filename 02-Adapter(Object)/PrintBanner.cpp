#include "PrintBanner.h"
PrintBanner::PrintBanner(std::string string)
{
	this->banner = new Banner(string);
}
void PrintBanner::printWeak()
{
	this->banner->showWithParen();
}
void PrintBanner::printStrong()
{
	this->banner->showWithAster();
}