#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie *zz = newZombie("teste");
    zz->announce();
    delete zz;

    randomChump("jocas");
}