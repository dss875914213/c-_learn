#include"tiger.h"
#include"animal.h"
#include<iostream>

int main()
{
	animal* animal1;
	tiger tiger1;

	animal1 = &tiger1;
	animal1->eat();
	animal1->move();
}
