#include "DiamondTrap.hpp"
#include <iostream>
DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), _name("default")
{
    this->_energy = ScavTrap::_energy;
    this->_damage = FragTrap::_damage;
    this->_health = FragTrap::_health;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), _name(name)
{
    this->_energy = ScavTrap::_energy;
    this->_damage = FragTrap::_damage;
    this->_health = FragTrap::_health;
}
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), _name(other._name)
{
}

DiamondTrap::~DiamondTrap() {}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        this->_name = other._name;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name - " << this->_name << " Claptrap name - " << ClapTrap::_name << std::endl;
}