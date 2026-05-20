#include "ClapTrap.hpp"
#include <iostream>
ClapTrap::ClapTrap() : _name("default"), _health(10), _energy(10), _damage(10)
{
  std::cout << "ClapTrap default constructor was called" << std::endl;
}
ClapTrap::ClapTrap(const std::string &name) : _name(name), _health(10), _energy(10), _damage(10)
{
  std::cout << "ClapTrap constructor was called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _health(other._health), _energy(other._energy), _damage(other._damage) {}
ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap destructor was called" << std::endl;
};
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
  if (this != &other)
  {
    this->_name = other._name;
    this->_damage = other._damage;
    this->_energy = other._energy;
    this->_health = other._health;
  }
  return *this;
}

void ClapTrap::attack(const std::string &target)
{
  if (this->_energy <= 0)
  {
    std::cout << "ClapTrap You cant attack, insuficcient energy" << std::endl;
    return;
  }
  if (this->_health <= 0)
  {
    std::cout << "ClapTrap You cant attack, you are dead" << std::endl;
    return;
  }
  this->_energy--;
  std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->_health <= 0)

  {

    std::cout << this->_name << " is already dead!" << std::endl;

    return;
  }
  this->_health -= amount;
  if (this->_health < 0)
    this->_health = 0;
  std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage! " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->_energy <= 0)
  {
    std::cout << "ClapTrap You cant repair, insuficcient energy" << std::endl;
    return;
  }
  if (this->_health <= 0)
  {
    std::cout << "ClapTrap You cant repair, you are dead" << std::endl;
    return;
  }
  this->_health += amount;
  this->_energy--;
  std::cout << "ClapTrap " << this->_name << " was repaired  in " << amount << " points of health! " << std::endl;
}
