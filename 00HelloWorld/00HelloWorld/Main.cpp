#include<iostream>


/**
	The compiler trusts that this function will be somewhere in the source files
	The linker finds the definition of that Log function. If it doesn't find it, we will
		get a linker error
*/
void Log(const char* message); // DECLARATION: doesn't have the function body

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	std::cout << Multiply(a, b) << std::endl;
}

int main()
{
	
	std::cout << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;

	MultiplyAndLog(183, 444);

	std::cin.get();

	return 0;
}
