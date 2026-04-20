#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "PhoneBook.hpp"
#include "utils.hpp"
void exit_prog(std::string message)
{
  std::cout << message << std::endl;
  exit(0);
}

bool drawInsert(PhoneBook &phonebook)
{
  system("clear");
  std::string input;
  Contact newContact;
  std::cout << "Insert Your First Name" << std::endl;
  std::getline(std::cin, input);
  if (!newContact.setFirstName(input))
    return false;
  std::cout << "Insert Your Last Name" << std::endl;
  std::getline(std::cin, input);
  if (!newContact.setLastName(input))
    return false;
  std::cout << "Insert Your Nick Name" << std::endl;
  std::getline(std::cin, input);
  if (!newContact.setNickname(input))
    return false;
  std::cout << "Insert Your Phone Number" << std::endl;
  std::getline(std::cin, input);
  if (!newContact.setPhoneNumber(input))
    return false;
  std::cout << "Insert Your Dark Secret" << std::endl;
  std::getline(std::cin, input);
  if (!newContact.setDarkSecret(input))
    return false;
  phonebook.AddContact(newContact);
  return true;
}

void drawSearch(PhoneBook &phonebook)
{
  while (1)
  {
    system("clear");
    std::string input;
    Contact *contact = phonebook.getAllContacts();
    if (!contact || contact[0].getFirstName().empty())
      break;
    std::cout << std::right
              << std::setw(10) << "Index"
              << "|"
              << std::setw(10) << "First Name"
              << "|"
              << std::setw(10) << "Last Name"
              << "|"
              << std::setw(10) << "Nickname"
              << "|"
              << std::endl;
    std::cout << std::setfill('-') << std::setw(44) << "" << std::endl;
    std::cout << std::setfill(' ');
    for (size_t i = 0; i < 8; i++)
    {
      Contact contact_selected = contact[i];
      if (contact_selected.getFirstName().empty())
        break;
      std::cout << std::right
                << std::setw(10) << i
                << "|"
                << std::setw(10) << formatText(contact_selected.getFirstName())
                << "|"
                << std::setw(10) << formatText(contact_selected.getLastName())
                << "|"
                << std::setw(10) << formatText(contact_selected.getNickname())
                << "|"
                << std::endl;
    }

    std::cout << "\nSelect: ";
    std::getline(std::cin, input);
    if (!isValidNumber(input))
      continue;
    int number = std::atoi(input.c_str());
    if (number < 0 || number > 8)
      continue;
    if (contact[number].getFirstName().empty())
      continue;

    system("clear");

    std::cout << std::right
              << std::setw(10) << "Index"
              << "|"
              << std::setw(10) << "First Name"
              << "|"
              << std::setw(10) << "Last Name"
              << "|"
              << std::setw(10) << "Nickname"
              << "|"
              << std::setw(10) << "Number"
              << "|"
              << std::setw(10) << "Secret"
              << "|"
              << std::endl;
    std::cout << std::setfill('-') << std::setw(66) << "" << std::endl;
    std::cout << std::setfill(' ');

    std::cout << std::right
              << std::setw(10) << number
              << "|"
              << std::setw(10) << formatText(contact[number].getFirstName())
              << "|"
              << std::setw(10) << formatText(contact[number].getLastName())
              << "|"
              << std::setw(10) << formatText(contact[number].getNickname())
              << "|"
              << std::setw(10) << formatText(contact[number].getPhoneNumber())
              << "|"
              << std::setw(10) << formatText(contact[number].getDarkSecret())
              << "|"
              << std::endl;

    std::cout << "\nPress Enter to continue: " << std::endl;

    std::getline(std::cin, input);
    break;
  }
}

// void testData(PhoneBook &phonebook)
// {
//   Contact newContact;

//   newContact.setFirstName("teste");
//   newContact.setLastName("last test");
//   newContact.setNickname("nick testaaaaaaaaaaaaaaaa");
//   newContact.setPhoneNumber("123123123");
//   newContact.setDarkSecret("dark test");

//   phonebook.AddContact(newContact);
//   phonebook.AddContact(newContact);
// }

int main()
{
  PhoneBook phoneBook;
  std::string option;

  system("clear");
  std::cout << "Welcome to the best phonebook manager" << std::endl;
  //testData(phoneBook);
  while (1)
  {
    std::cout << "Please selecte one of the avaliable options" << std::endl;
    std::cout << "1: INSERT" << std::endl;
    std::cout << "2: SEARCH" << std::endl;
    std::cout << "3: EXIT" << std::endl;
    std::getline(std::cin, option);
    if (option == "INSERT" || option == "1")
    {
      if (!drawInsert(phoneBook))
        std::cout << "Invalid Input" << std::endl;
    }
    else if (option == "SEARCH" || option == "2")
      drawSearch(phoneBook);
    else if (option == "EXIT" || option == "3")
    {
      std::cout << "BYEE!!" << std::endl;
      break;
    }
    system("clear");
  }

  return 0;
}