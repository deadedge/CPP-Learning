#include <iostream>

int main(int argc, char const *argv[])
{
  (void)argv;
  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

  for (int i = 1; i < argc; i++)
  {
    std::string content = argv[i];
    for (size_t i = 0; i < content.length(); i++)
    {
      std::cout << (char)std::toupper(content[i]);
    }
  }
  std::cout << std::endl;
  return 0;
}