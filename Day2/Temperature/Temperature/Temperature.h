#pragma once

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

	friend Temperature operator +(const float &first, const Temperature &other);
	friend ostream& operator <<(ostream &os, const Temperature &other);
	friend istream& operator >>(istream &is, const Temperature &other);

private:
	float temp;
};
