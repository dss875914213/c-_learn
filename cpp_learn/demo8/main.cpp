#include<iostream>
#include<tuple>

int main()
{
	std::tuple<int, double> t, t2;
	t = std::make_tuple(5, 1.5);
	t2 = std::make_tuple(5, 1.0);
	// ���� t Ԫ�ظ���
	int num = std::tuple_size<decltype(t)>::value;
	std::cout << num << std::endl;

	// �õ�ÿ��Ԫ��ֵ
	auto d = std::get<0>(t);
	auto f = std::get<1>(t);

	std::cout << d << " " << f << std::endl;

	//�Ƚ�
	std::cout << (t < t2) << std::endl;
}