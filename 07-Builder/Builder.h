#pragma once
#include <string>
#include <vector>
class Builder
{
public:
	virtual void makeTitle(std::string title) = 0;
	virtual void makeString(std::string str) = 0;
	virtual void makeItems(std::vector<std::string>* items) = 0;
	virtual void close() = 0;
};