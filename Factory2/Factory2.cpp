#include "Factory2.h"

int main()
{
	Product *theProduct = NULL;
	Creator *theCreator = NULL;

	theCreator = new ConCreator();
	theProduct = theCreator->FactoryMethod(1);

	theCreator = new ConCreator();
	theProduct = theCreator->FactoryMethod(2);
	return 0;
}
