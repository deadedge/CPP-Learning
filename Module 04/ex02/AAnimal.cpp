#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : _type("owl")
{
    std::cout << "AAnimal Contructor was called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : _type(other.getType())
{
    std::cout << "AAnimal Copy Contructor was called" << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if (this != &other)
        this->_type = other.getType();

    std::cout << "AAnimal Copy Assign was called" << std::endl;
    return *this;
}
AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor was called" << std::endl;
}

const std::string &AAnimal::getType() const
{
    return this->_type;
}