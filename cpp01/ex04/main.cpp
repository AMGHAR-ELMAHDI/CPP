/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 00:03:44 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/15 15:55:39 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include<fstream>


int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::string         line;
        size_t             index;
        std::string        find = av[2];
        std::string        replace = av[3];

        std::ifstream inn(av[1]);
        if (!inn.is_open()) {
            std::cout << "Error fd in" << std::endl;
            return 0;
        }

        std::string str = av[1];
        std::ofstream myFile(str + ".replace");
        if (!myFile.is_open()) {
            std::cout << "Error fd out" << std::endl;
            return 0;
        }
        while (std::getline(inn, line))
        {
            index = 0;
            if((find.length() != 0 && replace.length() != 0))
            {
                while ((index = line.find(find, index)) != std::string::npos) {
                    line = line.substr(0, index) + replace + line.substr(index + find.length());
                    index += replace.length();
                }
            }
            myFile << line;
            if (!inn.eof())
                myFile << "" << std::endl;
        }
        inn.close();
        myFile.close();
    }
}
