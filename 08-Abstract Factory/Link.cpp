#include "Link.h"
Link::Link(std::string caption, std::string url) : Item(caption)
{
	this->url = url;
}