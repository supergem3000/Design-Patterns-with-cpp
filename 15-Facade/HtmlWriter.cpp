#include "HtmlWriter.h"
HtmlWriter::HtmlWriter(std::ofstream &out) : out(out) {}
void HtmlWriter::title(std::string title)
{
    this->out << "<html>";
    this->out << "<head>";
    this->out << "<title>" << title << "</title>";
    this->out << "</head>";
    this->out << "<body>" << std::endl;
    this->out << "<h1>" << title << "</h1>" << std::endl;
}
void HtmlWriter::paragraph(std::string msg)
{
    this->out << "<p>" << msg << "</p>" << std::endl;
}
void HtmlWriter::link(std::string href, std::string caption)
{
    this->paragraph("<a href=\"" + href + "\">" + caption + "</a>");
}
void HtmlWriter::mailto(std::string mailaddr, std::string username)
{
    this->link("mailto:" + mailaddr, username);
}
void HtmlWriter::close()
{
    this->out << "</body>";
    this->out << "</html>" << std::endl;
    this->out.close();
}