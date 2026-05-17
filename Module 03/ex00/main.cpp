#include "ClapTrap.hpp"
int main()
{
  ClapTrap a("Robot");

  a.attack("Enemy");

  a.takeDamage(5);
  a.takeDamage(5);

  a.beRepaired(3);

  return (0);
}
