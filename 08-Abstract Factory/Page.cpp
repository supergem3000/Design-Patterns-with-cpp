#include <fstream>
#include <iostream>
#include "Page.h"
Page::Page(std::string title, std::string author)
{
	this->title = title;
	this->author = author;
}
void Page::add(Item* item)
{
	this->content.push_back(item);
}
void Page::output()
{
	std::string filename = title.append(".html");
	std::ofstream out;
	out.open(filename);
	out << this->makeHTML();
	out.close();
	std::cout << filename << "编写完成" << std::endl;
}