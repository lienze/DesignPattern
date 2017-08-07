#include "Factory.h"

int main()
{
	Product *theProduct = NULL;
	Creator *theCreator = NULL;

	theCreator = new ConCreatorA();
	theProduct = theCreator->FactoryMethod();
	return 0;
}