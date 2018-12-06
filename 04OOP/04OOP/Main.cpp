#include<iostream>

#define LOG(x) std::cout << x << std::endl

/*
	Class members are PRIVATE by default (if we don't specify "public:")
	"A class is a type"
*/
class Player
{
public:
	int x, y;
	int speed;
	// Option 2 for Move function
	// Note that x, y refer to the object's properties, no need to do this.x
	void Move(int xa, int ya)
	{
		x += xa;
		y += ya;
	}
};

// Option 1 for Move function
// Player needs to be passed by reference because I'm going to modify it
void Move(Player& player, int xa, int ya)
{
	player.x += xa * player.speed;
	player.y += ya * player.speed;
}

/*
	- STRUCT is the same as a class. The ONLY difference is that properties/methods
	are public by default
	- The following struct is equivalent to the Player class
	- Structs exist because of backwards compatibility with C
	- Using structs or objects is up to the programmer
	- Example: we can use structs for Plain Old Data, like a vector (see Vec2)
	- Also, don't use inheritance with structs
*/
struct Mob
{
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

// This Vec2 is just a representation of 2 floats so it's a good candidate for struct
// Doesn't include a lot of functionality 
struct Vec2
{
	float x;
	float y;

	void Add(const Vec2& other)
	{
		x += other.x;
		y += other.y;
	}
};

int main()
{
	Player p1;
	p1.x = 5;

	Move(p1, 5, 5);
	p1.Move(5, 5);

	std::cin.get();
}