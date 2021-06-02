#include <iostream>
#include "Director.h"
#include "HTMLBuilder.h"
#include "TextBuilder.h"
void usePlain();
void useHtml();

int main()
{
	usePlain();
	useHtml();
}
void usePlain()
{
	TextBuilder* textbuilder = new TextBuilder();
	Director director(textbuilder);
	director.construct();
	std::string result = textbuilder->getResult();
	std::cout << result << std::endl;
}
void useHtml()
{
	HTMLBuilder* htmlbuilder = new HTMLBuilder();
	Director director(htmlbuilder);
	director.construct();
	std::string filename = htmlbuilder->getResult();
	std::cout << filename << "文件编写完成。" << std::endl;
}