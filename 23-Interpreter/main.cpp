#include <iostream>
#include "Context.h"
#include "Node.h"
#include "ProgramNode.h"

int main()
{
    std::string text = "program repeat 4 repeat 3 go right go left end right end end";
    std::cout << "text = \"" << text << '\"' << std::endl;
    Node *node = new ProgramNode();
    try
    {
        node->parse(new Context(text));
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "node = " << node->toString() << std::endl;
    return 0;
}