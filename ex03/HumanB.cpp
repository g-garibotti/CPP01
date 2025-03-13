#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	std::cout << "HumanB " << this->name << " created with no weapon" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << this->name << " destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	std::cout << this->name << " now has a " << this->weapon->getType() << std::endl;
}

void HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon to attack with" << std::endl;
}
