#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("owl")
{
    std::cout << "Animal Contructor was called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other.getType())
{
    std::cout << "Animal Copy Contructor was called" << std::endl;
}
Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        this->_type = other.getType();

    std::cout << "Animal Copy Assign was called" << std::endl;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal destructor was called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "[" << this->_type << "]" << " cru cru cru" << std::endl;
}

const std::string &Animal::getType() const
{
    return this->_type;
}