#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	randomChump("Chump_Zombie");
	std::cout << std::endl;
	Zombie *NewZombie = newZombie("new_Zombie");
	NewZombie->announce();
	delete NewZombie;
	std::cout << std::endl;
	{
		Zombie scopeZombie("Scope_Zombie");
		scopeZombie.announce();
	}
	return (0);
}