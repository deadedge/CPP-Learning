#include "ScavTrap.hpp"
int main()
{
  ScavTrap a;
  ScavTrap b("teste");

  a.attack("enemy");
  b.attack("jocas docas mocas");
  b.guardGate();
  a.takeDamage(100);
  a.attack("enenenene");
  a.beRepaired(100);
  return (0);
}
