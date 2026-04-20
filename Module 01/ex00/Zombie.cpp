#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : _name("") {};
Zombie::~Zombie()
{
    std::cout << "Zombie: " << this->_name << " Destroyed..." << std::endl;
};

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    if (!name.empty())
        this->_name = name;
}
