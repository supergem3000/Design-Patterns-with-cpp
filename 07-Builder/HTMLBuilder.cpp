#include "HTMLBuilder.h"
void HTMLBuilder::makeTitle(std::string title)
{
	this->filename = title.append(".html");
	this->out.open(filename);
	this->out << "<html><head><title>" << title << "</title></head><body>" << std::endl;
	this->out << "<h1>" << title << "</h1>" << std::endl;
}
void HTMLBuilder::makeString(std::string str)
{
	this->out << "<p>" << str << "</p>" << std::endl;
}
void HTMLBuilder::makeItems(std::vector<std::string>* items)
{
	this->out << "<ul>" << std::endl;
	for (int i = 0; i < items->size(); i++)
	{
		this->out << "<li>" << items->at(i) << "</li>" << std::endl;
	}
	this->out << "</ul>" << std::endl;
}
void HTMLBuilder::close()
{
	this->out << "</body></html>" << std::endl;
	this->out.close();
}
std::string HTMLBuilder::getResult()
{
	return this->filename;
}