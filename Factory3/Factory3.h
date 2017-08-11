#include <iostream>
#include <stdio.h>
using namespace std;

class Product{};

class ProductA:public Product
{
public:
	ProductA()
	{
		printf("This is ProductA\n");
	}
};

class ProductB:public Product
{
public:
	ProductB()
	{
		printf("This is ProductB\n");
	}
};

template<typename Product,typename ConProduct>
class ConCreator
{
public:
	static Product* FactoryMethod()
	{
		return new ConProduct();
	}
};


