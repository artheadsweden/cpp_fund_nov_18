#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{ 23, 4, 12, 55, 65, 32 };
	{
		auto sum = 0;

		for_each(v.begin(), v.end(), [&sum](auto x) {sum += x; });
		cout << sum << endl;

		for_each(v.begin(), v.end(), [](int x) {cout << x << endl; });
	}
	return 0;
}