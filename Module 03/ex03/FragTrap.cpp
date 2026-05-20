#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
  this->_health = 100;
  this->_energy = 100;
  this->_damage = 30;
  std::cout << "FragTrap default constructor was called" << std::endl;
}
FragTrap::~FragTrap()
{
  std::cout << "FragTrap destructor was called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
  this->_health = 100;
  this->_energy = 100;
  this->_damage = 30;
  std::cout << "FragTrap constructor was called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
  if (this != &other)
  {
    ClapTrap::operator=(other);
  }
  std::cout << "FragTrap copy assignment operator called" << std::endl;
  return *this;
}

void FragTrap::attack(const std::string &target)
{
  if (this->_energy <= 0)
  {
    std::cout << "FragTrap You cant attack, insuficcient energy" << std::endl;
    return;
  }
  if (this->_health <= 0)
  {
    std::cout << "FragTrap You cant attack, you are dead" << std::endl;
    return;
  }
  this->_energy--;
  std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
  std::cout << "FragTrap " << this->_name << " wants a hight five!!" << std::endl;
}