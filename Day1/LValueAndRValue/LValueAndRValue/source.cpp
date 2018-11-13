#include <iostream>

using namespace std;

// Rvalue reference
void func(int &&x)
{
	cout << "x is rvalue ref" << endl;
}

// Lvalue reference
void func(int &x)
{
	cout << "x is lvalue ref" << endl;
}

int main()
{
	int a = 5;
	func(move(a));
	func(5);
	return 0;
}
