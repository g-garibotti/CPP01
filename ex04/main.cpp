#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " filename " << "from " << "to" << std::endl;
        return 1;
    }

    const std::string from = argv[2];
    const std::string to = argv[3];
    std::ifstream inputFile(argv[1]);
    if (!inputFile)
    {
        std::cerr << "Error: could not open file" << std::endl;
        return 1;
    }
    std::string temp;
    std::string line;
    if (std::getline(inputFile, line))
    {
        temp += line;
        while (std::getline(inputFile, line))
            temp += '\n' + line;
    }
    inputFile.close();
    std::string result;
    size_t i = 0;
    while (i < temp.length())
    {
        if (i <= temp.length() - from.length() && temp.substr(i, from.length()) == from)
        {
            result += to;
            i += from.length();
        }
        else
        {
            result += temp[i];
            i++;
        }
    }
    std::ofstream outputFile("output.txt");
    if (!outputFile)
    {
        std::cerr << "Error: could not create output file" << std::endl;
        return 1;
    }
    outputFile << result;
    outputFile.close();  
    return 0;
}
