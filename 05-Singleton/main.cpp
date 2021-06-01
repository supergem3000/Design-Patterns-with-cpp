#include <iostream>
#include "Singleton.h"

int main()
{
	std::cout << "Start." << std::endl;
	Singleton* obj1 = Singleton::getInstance();
	Singleton* obj2 = Singleton::getInstance();
	if (obj1 == obj2)
	{
		std::cout << "obj1与obj2是相同的实例。" << std::endl;
	}
	else
	{
		std::cout << "obj1与obj2是不同的实例。" << std::endl;
	}
	std::cout << "End." << std::endl;
}