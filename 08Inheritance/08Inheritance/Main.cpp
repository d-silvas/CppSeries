#include <iostream>

class Entity
{
public:
	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
};

// Inheritance: anything that is not private in the Entity class is accesible by the Player class
class Player : public Entity
{
public:
	const char* Name;

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};

int main()
{
	Player player;
	player.Move(5, 5);

	std::cout << sizeof(Entity) << std::endl;
	std::cout << sizeof(Player) << std::endl;

	std::cin.get();
}