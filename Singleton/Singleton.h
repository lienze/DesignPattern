#include <iostream>
#include <stdio.h>
using namespace std;

class Singleton
{
public:
	static Singleton * m_pInstance;
	static Singleton * getSingleton(){
		if(m_pInstance==NULL)
			return new Singleton();
		else
			return m_pInstance;
	}
	Singleton(){
		m_pInstance = this;
	}	
};
