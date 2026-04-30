#include <string>
#include <iostream>

int main()
{
    std::string text = "HI THIS IS BRAIN";
    std::string &stringREF = text;
    std::string *stringPTR = &text;

    std::cout << &text << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "\n"
              << std::endl;

    std::cout << text << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}