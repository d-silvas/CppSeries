#include <iostream>

#define LOG(x) std::cout << x << std::endl

/*
	We want to change a value from an external function
*/
// OPTION 1: Use a pointer, change the value in that memory address
void IncrementPtr(int* value)
{
	(*value)++;
}
// OPTION 2: Pass the variable by reference
void IncrementRef(int& value)
{
	value++;
}

int main()
{
	int var = 256;
	//void* ptr = 0;
	//void* ptr = NULL;
	//void* ptr = nullptr;
	int* ptr = &var;

	*ptr = 1000;
	LOG(var);

	LOG("===================================");

	char* buffer = new char[8]; // Allocate 8 bytes of memory (char is 1 byte) and return a pointer to the beginning of that block
	memset(buffer, 0, 8); // Sets 8 bytes (starting at 'buffer')  in memory to 0
	
	char** doublePtr = &buffer;
	
//	delete[] buffer;

	LOG("===================================");
	LOG("=========REFERENCES================");

	int a = 5;
	int* b = &a; // This is a pointer that points to the memory address of a
	int& ref = a; // This is a reference. 'ref' variable doesn't exist, it's just a

	//int anotherNumber = 22;
	//ref = anotherNumber; // You CAN'T do this! This will set a to the value of 'anotherNumber'

	//int& ref; // This is WRONG because we have to assignate references on creation

	LOG(ref);
	a++;
	LOG(ref);

	LOG("===================================");
	LOG("==========CHANGING VALUES==========");
	IncrementPtr(&a);
	//IncrementPtr(b); // The same
	LOG(a);
	
	IncrementRef(a);
	LOG(a);
	std::cin.get();
}