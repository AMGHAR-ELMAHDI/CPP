#include<iostream>
#include<string>
#include<fstream>


int main(int ac, char **av)
{
    if(ac == 3)
    {
        std::string     line;
        std::string        find = av[2];
        std::string        replace= av[3];
        std::ifstream inn(av[1]);
        size_t             index;
        std::ofstream MyFile("filename.txt");

        while (std::getline(inn, line))
        {
            index = 0;
            if(find.length() != 0 && replace.length() != 0)
            {
                while ((index = line.find(av[2])) != std::string::npos)
                    line = line.substr(0, index) + av[3] + line.substr(index + replace.length());
            }
            MyFile << line << std::endl;
        }
    }
}
