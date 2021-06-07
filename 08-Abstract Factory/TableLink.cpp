#include "TableLink.h"
TableLink::TableLink(std::string caption, std::string url) : Link(caption, url) {}
std::string TableLink::makeHTML()
{
    return "<td><a href=\"" + this->url + "\">" + this->caption + "</a></td>\n";
}