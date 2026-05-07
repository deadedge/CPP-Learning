#include <iostream>
#include <fstream>
#include <cstdlib>
void init_files(const std::string &fileName, std::fstream &file, std::ofstream &replaceFile)
{

    file.open(fileName.c_str(), std::ios::in);
    if (!file.is_open())
    {
        std::cout << "Failure to open the file! Veryfi if the file exists" << std::endl;
        std::exit(1);
    }

    replaceFile.open((fileName + ".replace").c_str());
    if (!replaceFile.is_open())
    {
        file.close();
        std::cout << "Failure to create the file!" << std::endl;
        std::exit(1);
    }
}
std::string doReplace(std::string &line, std::string s1, std::string s2)
{
    size_t findedIndex = line.find(s1);
    if (findedIndex == std::string::npos)
        return line;
    while (findedIndex != std::string::npos)
    {
        line.erase(findedIndex, s1.length());
        line.insert(findedIndex, s2);
        findedIndex = line.find(s1, findedIndex + s2.length());
    }

    return line;
}

void startReplace(std::fstream &file, std::ofstream &outFile, std::string s1, std::string s2)
{

    std::string line;

    while (std::getline(file, line))
    {
        doReplace(line, s1, s2);
        outFile << line << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        std::cout << "Input Invalido!" << std::endl;
        return (1);
    }

    const std::string fileName = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];

    if (fileName.empty())
    {
        std::cout << "the file needs a valid name!" << std::endl;
        return (1);
    }

    std::fstream file;
    std::ofstream replaceFile;
    init_files(fileName, file, replaceFile);
    startReplace(file, replaceFile, s1, s2);

    replaceFile.close();
    file.close();
    return 0;
}
