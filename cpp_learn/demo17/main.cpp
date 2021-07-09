#include<iostream>

class A
{
public:
	~A()
	{
		std::cout << "Ïú»ÙA" << std::endl;
	}
};

int main()
{
	// ------------------ shared_ptr ----------------------------
	std::cout << "------------shared_ptr====================" << std::endl;
	std::shared_ptr<A> p1 = std::make_shared<A>();
	std::cout << "p1 use_count : " << p1.use_count() << std::endl;
	std::shared_ptr<A> p2 = p1;
	std::cout << "p1 use_count : " << p1.use_count() << std::endl;
	std::cout << "p2 use_count : " << p2.use_count() << std::endl;
	p1 = nullptr;
	std::cout << "p1 use_count : " << p1.use_count() << std::endl;
	std::cout << "p2 use_count : " << p2.use_count() << std::endl;
	p2 = nullptr;
	std::cout << "p1 use_count : " << p1.use_count() << std::endl;
	std::cout << "p2 use_count : " << p2.use_count() << std::endl;


	// ------------------ unique_ptr ----------------------------
	std::cout << "------------ unique_ptr ====================" << std::endl;
	std::unique_ptr<A> p3 = std::make_unique<A>();
	//std::unique_ptr<A> p4 = p3; error
	p3.reset();
	std::unique_ptr<A> p4 = std::make_unique<A>();
	A *a = p4.release();
	std::cout << "here" << std::endl;
	delete a;

	// ------------------ weak_ptr ----------------------------
	std::cout << "------------ weak_ptr ====================" << std::endl;
	std::weak_ptr<A> p5 = std::make_shared<A>();

	std::cout << "---------here---------" << std::endl;

	std::shared_ptr<A> p6 = std::make_shared<A>();
	std::weak_ptr<A> p7 = p6;
	std::cout << "p6 use_count : " << p6.use_count() << std::endl;
	p6 = nullptr;
	std::cout << "---------here---------" << std::endl;
}

