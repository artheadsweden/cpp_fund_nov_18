#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 13;
	auto func = [&x, y](int a) mutable
	{
		x++;
		y++;
		cout << a << " " << x << " " << y << endl;
	};
	x++;
	y++;
	func(3);
	return 0;
}