#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0) {}
PhoneBook::~PhoneBook() {}
void PhoneBook::AddContact(const Contact &newContact)
{
  _contactsList[_index] = newContact;
  _index = (_index + 1) % 8;
  return;
}

Contact *PhoneBook::getAllContacts()
{
  return _contactsList;
}
