#include<iostream>
int add(int a, int b);
auto minus(int a, int b)->int;
auto minus2(int a, int b)->decltype(a);
auto getResultArray()->int(*)[10];


int main()
{
	std::cout << add(1, 1) << std::endl;
	std::cout << minus(1, 1) << std::endl;
	std::cout << minus2(1, 1) << std::endl;

	int(*a)[10] = getResultArray();
	for (int i = 0; i < 10; i++)
	{
		std::cout << (*a)[i] << " ";
	}
	std::cout << std::endl;
}

int add(int a, int b)
{
	return a + b;
}

auto minus(int a, int b)->int
{
	return a - b;
}

auto minus2(int a, int b)->decltype(a)
{
	return a - b;
}

int array[10] = { 1,2,3,4,5,6,7,8,9,10 };

auto getResultArray()->int(*)[10]
{
	return &array;
}






