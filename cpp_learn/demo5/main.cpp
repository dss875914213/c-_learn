#include<iostream>
void fun(int a);
void fun(int* b);

int main()
{
	int a = 5;
	int* b = NULL;
	int* c = nullptr;
	fun(a);
	fun(b);
	fun(c);

	fun(NULL);
	fun(nullptr);
}


void fun(int a)
{
	std::cout << "整数 : " << a << std::endl;
}

void fun(int* b)
{
	std::cout << "指针地址 : " << b << std::endl;
}

