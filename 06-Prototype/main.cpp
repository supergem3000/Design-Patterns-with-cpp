#include <iostream>
#include "Manager.h"
#include "MessageBox.h"
#include "Product.h"
#include "UnderlinePen.h"

int main()
{
	Manager manager;
	UnderlinePen* upen = new UnderlinePen('~');
	MessageBox* mbox = new MessageBox('*');
	MessageBox* sbox = new MessageBox('/');
	manager._register("strong message", upen);
	manager._register("warning box", mbox);
	manager._register("slash box", sbox);

	Product* p1 = manager.create("strong message");
	p1->use("Hello, world.");
	Product* p2 = manager.create("warning box");
	p2->use("Hello, world.");
	Product* p3 = manager.create("slash box");
	p3->use("Hello, world.");
	return 0;
}