#include<iostream>
#include<vector>
#include"A.h"


template <typename T1 = int, class T2 = int>
T1 cal(T2 a, T2 b)
{
	return (T1)a * b;
}

template <typename T1, class T2>
int cal2(T1 a, T2 b)
{
	return (int)a * b;
}

int main()
{
	std::vector<std::vector<int>> myVector;
	std::cout << "cal: " << cal(5, 2) << std::endl;
	std::cout << "cal: " << cal2(5, 2) << std::endl;
	A<> a(5, 6);
	a.max();
}


