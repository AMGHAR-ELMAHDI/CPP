/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:35:15 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 13:46:52 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
   std::cout << "ScalarConverter Copy constructor Called " << std::endl;
   *this = obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    std::cout << "ScalarConverter Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        (void)other;
    }
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter Destructor called" << std::endl;
}


void    ScalarConverter::convert(std::string &str)
{
    //char 1 // int 2 // float 3 // double 4 // float or double = 5

    if(str.compare("nan") == 0)
    {
        std::cout << "char: impossible"<< "Non displayable"<< std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }


    int type = 0;
    int printable = 0;
    for (size_t i = 0; i < str.length() ; i++)
    {
        if(str.length() == 1)
        {
            type = 1;
            break;
        }
    }

    if(type == 0)
    {
        for (size_t i = 0; i < str.length() ; i++)
        {
            if(str[i] == '.')// check there is no second point
            {
                type = 5;
                break;
            }
        }
        if(type == 0)
            type = 5;
        else
        {
            if(str[str.length() - 1] == 'f')
                type = 3;
            else
                type = 4;
        }
    }
    else
        if(std::isprint(str[0]) == 1)
            printable = 1;
    
    std::stringstream   ss(str);

    if(type == 1)
    {
        char    out;
        int     out1;
        float   out2;
        double  out3;
        if (!(ss >> out) || printable == 0)
            std::cout << "char: "<< "Non displayable"<< std::endl;
        std::cout << "int: " << out1 << std::endl;
        std::cout << "float: " << out2 << std::endl;
        std::cout << "double: " << out3 << std::endl;
    }
    std::cout << type << std::endl;
}

//f ate the end is float else is double  
//if there is no point its int
//32 > 127
//string ::string