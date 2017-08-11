#include "Factory3.h"

int main()
{
	Product *theProduct = NULL;

	theProduct = ConCreator<Product,ProductA>::FactoryMethod();
	theProduct = ConCreator<Product,ProductB>::FactoryMethod();
	return 0;
}
