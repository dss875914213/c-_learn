#include<iostream>

constexpr int fun1()
{
	return 5;
}

int fun2()
{
	return 5;
}

int main()
{
	constexpr int num1 = 5;
	int num2 = 5;
	int array1[num1];
	// int array2[num2]; error
	int array3[fun1()];
	// int array4[fun2()]; error
}

