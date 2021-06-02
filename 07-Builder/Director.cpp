#include "Director.h"
Director::Director(Builder* builder)
{
	this->builder = builder;
}
void Director::construct()
{
	builder->makeTitle("Greeting");
	builder->makeString("从早上至下午");
	builder->makeItems(new std::vector<std::string>{ "早上好", "下午好" });
	builder->makeString("晚上");
	builder->makeItems(new std::vector<std::string>{ "晚上好。", "晚安。", "再见。" });
	builder->close();
}