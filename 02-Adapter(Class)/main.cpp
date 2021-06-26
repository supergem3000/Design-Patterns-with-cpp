#include "PrintBanner.h"

int main()
{
	Print* p = new PrintBanner("Hello");
	p->printWeak();
	p->printStrong();
	return 0;
}