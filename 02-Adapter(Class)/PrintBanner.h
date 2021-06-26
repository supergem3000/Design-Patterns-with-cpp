#pragma once
#include "Banner.h"
#include "Print.h"
class PrintBanner : public Print, private Banner
{
public:
	PrintBanner(std::string string);
	void printWeak();
	void printStrong();
};

