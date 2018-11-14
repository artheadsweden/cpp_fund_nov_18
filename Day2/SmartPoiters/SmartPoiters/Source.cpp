#include <iostream>
#include <string>
#include <memory>

using namespace std;

class MyClass
{
public:
	MyClass(string n) : name(n)
	{
		cout << "Counstructor for " << name << endl;
	}

	~MyClass()
	{
		cout << "Destructor for " << name << endl;
	}

	void hi()
	{
		cout << "Hi" << endl;
	}

private:
	string name;
};

int main()
{
	MyClass *mcPtr = new MyClass("First");
	//mcPtr->hi();
	delete mcPtr;

	{
		unique_ptr<MyClass> uPtr(new MyClass("Second"));
		auto uPtr2 = make_unique<MyClass>("Third");
		//unique_ptr<MyClass> uPtr3 = uPtr;
		//uPtr->hi();
	}
	cout << "After scope" << endl;
	{
		shared_ptr<MyClass> sPtr(new MyClass("Fourth"));
		shared_ptr<MyClass> sPtr2 = sPtr;
		auto sPtr3 = make_shared<MyClass>("Fifth");
		auto sPtr4 = sPtr3;
	}
	cout << "After second scope" << endl;
	return 0;
}