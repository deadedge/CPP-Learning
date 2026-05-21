#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

int main()
{
    std::cout << "========== ARRAY TEST ==========\n";

    const AAnimal *animals[4];

    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();

    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();

    for (int i = 0; i < 4; i++)
        delete animals[i];

    std::cout << "\n========== DEEP COPY TEST ==========\n";

    Dog original;

    original.getBrain()->setIdea(0, "I want food");

    Dog copy(original);

    std::cout << "\nBefore change:\n";
    std::cout << "Original idea: "
              << original.getBrain()->getIdea(0) << std::endl;

    std::cout << "Copy idea: "
              << copy.getBrain()->getIdea(0) << std::endl;

    copy.getBrain()->setIdea(0, "I want sleep");

    std::cout << "\nAfter change:\n";
    std::cout << "Original idea: "
              << original.getBrain()->getIdea(0) << std::endl;

    std::cout << "Copy idea: "
              << copy.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n========== ASSIGNMENT TEST ==========\n";

    Cat cat1;
    Cat cat2;

    cat1.getBrain()->setIdea(0, "Catch mouse");

    cat2 = cat1;

    std::cout << "\nBefore change:\n";
    std::cout << "Cat1 idea: "
              << cat1.getBrain()->getIdea(0) << std::endl;

    std::cout << "Cat2 idea: "
              << cat2.getBrain()->getIdea(0) << std::endl;

    cat2.getBrain()->setIdea(0, "Sleep all day");

    std::cout << "\nAfter change:\n";
    std::cout << "Cat1 idea: "
              << cat1.getBrain()->getIdea(0) << std::endl;

    std::cout << "Cat2 idea: "
              << cat2.getBrain()->getIdea(0) << std::endl;

    return 0;
}