
#include "Brain.hpp"
#include <iostream>
Brain::Brain()
{
    std::cout << "Brain Contructor was called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain Copy Contructor was called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain Copy Assign was called" << std::endl;
    if (this != &other)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor was called" << std::endl;
}

std::string &Brain::getIdea(size_t index)
{
    return this->ideas[index];
}

void Brain::setIdea(int index, const std::string &idea)
{
    this->ideas[index] = idea;
}