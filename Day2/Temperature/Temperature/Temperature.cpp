#include "Temperature.h"

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

Temperature operator +(const float& first, const Temperature& other)
{
	return Temperature(first + other.temp);
}

ostream& operator <<(ostream &os, const Temperature &other)
{
	os << other.temp;
	return os;
}

istream & operator>>(istream & is, const Temperature & other)
{
	is >> other.temp;
	return is;
}

