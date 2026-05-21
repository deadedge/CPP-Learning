#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat Contructor was called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
    std::cout << "Cat Copy Contructor was called" << std::endl;
    this->_type = other.getType();
    this->_brain = new Brain(*other._brain);
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        this->_type = other.getType();

        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }

    std::cout << "Cat Copy Assign was called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor was called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "[" << this->_type << "]" << " miauuu" << std::endl;
}

Brain *Cat::getBrain() const
{
    return this->_brain;
}

