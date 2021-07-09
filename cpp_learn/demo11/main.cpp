#include<iostream>
#include"A.h"

int main()
{
	int array[10] = { 1,2,3,4,5 };
	A classA(1,3);
	std::cout << classA.GetValue().first<<" "<< classA.GetValue().second << std::endl;
}

