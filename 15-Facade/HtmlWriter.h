#pragma once
#include <fstream>
class HtmlWriter
{
public:
    HtmlWriter(std::ofstream &out);
    void title(std::string title);
    void paragraph(std::string msg);
    void link(std::string href, std::string caption);
    void mailto(std::string mailaddr, std::string username);
    void close();

private:
    std::ofstream &out;
};
