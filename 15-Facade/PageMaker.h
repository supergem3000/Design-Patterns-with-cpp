#pragma once
#include <string>
class PageMaker
{
public:
    static void makeWelcomePage(std::string mailaddr, std::string filename);

private:
    PageMaker();
};
