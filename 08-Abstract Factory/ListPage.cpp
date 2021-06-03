#include <sstream>
#include "ListPage.h"
ListPage::ListPage(std::string title, std::string author) : Page(title, author) {}
std::string ListPage::makeHTML()
{
	std::stringstream ss;
	ss << "<html><head><title>" << this->title << "</title></head>" << std::endl;
	ss << "<body>" << std::endl;
	ss << "<h1>" << title << "</h1>" << std::endl;
	ss << "<ul>" << std::endl;
	for (std::vector<Item*>::iterator it = this->content.begin(); it != this->content.end(); it++)
	{
		ss << (*it)->makeHTML();
	}
	ss << "</ul>" << std::endl;
	ss << "<hr><address>" << this->author << "</address>";
	ss << "</body></html>" << std::endl;
	return ss.str();
}