#include<iostream>


int main()
{
	constexpr bool a = false;
	static_assert(a, "a is not true");
}

