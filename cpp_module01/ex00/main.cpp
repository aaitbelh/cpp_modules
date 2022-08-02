#include "Zombie.hpp"
#include <iostream>

void NewZombieTotestLeaks()
{
	Zombie *ptr;
	ptr = newZombie("grboz");
	delete (ptr);
}

int main(){

	NewZombieTotestLeaks();
	system("leaks Zombie");
}