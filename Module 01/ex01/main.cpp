#include "Zombie.hpp"

int	main()
{
    int number = 10;
	Zombie *horde = zombieHorde(number, "jocas mocas");
    for (int i = 0; i < number; i++)
    {
        horde->announce();
    }
    delete[] horde;
    return 0;
}