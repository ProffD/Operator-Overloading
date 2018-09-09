#include "Complex.h"



Complex::Complex(): img(0.0f),real(0.0f)
{
}

Complex::Complex(float i, float r): img(i), real(r)
{
}

Complex Complex::operator+(const Complex & rhs)
{
	return Complex(this->img + rhs.img,this->real + rhs.real);
}


Complex Complex::operator=(const Complex & rhs)
{
	//Check for self assignment
	if (this != &rhs) {
		this->img = rhs.img;
		this->real = rhs.real;
	}
	return *this;
}
bool Complex::operator==(const Complex & rhs)
{
	return (this->img == rhs.img) && (this->real == rhs.real) ? true : false ;
}
std::ostream& operator<<(std::ostream& os, const Complex& c) {

	os << "Imaginary: " << c.img << "\nReal: " << c.real << '\n';
	return os;
}

Complex::~Complex()
{
}
