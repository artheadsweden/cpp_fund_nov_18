#include <iostream>
#include <string>

using namespace std;

class MyClass
{
public:
	MyClass()
	{
		value = 0;
		cout << "Default constructor" << endl;
	}

	MyClass(int v) : value(v)
	{
		cout << "Constructor taking one value -> " << value << endl;
	}

	MyClass(const MyClass &other) : value(other.value)
	{
		cout << "Copy constructor with value -> " << value << endl;
	}

	MyClass(MyClass &&other) 
	{
		value = 0;
		swap(value, other.value);
		cout << "Move constructor with value -> " << value << endl;
	}

	MyClass& operator =(const MyClass &other)
	{
		value = other.value;
		cout << "Copy assignment operator with value -> " << value << endl;
		return *this;
	}

	MyClass& operator =(MyClass &&other)
	{
		value = 0;
		swap(value, other.value);
		cout << "Move assignment operator with value -> " << value << endl;
		return *this;
	}

private:
	int value;
};

int main()
{
	MyClass a(10);
	MyClass b = move(a);
	MyClass c;
	c = move(b);
	return 0;
}