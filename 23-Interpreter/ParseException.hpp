#include <exception>
#include <string>
class ParseException : public std::exception
{
public:
    ParseException(std::string msg) : exception(msg.c_str()) {}
};