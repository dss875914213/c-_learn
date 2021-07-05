#include<iostream>

int main()
{
	int basic = 10;
	auto f1 = [](int x, int y) {return x + y; };
	auto f2 = [basic](int x, int y) {return x + y + basic; };
	auto f3 = [&basic](int x, int y) {basic = 5; return x + y + basic; };
	auto f4 = [=](int x, int y) {return x + y + basic; };
	auto f5 = [&](int x, int y) {basic = 5; return x + y + basic; };
	std::cout << f1(1, 3)<<std::endl;
	std::cout << f2(1, 3) << std::endl;
	std::cout << f3(1, 3) << std::endl;
	std::cout << f4(1, 3) << std::endl;
	std::cout << f5(1, 3) << std::endl;
	std::cout << basic << std::endl;

	auto f11 = [=](int x, int y) {return x + y + basic; };
	std::cout << f11(1, 3) << std::endl;
}