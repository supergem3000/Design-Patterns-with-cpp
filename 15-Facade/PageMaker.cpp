#include "Database.h"
#include "HtmlWriter.h"
#include "PageMaker.h"
#include <map>
#include <iostream>
void PageMaker::makeWelcomePage(std::string mailaddr, std::string filename)
{
    std::map<std::string, std::string> mailprop = Database::getProperties("maildata");
    std::string username = mailprop.find(mailaddr)->second;
    std::ofstream out(filename);
    HtmlWriter writer(out);
    writer.title("Welcome to " + username + "'s page!");
    writer.paragraph(username + " 欢迎来到 " + username + " 的主页。");
    writer.paragraph(" 等着你的邮件哦！ ");
    writer.mailto(mailaddr, username);
    writer.close();
    std::cout << filename << " is created for " << mailaddr << " (" << username << ") " << std::endl;
}