#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog Contructor was called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal()
{
    std::cout << "Dog Copy Contructor was called" << std::endl;
    _type = other.getType();
    this->_brain = new Brain(*other._brain);
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        this->_type = other.getType();

        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    std::cout << "Dog Copy Assign was called" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor was called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "[" << this->_type << "]" << " auauauauuuu" << std::endl;
}

Brain *Dog::getBrain() const
{
    return this->_brain;
}
