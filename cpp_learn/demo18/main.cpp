#include<iostream>

class A
{
public:
	A();
	A(int a, int b, int c);
	void show();
private:
	int x=1, y=1, z=1;
};

class B :A
{
public:
	B();
};

B::B() :A()
{

}

A::A(int a, int b, int c)
{
	x = a;
	y = b;
	z = c;
	std::cout << "here1" << std::endl;
}
A::A()
{
	std::cout << "here2" << std::endl;
}

void A::show()
{
	std::cout << x << " " << y << " " << z << std::endl;
}

int main()
{
	A a1(1, 2, 3);
	a1.show();
	A a2 = A();
	a2.show();
	A a3();
	//a3.show(); error 因为上一句是函数声明
	B b;
}

