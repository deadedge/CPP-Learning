#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : Animal()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat Contructor was called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : Animal()
{
    std::cout << "WrongCat Copy Contructor was called" << std::endl;
    _type = other.getType();
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        this->_type = other.getType();
    }

    std::cout << "WrongCat Copy Assign was called" << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor was called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "[" << this->_type << "]" << " miauuu" << std::endl;
}