#include<iostream>

class A
{
public:
	explicit A(int a)
	{
		x = a;
	}
private:
	int x;
};

class B
{
public:
	B(int b)
	{
		x = b;
	}
private:
	int x;
};

int main()
{
	// A a1 = 1; error
	B b1 = 1;

	A a2 = A(1);
	B b2 = B(1);

	A a3(1);
	B b3(1);
}

