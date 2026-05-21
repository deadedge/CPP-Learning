#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("owl")
{
    std::cout << "WrongAnimal Contructor was called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other.getType())
{
    std::cout << "WrongAnimal Copy Contructor was called" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
        this->_type = other.getType();

    std::cout << "WrongAnimal Copy Assign was called" << std::endl;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor was called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "[" << this->_type << "]" << " cru cru cru" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
    return this->_type;
}