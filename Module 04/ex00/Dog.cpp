#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    std::cout << "Dog Contructor was called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal()
{
    std::cout << "Dog Copy Contructor was called" << std::endl;
    _type = other._type;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal();
        this->_type = other._type;
    }

    std::cout << "Dog Copy Assign was called" << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor was called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "[" << this->_type << "]" << " auauauauuuu" << std::endl;
}