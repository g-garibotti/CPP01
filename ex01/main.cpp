#include "Zombie.hpp"
#include <iostream>

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	int		hordeSize;
	Zombie	*horde;
	Zombie	*singleZombie;

	hordeSize = 5;
	std::string zombieName = "Walker";
	horde = zombieHorde(hordeSize, zombieName);
	for (int i = 0; i < hordeSize; i++)
	{
		std::cout << "Zombie " << i + 1 << ": ";
		horde[i].announce();
	}
	delete[] horde;
	singleZombie = new Zombie("Fred");
	singleZombie->announce();
	delete singleZombie;
	return (0);
}
