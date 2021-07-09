#include<iostream>
#include"A.h"

int main()
{
	A a;
	std::cout << sizeof(A::a) << std::endl;
	std::cout << sizeof(A::b) << std::endl;
	std::cout << sizeof(A::c) << std::endl;
	// std::cout << sizeof(A::d) << std::endl; error

	std::cout << sizeof(a.a) << std::endl;
	std::cout << sizeof(a.b) << std::endl;
	std::cout << sizeof(a.c) << std::endl;
}

