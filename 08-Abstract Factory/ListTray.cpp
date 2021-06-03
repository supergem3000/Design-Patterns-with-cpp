#include <sstream>
#include "ListTray.h"
ListTray::ListTray(std::string caption) : Tray(caption) {}
std::string ListTray::makeHTML()
{
	std::stringstream ss;
	ss << "<li>" << std::endl;
	ss << this->caption << std::endl;
	ss << "<ul>" << std::endl;
	for (std::vector<Item*>::iterator it = this->tray.begin(); it != this->tray.end(); it++)
	{
		ss << (*it)->makeHTML();
	}
	ss << "</ul>" << std::endl;
	ss << "</li>" << std::endl;
	return ss.str();
}