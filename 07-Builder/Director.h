#pragma once
#include "Builder.h"
class Director
{
public:
	Director(Builder* builder);
	void construct();
private:
	Builder* builder;
};

