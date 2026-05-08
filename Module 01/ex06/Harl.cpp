#include "Harl.hpp"
#include <iostream>
Harl::Harl() {};
Harl::~Harl() {};

void Harl::debug(void)
{
  std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
  std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
  std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::error(void)
{
  std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{

  switch (this->getLevel(level))
  {
  case 0:
    this->debug();
    this->info();
    this->warning();
    this->error();
    break;
  case 1:

    this->info();
    this->warning();
    this->error();
    break;
  case 2:

    this->warning();
    this->error();
    break;
  case 3:
    this->error();
    break;

  default:
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    break;
  }
}

int Harl::getLevel(std::string level)
{
  const std::string funcsName[4] = {
      "DEBUG",
      "INFO",
      "WARNING",
      "ERROR"};
  for (size_t i = 0; i < 4; i++)
  {
    if (funcsName[i] == level)
      return i;
  }
  return -1;
}