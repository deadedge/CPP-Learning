#pragma once

class Fixed
{

private:
  int _fixedValue;
  static const int _fractBits = 8;

public:
  Fixed();
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &other);
  ~Fixed();

  int getRawBits(void) const;
  void setRawBits(int const raw);
};
