#include<iostream>

int main()
{
	int x = 5;

	bool a = x == 6;

	const char* ptr = "Hello";

	if (ptr == "Hello") {
		x++;
		std::cout << "Pointer is Hello" << std::endl;
	} 
	else if (ptr) {
		std::cout << "Pointer is somethign else" << std::endl;
	}
	else {
		std::cout << "Pointer is null" << std::endl;
	}

	std::cout << x << std::endl;
	std::cin.get();
}