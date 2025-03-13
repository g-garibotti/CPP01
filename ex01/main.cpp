#include "Zombie.hpp"
#include <iostream>

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*horde = zombieHorde(5, "Walker");
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Zombie " << i + 1 << ": ";
		horde[i].announce();
	}
	delete[] horde;
	Zombie *singleZombie = new Zombie("Fred");
	singleZombie->announce();
	delete singleZombie;
	return (0);
}
