#include <iostream>
#include <stdio.h>
using namespace std;

class Shape
{
public:
	virtual void draw()=0;	
};

class Rectangle:public Shape
{
public:
	virtual void draw(){
		printf("Rectangle::draw()\n");
	}
};


class Square:public Shape
{
public:
	virtual void draw(){
		printf("Square::draw()\n");
	}
};


class Circle:public Shape
{
public:
	virtual void draw(){
		printf("Circle::draw()\n");
	}
};

class Facade 
{
private:
	Shape *circle;
	Shape *rectangle;
	Shape *square;
public:
	Facade()
	{
		circle = new Circle();
		rectangle = new Rectangle();
		square = new Square();
	}
	void drawCircle(){
		if(circle!=NULL)
			circle->draw();
	}

	void drawRectangle(){
		if(rectangle!=NULL)
			rectangle->draw();
	}

	void drawSquare(){
		if(square!=NULL)
			square->draw();
	}
};





