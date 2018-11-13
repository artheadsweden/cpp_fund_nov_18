#include <iostream>

using namespace std;
int func(int a)
{
	return a + 5;
}


int main() {
	int x = 10;
	x = func(x);

	int *iPtr = new int(14);
	int *iPtr2 = iPtr;

	cout << *iPtr << endl;
	delete iPtr;
	iPtr = nullptr;
	iPtr2 = nullptr;

	iPtr2 = &x;

	cout << *iPtr << endl;
	cout << *iPtr2 << endl;

	return 0;
}
