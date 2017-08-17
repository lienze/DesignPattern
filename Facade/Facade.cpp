#include "Facade.h"

int main()
{
	Facade *facade = new Facade();
	if(facade!=NULL){
		facade->drawCircle();
		facade->drawRectangle();
		facade->drawSquare();
	}
}
