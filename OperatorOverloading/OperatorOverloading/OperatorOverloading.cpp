// OperatorOverloading.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include "Complex.h"


int main()
{
	Complex c1(5.5f, 6.4f);
	Complex c2(4.6f, 6.6f);

	auto c3 = c2;
	auto c4 = c1 + c3;

	std::cout << "c3: "<< c3;
	std::cout << "c1 + c3\n " << c4;
	std::cout << (c1 == c2 ? "Equal" : "Not Equal") << std::endl;
	std::cout << (c3 == c2 ? "Equal" : "Not Equal") << std::endl;
	



	std::cin.get();
    return 0;
}

