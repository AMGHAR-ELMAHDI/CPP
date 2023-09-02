#include<iostream>
#include<string>
#include<fstream>


int main(int ac, char **av)
{
    if(ac == 4)
    {
        // remove("filename.txt");
        std::string         line;
        size_t             index;
        std::string        find = av[2];
        std::string        replace = av[3];

        std::ifstream inn(av[1]);
        if (!inn.is_open()) {
            std::cout << "Error fd" << std::endl;
            return 0;
        }

        std::string str = av[1];
        std::ofstream MyFile(str + ".replace");
        if (!MyFile.is_open()) {
            std::cout << "Error fd" << std::endl;
            return 0;
        }
        while (std::getline(inn, line)) {
            index = 0;
            if(find.length() != 0 && replace.length() != 0) {
                while ((index = line.find(find, index)) != std::string::npos)
                    line = line.substr(0, index) + replace + line.substr(index + find.length());
            }
            MyFile << line << std::endl;
        }
        inn.close();
        MyFile.close();
    }
}
