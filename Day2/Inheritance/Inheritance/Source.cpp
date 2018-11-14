#include <iostream>
#include <vector>
using namespace std;

class Shape
{
public:
	Shape(int w, int h): width(w), height(h){}
	virtual int getArea() = 0;
protected:
	int width;
	int height;
};

class Rectangle : public Shape
{
public:
	Rectangle(int w, int h): Shape(w, h){}
	int getArea()
	{
		return width * height;
	}
};

class Triangle : public Shape
{
public:
	Triangle(int w, int h) : Shape(w, h) {}
	int getArea()
	{
		return width * height / 2;
	}
};

void checkArea(Shape *shape)
{
	cout << shape->getArea() << endl;
}

int main()
{
	Rectangle r(30, 15);
	Triangle t(30, 15);
	checkArea(&r);
	checkArea(&t);
	return 0;
}