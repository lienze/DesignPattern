#include "Factory2.h"

int main()
{
	Product *theProduct = NULL;
	Creator *theCreator = NULL;

	theCreator = new ConCreatorA();
	theProduct = theCreator->FactoryMethod();

	theCreator = new ConCreatorB();
	theProduct = theCreator->FactoryMethod();
	return 0;
}
