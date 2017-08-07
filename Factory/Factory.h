#include <iostream>
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
	virtual Product* FactoryMethod()=0;//纯虚函数
};

class ConCreatorA:public Creator
{
public:
	ConCreatorA()
	{
		printf("产生工厂:ConCreatorA\n");
	}
	virtual Product* FactoryMethod()
	{
		return new ProductA();
	}
};

class ConCreatorB:public Creator
{
public:
	ConCreatorB()
	{
		printf("产生工厂:ConCreatorB\n");
	}
	virtual Product* FactoryMethod()
	{
		return new ProductB();
	}
};



