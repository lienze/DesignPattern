#include "Singleton.h"

Singleton *Singleton::m_pInstance = NULL;

int main()
{
	Singleton *p = new Singleton();
	printf("%x\n",p->getSingleton());

	printf("%x\n",p->getSingleton());
}
