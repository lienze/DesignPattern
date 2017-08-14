#include "Factory4.h"

int main()
{
	Product * theProduct = NULL;
	ConCreator * theConCreator = new ConCreator();
	if(theConCreator)
	{
		theProduct = theConCreator->FactoryMethod<ProductA>();
		theProduct = theConCreator->FactoryMethod<ProductB>();
	}
	return 0;
}
