#pragma once
#include <string>
class ClapTrap
{
protected:
  std::string _name;
  int _health;
  int _energy;
  int _damage;

public:
  ClapTrap();
  ClapTrap(const std::string &name);
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &other);
  virtual ~ClapTrap();

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
