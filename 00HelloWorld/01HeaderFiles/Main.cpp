#include <iostream>
#include "Log.h"

int main()
{
	int a = 1241;
	a++;

	const char* string = "Hiiiiiii!";

	for (int i = 0; i < 5; i++) {
		const char c = string[i];
		std::cout << c << std::endl;
	}

	Log(string);

	return 0;
}



/*

#include<string>
uint64_t x = UINT64_MAX; // https://stackoverflow.com/questions/3099638/the-difference-between-unsigned-long-and-uint64/3099664
unsigned long long int y; // "unsigned long long" is platform dependent
std::string xStr = std::to_string(x);
const char * xChr = xStr.c_str();

Log("Hello, world!");
Log(xChr);
std::cout << sizeof(x) << std::endl;
std::cout << sizeof(y) << std::endl;
*/
