#include<iostream>

enum Example : unsigned int // it has to be an integer
{
	A, B, C
};

/*
	CONSTRUCTORS, DESTRUCTORS
*/
class Entity
{
public:
	float X, Y;

	// Constructor's name must match that of the class. It doesn't have a return type
	// (there is an 'implied' constructor that does nothing)
	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Constructed empty entity" << std::endl;
	}
	// We can define diferent constructors ('overload'?)
	Entity(float x, float y)
	{
		X = x;
		Y = y; 
		std::cout << "Constructed entity" << std::endl;
	}

	// DESTRUCTOR
	~Entity()
	{
		std::cout << "You're entity has been destroyed" << std::endl;
	}
};

/*
	Classes that we only want consumers to use statically
*/
// OPTION 1: Make the constructor private
class Log1
{
private:
	Log1() {}
public:
	static void Write()
	{

	}
};
//OPTION 2: Tell C++ we don't want the default constructor
class Log2
{
public:
	Log2() = delete;

	static void Write()
	{

	}
};

int main()
{
	Example value = B;

	if (value == 1) // this succeeds because A is 0, B is 1, ...
	{
		std::cout << "Eureka" << std::endl;
	}

	/*
		Constructors, usage
	*/
	Entity e(10.0f, 5.0f);

	std::cout << "Please press Enter" << std::endl;
	std::cin.get();
}