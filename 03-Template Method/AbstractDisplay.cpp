#include "AbstractDisplay.h"
void AbstractDisplay::display()
{
	open();
	for (int i = 0; i < 5; i++)
	{
		print();
	}
	close();
}