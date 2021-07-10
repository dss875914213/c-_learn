#include<iostream>

class A
{
public:
	A(int a);
private:
	int	x;
};
A::A(int a)
{
	x = a;
}


union T
{
	int a;
	float b;
	A c;
};

int main()
{
	T t = { 0 };
}

