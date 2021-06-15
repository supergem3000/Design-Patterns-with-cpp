#pragma once
#include <map>
#include <string>
class Database
{
public:
    static std::map<std::string, std::string> getProperties(std::string dbname);

private:
    Database();
};
