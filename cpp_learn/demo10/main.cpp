#include<iostream>

int main()
{
	int a = 10;
	int& b = a;
	int&& c = 10;
	int&& d = std::move(a);
	//int&& e = a;  error

	std::cout << a << " " << b << " " << c << " " << d << std::endl;
	a += 5;
	std::cout << a << " " << b << " " << c << " " << d << std::endl;
	b += 5;
	std::cout << a << " " << b << " " << c << " " << d << std::endl;
}