#include<iostream>

int main()
{
	auto a = 11.1;
	decltype(a) b = 11.0;

	auto c = 11;
	decltype(c) d = 11.0;

	std::cout << a / 2 << "  " << b / 2 << "  " << c / 2 << "  " << d / 2 << std::endl;
	std::cout << a / 2.0 << "  " << b / 2.0 << "  " << c / 2.0 << "  " << d / 2.0 << std::endl;


}
