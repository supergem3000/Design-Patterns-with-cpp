#include <sstream>
#include "TablePage.h"
TablePage::TablePage(std::string title, std::string author) : Page(title, author) {}
std::string TablePage::makeHTML()
{
    std::stringstream ss;
    ss << "<html><head><title>" << this->title << "</title></head>" << std::endl;
    ss << "<body>" << std::endl;
    ss << "<h1>" << title << "</h1>" << std::endl;
    ss << "<table width=\"80%\" border=\"3\">" << std::endl;
    for (std::vector<Item *>::iterator it = this->content.begin(); it != this->content.end(); it++)
    {
        ss << "<tr>" << (*it)->makeHTML() << "</tr>";
    }
    ss << "</table>" << std::endl;
    ss << "<hr><address>" << this->author << "</address>";
    ss << "</body></html>" << std::endl;
    return ss.str();
}