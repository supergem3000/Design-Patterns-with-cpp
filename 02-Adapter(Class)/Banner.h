#pragma once
#include <string>
class Banner
{
private:
	std::string string;
public:
	Banner(std::string string);
	void showWithParen();
	void showWithAster();
};

