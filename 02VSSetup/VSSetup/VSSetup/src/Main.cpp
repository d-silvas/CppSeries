#include <iostream>
#include <string>
#include "Log.h"

int main()
{
	Log("Hi");

	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			continue;
		}
		Log(std::to_string(i).c_str());
		if (i > 6) {
			break;
		}
	}

//	int notI = 2;
//	while (notI < 50) {
//		Log(std::to_string(notI).c_str());
//		notI++;
//	}

	std::cin.get();
}