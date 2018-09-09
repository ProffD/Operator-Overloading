#pragma once
#include<iostream>
class Complex
{
public:

	friend std::ostream& operator<<(std::ostream& os,const Complex& c);
	Complex();
	Complex(float i, float r);
	Complex operator+(const Complex& rhs);
	Complex operator=(const Complex& rhs);
	bool operator==(const Complex& c);

	~Complex();
private:
	float img;
	float real;

};

