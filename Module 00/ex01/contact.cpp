#include "Contact.hpp"
#include "utils.hpp"
Contact::Contact() {}
Contact::~Contact() {}

std::string Contact::getFirstName() const { return _firstName; };
std::string Contact::getLastName() const { return _lastName; };
std::string Contact::getNickname() const { return _nickname; };
std::string Contact::getPhoneNumber() const { return _phoneNumber; };
std::string Contact::getDarkSecret() const { return _darkSecret; };

bool Contact::setFirstName(std::string firstName)
{
  if (firstName.empty())
    return false;
  _firstName = firstName;
  return true;
}
bool Contact::setLastName(std::string lastName)
{
  if (lastName.empty())
    return false;
  _lastName = lastName;
  return true;
}

bool Contact::setNickname(std::string nickName)
{
  if (nickName.empty())
    return false;
  _nickname = nickName;
  return true;
}

bool Contact::setPhoneNumber(std::string phoneNumber)
{
  if (phoneNumber.empty() || !isValidNumber(phoneNumber) || phoneNumber.length() < 9)
    return false;
  _phoneNumber = phoneNumber;
  return true;
}

bool Contact::setDarkSecret(std::string darkSecret)
{
  if (darkSecret.empty())
    return false;
  _darkSecret = darkSecret;
  return true;
}
