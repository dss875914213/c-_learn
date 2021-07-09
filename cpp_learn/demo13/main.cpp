#include<iostream>

class A
{
public:
	A() = default;
	A(const A& a) = default;
};

class B
{
public:
	B() = default;
	B(const B& a) = delete;
};

int main()
{
	A a1;
	A a2 = a1;

	B b1;
	// B b2 = b1; error
}