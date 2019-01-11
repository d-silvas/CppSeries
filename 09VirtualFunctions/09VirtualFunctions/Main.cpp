#include <iostream>
#include <string>

class Entity
{
public:
	std::string GetName() { return "Entity"; }
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	// https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/
	// https://www.cprogramming.com/tutorial/initialization-lists-c++.html
	Player(const std::string& name)
		: m_Name(name) {}

	std::string GetName() { return m_Name; }
};

int main()
{
	Entity* e = new Entity();
	std::cout << e->GetName() << std::endl;


}