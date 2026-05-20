#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    std::cout << "Cat Contructor was called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
    std::cout << "Cat Copy Contructor was called" << std::endl;
    _type = other._type;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal();
        this->_type = other._type;
    }

    std::cout << "Cat Copy Assign was called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor was called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "[" << this->_type << "]" << " miauuu" << std::endl;
}