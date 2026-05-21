#pragma once
#include <string>

class Brain
{
public:
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    virtual ~Brain();

    std::string &getIdea(size_t index);
    void setIdea(int index, const std::string &idea);

private:
    std::string ideas[100];
};