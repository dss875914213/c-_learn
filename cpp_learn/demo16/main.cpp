#include<iostream>

enum fruit1 { apple, orange, watermelon };
enum animal1 { cat, dog, pig, bird };

enum class fruit2{apple, orange, watermelon};
enum class animal2 { cat, dog, pig, bird };

int main()
{
	fruit1 myFruit1 = orange;
	animal1 myAnimal1 = dog;
	std::cout << (myFruit1 == myAnimal1 ? "Yes" : "No" )<< std::endl;
	std::cout << (myFruit1 == 1 ? "Yes" : "No") << std::endl;


	fruit2 myFruit2 = fruit2::orange;
	animal2 myAnimal2 = animal2::dog;
	// std::cout << (myFruit2 == myAnimal2 ? "Yes" : "No") << std::endl; error
	// std::cout << (myFruit2 == 1 ? "Yes" : "No") << std::endl; error
	std::cout << ((int)myFruit2 == 1 ? "Yes" : "No") << std::endl;
}


