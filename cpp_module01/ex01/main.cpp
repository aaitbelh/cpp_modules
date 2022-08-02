#include "Zombie.hpp"

void NewZombieTotestLeaks()
{
	Zombie *ptr;
	ptr = zombieHorde(10, "grboz");
	randomChump("mamella lkhatr");
	delete[] ptr;

}

int main()
{
	NewZombieTotestLeaks();
	system("leaks Zombie");
}