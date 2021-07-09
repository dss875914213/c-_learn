#include<iostream>
#include<tuple>

int main()
{
	std::tuple<int, double> t, t2;
	t = std::make_tuple(5, 1.5);
	t2 = std::make_tuple(5, 1.0);
	// 返回 t 元素个数
	int num = std::tuple_size<decltype(t)>::value;
	std::cout << num << std::endl;

	// 得到每个元素值
	auto d = std::get<0>(t);
	auto f = std::get<1>(t);

	std::cout << d << " " << f << std::endl;

	//比较
	std::cout << (t < t2) << std::endl;
}