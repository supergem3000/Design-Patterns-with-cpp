#include "TableFactory.h"
#include "TableLink.h"
#include "TablePage.h"
#include "TableTray.h"
Link *TableFactory::createLink(std::string caption, std::string url)
{
    return new TableLink(caption, url);
}
Tray *TableFactory::createTray(std::string caption)
{
    return new TableTray(caption);
}
Page *TableFactory::createPage(std::string title, std::string author)
{
    return new TablePage(title, author);
}