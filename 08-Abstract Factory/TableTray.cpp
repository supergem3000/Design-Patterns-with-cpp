#include <sstream>
#include "TableTray.h"
TableTray::TableTray(std::string caption) : Tray(caption) {}
std::string TableTray::makeHTML()
{
    std::stringstream ss;
    ss << "<td>";
    ss << "<table width=\"100%\" border=\"1\"><tr>";
    ss << "<td bgcolor=\"#cccccc\" align=\"center\" colspan=\"" << this->tray.size() << "\"><b>" << this->caption << "</b></td>";
    ss << "</tr>" << std::endl;
    ss << "<tr>" << std::endl;
    for (std::vector<Item *>::iterator it = this->tray.begin(); it != this->tray.end(); it++)
    {
        ss << (*it)->makeHTML();
    }
    ss << "</tr></table>";
    ss << "</td>";
    return ss.str();
}