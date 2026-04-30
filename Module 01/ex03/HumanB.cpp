#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) : _name(name) {};

HumanB::~HumanB() {};

void HumanB::attack()
{
    if (this->_weapon)
        std::cout
            << this->_name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout
            << this->_name << " no weapon!" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; };