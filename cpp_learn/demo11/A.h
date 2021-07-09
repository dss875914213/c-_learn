#pragma once
#include<iostream>

class A
{
public:
	A(int x, int y);
	std::pair<int,int> GetValue();
private:
	int a;
	int b;
};

