#include<iostream>
#include<string>
#include<fstream>


int main(int ac, char **av)
{
    if(ac == 4)
    {
        remove("filename.txt");
        std::string         line;
        size_t             index;
        std::string        find = av[2];
        std::string        replace= av[3];

        std::ifstream inn(av[1]);
        std::ofstream MyFile("filename.txt");

        while (std::getline(inn, line))
        {
            index = 0;
            if(find.length() != 0 && replace.length() != 0)
                while ((index = line.find(find)) != std::string::npos)
                    line = line.substr(0, index) + replace + line.substr(index + replace.length());
            MyFile << line << std::endl;
        }
    }
}
