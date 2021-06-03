#include "ListLink.h"
ListLink::ListLink(std::string caption, std::string url) : Link(caption, url) {}
std::string ListLink::makeHTML()
{
	return "  <li><a href=\"" + this->url + "\">" + this->caption + "</a></li>\n";
}