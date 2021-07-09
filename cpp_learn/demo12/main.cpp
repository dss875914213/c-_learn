#include<iostream>
#include<functional>

// https://blog.csdn.net/wj199395/article/details/78462506

class A
{
public:
	int fun(int a, float b, char c);
};
int A::fun(int a, float b, char c)
{
	return (int)a + b + c;
}


int fun(int a, float b, char c)
{
	return (int)a + b + c;
}


int main()
{
	std::cout << fun(1, 2, 'a') << std::endl;
	auto f = std::bind(fun, 1, std::placeholders::_1, 'a');
	std::cout << f(2) << std::endl;

	A a;
	std::cout << a.fun(1, 2, 'a') << std::endl;
	auto f2 = std::bind(&A::fun, &a, 1, std::placeholders::_1, 'a');
	std::cout << f2(2) << std::endl;

	auto fun3 = [](int a, float b, char c)->int {return (int)a + b + c; };
	std::cout << fun3(1, 2, 'a') << std::endl;
	auto f4 = std::bind(fun3, 1, std::placeholders::_1, 'a');
	std::cout << f4(2) << std::endl;
}

