#include <iostream>

using namespace std;

class Temperature
{
public:
	Temperature();
	Temperature(float t);
	float getFarenheit();
	float getCelsius();
	void setTemp(float t);

	//Temperature add(const Temperature &other);
	Temperature operator +(const Temperature &other);
	Temperature operator -(const Temperature &other);
	Temperature operator *(const Temperature &other);
	Temperature operator /(const Temperature &other);

private:
	float temp;
};

Temperature::Temperature() : temp(0.0f) {}

Temperature::Temperature(float t) : temp(t) {}

float Temperature::getFarenheit()
{
	return temp * 9 / 5 + 32;
}

float Temperature::getCelsius()
{
	return temp;
}

void Temperature::setTemp(float t)
{
	temp = t;
}

//Temperature Temperature::add(const Temperature &other)
//{
//	return Temperature(temp + other.temp);
//}

Temperature Temperature::operator +(const Temperature &other)
{
	return Temperature(temp + other.temp);
}


Temperature Temperature::operator -(const Temperature &other)
{
	return Temperature(temp - other.temp);
}

Temperature Temperature::operator *(const Temperature &other)
{
	return Temperature(temp * other.temp);
}

Temperature Temperature::operator /(const Temperature &other)
{
	return Temperature(temp / other.temp);
}

int main()
{
	Temperature t1(12.1f);
	Temperature t2(14.1f);
	Temperature t3 = t1 + Temperature(3.5);

	t3 = t1 + t2;

	Temperature t4 = t1 + 4.5f;

	cout << t4.getCelsius() << endl;
	cout << t4.getFarenheit() << endl;


	return 0;
}
