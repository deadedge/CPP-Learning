#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
  Contact _contactsList[8];
  size_t _index;

public:
  PhoneBook();
  ~PhoneBook();

  void AddContact(const Contact &newContact);
  Contact *getAllContacts();
  Contact GetContactByIndex(size_t index);
};

#endif
