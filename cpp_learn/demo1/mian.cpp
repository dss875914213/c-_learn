#include<iostream>
/*
�������ڷ�Χ��forѭ��
*/

int main()
{
	int values[] = { 1,2,3,4 };
	for (auto value : values)
	{
		std::cout << value << " ";
		value += 1;
	}
	std::cout << std::endl;
	for (auto value : values)
	{
		std::cout << value << " ";
	}
	std::cout << std::endl;


	for (auto &value : values)
	{
		std::cout << value << " ";
		value += 1;
	}
	std::cout << std::endl;
	for (auto value : values)
	{
		std::cout << value << " ";
	}
	std::cout << std::endl;
}
