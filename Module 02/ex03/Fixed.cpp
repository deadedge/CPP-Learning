#include "Fixed.hpp"
#include <iostream>
#include <cmath>
Fixed::Fixed() : _fixedValue(0) {
                   // std::cout << "Default constructor called" << std::endl;
                 };
Fixed::Fixed(const int value)
{
  // std::cout << "Int constructor called" << std::endl;
  this->_fixedValue = value << this->_fractBits;
};
Fixed::Fixed(const float value) : _fixedValue(toInt())
{
  // std::cout << "Float constructor called" << std::endl;
  this->_fixedValue = roundf(value * (1 << this->_fractBits));
};

Fixed::Fixed(const Fixed &other) : _fixedValue(other._fixedValue)
{
  // std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
  // std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other)
    _fixedValue = other.getRawBits();
  return *this;
}
Fixed::~Fixed() {
  // std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits() const
{
  // std::cout << "getRawBits member function called" << std::endl;
  return this->_fixedValue;
}

void Fixed::setRawBits(int const raw)
{
  // std::cout << "setRawBits member function called" << std::endl;
  this->_fixedValue = raw;
}
float Fixed::toFloat(void) const
{
  return static_cast<float>(this->_fixedValue) / (1 << this->_fractBits);
}
int Fixed::toInt(void) const
{
  return static_cast<int>(roundf(this->toFloat()));
}

bool Fixed::operator<(const Fixed &other) const
{
  return this->_fixedValue < other.getRawBits();
}
bool Fixed::operator>(const Fixed &other) const
{
  return this->_fixedValue > other.getRawBits();
}
bool Fixed::operator>=(const Fixed &other) const
{
  return this->_fixedValue >= other.getRawBits();
}
bool Fixed::operator<=(const Fixed &other) const
{
  return this->_fixedValue <= other.getRawBits();
}
bool Fixed::operator==(const Fixed &other) const
{
  return this->_fixedValue == other.getRawBits();
}
bool Fixed::operator!=(const Fixed &other) const
{
  return this->_fixedValue != other.getRawBits();
}

float Fixed::operator+(const Fixed &other) const
{
  return (this->toFloat() + other.toFloat());
}

float Fixed::operator-(const Fixed &other) const
{
  return (this->toFloat() - other.toFloat());
}

float Fixed::operator*(const Fixed &other) const
{
  return (this->toFloat() * other.toFloat());
}

float Fixed::operator/(const Fixed &other) const
{
  return (this->toFloat() / other.toFloat());
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
  if (a.toFloat() <= b.toFloat())
    return a;
  return b;
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
  if (a.toFloat() <= b.toFloat())
    return a;
  return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
  if (a.toFloat() >= b.toFloat())
    return a;
  return b;
}
Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
  if (a.toFloat() >= b.toFloat())
    return a;
  return b;
}

Fixed Fixed::operator--()
{
  this->_fixedValue--;
  return *this;
}

Fixed Fixed::operator++(int)
{
  Fixed temp = *this;
  this->_fixedValue++;
  return temp;
}

Fixed Fixed::operator--(int)
{
  Fixed temp = *this;
  this->_fixedValue--;
  return temp;
}

Fixed Fixed::operator++()
{
  this->_fixedValue++;
  return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
  out << value.toFloat();
  return out;
}