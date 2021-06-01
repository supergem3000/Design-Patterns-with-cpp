#include "Factory.h"
#include "IDCardFactory.h"
#include "Product.h"

int main()
{
	Factory* factory = new IDCardFactory();
	Product* card1 = factory->create("小明");
	Product* card2 = factory->create("小红");
	Product* card3 = factory->create("小刚");
	card1->use();
	card2->use();
	card3->use();
	return 0;
}