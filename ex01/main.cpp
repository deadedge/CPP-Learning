#include <iostream>
#include <stdlib.h>

#include "PhoneBook.hpp"

void exit_prog(std::string message)
{
  std::cout << message << std::endl;
  exit(0);
}

void drawInsert(PhoneBook &phonebook)
{
  system("clear");
  std::string input;
  Contact newContact;
  std::cout << "Insert Your First Name" << std::endl;
  std::getline(std::cin, input);
  if (!newContact.setFirstName(input))
    return;
}

int main()
{
  PhoneBook phoneBook;
  std::string option;

  system("clear");
  std::cout << "Welcome to the best phonebook manager" << std::endl;

  while (1)
  {
    std::cout << "Please selecte one of the avaliable options" << std::endl;
    std::cout << "1: INSERT" << std::endl;
    std::cout << "2: SEARCH" << std::endl;
    std::cout << "3: EXIT" << std::endl;
    std::getline(std::cin, option);
    if (option == "INSERT")
    {
      drawInsert(phoneBook);
    }
    else if (option == "SEARCH")
    {
    }
    else if (option == "EXIT")
    {
      std::cout << "BYEE!!" << std::endl;
      break;
    }
    system("clear");
  }

  return 0;
}