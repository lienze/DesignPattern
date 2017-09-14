//State Pattern
#include <stdio.h>
#include "State.h"

class stateB : public State
{
public:
	virtual void HandleFunc(StateController *StateCtl)
	{
		printf("HandleFunc stateB\n");
	}
};

class stateA : public State
{
public:
	virtual void HandleFunc(StateController *StateCtl)
	{
		printf("HandleFunc stateA\n");
	}
};


int main()
{
	stateA *A = new stateA();
	stateB *B = new stateB();
	StateController *pStateCtl = new StateController(A);
	pStateCtl->Request();

	pStateCtl->SetState(B);
	pStateCtl->Request();
	
	//getchar();
	return 0;
}
