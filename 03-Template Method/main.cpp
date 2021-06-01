#include "AbstractDisplay.h"
#include "CharDisplay.h"
#include "StringDisplay.h"

int main()
{
	AbstractDisplay* d1 = new CharDisplay('H');
	AbstractDisplay* d2 = new StringDisplay("Hello, world.");
	d1->display();
	d2->display();
	return 0;
}