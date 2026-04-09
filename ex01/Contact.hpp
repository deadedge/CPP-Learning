#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class Contact
{
private:
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _phoneNumber;
  std::string _darkSecret;

  bool isValidNumber(std::string number) const;

public:
  Contact();
  ~Contact();

  std::string getFirstName() const;
  std::string getLastName() const;
  std::string getNickname() const;
  std::string getPhoneNumber() const;
  std::string getDarkSecret() const;

  bool setFirstName(std::string name);
  bool setLastName(std::string lastName);
  bool setNickname(std::string nickName);
  bool setPhoneNumber(std::string phoneNumber);
  bool setDarkSecret(std::string darkSecret);
};

#endif
