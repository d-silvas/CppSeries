#include<iostream>

enum Example : unsigned int // it has to be an integer
{
	A, B, C
};

int main()
{
	Example value = B;

	if (value == 1) // this succeeds because A is 0, B is 1, ...
	{
		std::cout << "Eureka" << std::endl;
	}
	std::cin.get();
}