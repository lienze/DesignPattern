#include <iostream>
#include <stdio.h>
using namespace std;

class Strategy
{
public:
	virtual void AlogrithmInterface()=0;
};

class StrategyA : public Strategy
{
public:
	virtual void AlogrithmInterface()
	{
		printf("Alogrithm A\n");
	}
};


class StrategyB : public Strategy
{
public:
	virtual void AlogrithmInterface()
	{
		printf("Alogrithm B\n");
	}
};


class StrategyC : public Strategy
{
public:
	virtual void AlogrithmInterface()
	{
		printf("Alogrithm C\n");
	}
};

class Context
{
public:
	Strategy *strategy;
	Context(Strategy *_strategy){
		strategy = _strategy;
	}

	void ContextInterface(){
		strategy->AlogrithmInterface();
	}
};
