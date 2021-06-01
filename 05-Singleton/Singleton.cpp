#include <iostream>
#include "Singleton.h"
Singleton* Singleton::singleton = new Singleton();
Singleton::Singleton()
{
	std::cout << "生成了一个实例。" << std::endl;
}
Singleton* Singleton::getInstance()
{
	return Singleton::singleton;
}