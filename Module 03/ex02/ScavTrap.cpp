#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
  this->_health = 100;
  this->_energy = 50;
  this->_damage = 20;
  std::cout << "ScavTrap default constructor was called" << std::endl;
}
ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap destructor was called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
  this->_health = 100;
  this->_energy = 50;
  this->_damage = 20;
  std::cout << "ScavTrap constructor was called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
  if (this != &other)
  {
    ClapTrap::operator=(other);
  }
  std::cout << "ScavTrap copy assignment operator called" << std::endl;
  return *this;
}

void ScavTrap::attack(const std::string &target)
{
  if (this->_energy <= 0)
  {
    std::cout << "ScavTrap You cant attack, insuficcient energy" << std::endl;
    return;
  }
  if (this->_health <= 0)
  {
    std::cout << "ScavTrap You cant attack, you are dead" << std::endl;
    return;
  }
  this->_energy--;
  std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}