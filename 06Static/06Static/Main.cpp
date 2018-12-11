/*
	LESSON 22
*/
#include<iostream>

/*
	A static variable outside of any function (in the "global scope")
	means that it will be only visible in THIS FILE
*/
static int s_Number = 8;

struct Entity
{
	// Static in classes means the same as in PHP
	// (there is only 1 instance of the variable shared between all the insances of the class)
	static int x, y;

	// STATIC METHODS CAN NOT ACCESS NON STATIC VARIABLES 
	static void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

// As they are static members, we need to initialize them, either
// inside of the struct or outside, like this
// (we don't need to assign an actual value)
int Entity::x;
int Entity::y;

int main()
{
	Entity e;
	//e.x = 1; // This is technically not correct for static members but whateva
	//e.y = 2;
	Entity::x = 1; // CORRECT
	Entity::y = 2;

	// Entity e1 = { 5, 8 }; // INITIALIZER - Doesn't work with static members
	Entity e1;
	e1.x = 5; // NOT CORRECT (but works)
	e1.y = 8;

	// Will print "5, 8" and "5, 8", because there is only one instance of x, y
	// for ALL the instances of Entity.
	// e.Print(); // NOT CORRECT (but works)
	Entity::Print(); // CORRECT
	e1.Print();

	std::cin.get();
}

// The first time I call this function, i will be initialized to 0
// The variable will remain the same and will not be initialized again
// in subsequent function calls. It is the same as if "i" was declared
// outside of the function (in the global scope) BUT being local to the 
// funcion: "i" can not be modified outside of functionOne()
void functionOne()
{
	static int i = 0;
	i++;
	// The next line will print 1, 2, 3, 4, ... on subsequent calls to functionOne()
	std::cout << i << std::endl;
}

// SINGLETON EXAMPLE
class Singleton
{
private:
	static Singleton* s_Instance;
public:
	static Singleton& Get() { return *s_Instance; }

	void Hello()
	{
		// Do stuff
	}
};

Singleton* Singleton::s_Instance = nullptr;

// From within a function: Singleton::Get().Hello();


// SINGLETON BETTER EXAMPLE

class Singleton2
{
public:
	static Singleton& Get()
	{
		static Singleton instance;
		return instance;
	}

	void Hello()
	{
		// do things
	}
};

// From within a function: Singleton::Get().Hello();