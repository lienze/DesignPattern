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

class Creator
{
public:
	virtual Product* FactoryMethod(int iType)=0;//纯虚函数
};

class ConCreator:public Creator
{
public:
	ConCreator()
	{
		printf("产生工厂:ConCreatorA\n");
	}
	virtual Product* FactoryMethod(int iType)
	{
		switch(iType)
		{
			case 1:return new ProductA();break;
			case 2:return new ProductB();break;
			default:break;
		}
	}
};


