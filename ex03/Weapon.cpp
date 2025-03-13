#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() : type("")
{
	std::cout << "Weapon created with no type" << std::endl;
}

Weapon::Weapon(std::string type) : type(type)
{
	std::cout << "Weapon created with type: " << type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon of type " << this->type << " destroyed" << std::endl;
}

const std::string &Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string newType)
{
	std::cout << "Weapon type changed from '" << this->type << "' to '" << newType << "'" << std::endl;
	this->type = newType;
}
