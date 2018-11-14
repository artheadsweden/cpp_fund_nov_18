#include <iostream>

using namespace std;

int main()
{
	auto func_fact = [](int p)
	{
		return [p](int b) 
		{
			return p * b;
		};
	};
	auto funcby2 = func_fact(2);
	auto funcby3 = func_fact(3);
	auto funcby4 = func_fact(4);

	cout << funcby2(2) << endl;
	cout << funcby3(2) << endl;
	cout << funcby4(2) << endl;

	return 0;
}