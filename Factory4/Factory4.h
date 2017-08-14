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

class Creator{};

class ConCreator:public Creator
{
public:
	template<typename T>
	Product* FactoryMethod()
	{
		return new T();
	}
};


