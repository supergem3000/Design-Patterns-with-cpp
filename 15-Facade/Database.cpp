#include "Database.h"
std::map<std::string, std::string> Database::getProperties(std::string dbname)
{
    std::map<std::string, std::string> prop;
    if (dbname != "maildata")
    {
        return prop;
    }
    prop.insert(std::pair<std::string, std::string>("hyuki@hyuki.com", "Hiroshi Yuki"));
    prop.insert(std::pair<std::string, std::string>("hanako@hyuki.com", "Hanako Sato"));
    prop.insert(std::pair<std::string, std::string>("tomura@hyuki.com", "Tomura"));
    prop.insert(std::pair<std::string, std::string>("mamoru@hyuki.com", "Mamoru Takahashi"));
    return prop;
}