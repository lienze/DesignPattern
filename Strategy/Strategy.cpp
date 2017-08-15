#include "Strategy.h"

int main()
{
	Context *context = NULL;
	context = new Context(new StrategyA());
	context->ContextInterface();

	context = new Context(new StrategyB());
	context->ContextInterface();
}
