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
    //char 1 // int 2 // float 3 // double 4 // float or double 5 // string 6

    int type = 0;
    int printable = 0;
	if(str.length() == 1 && std::isalpha(str[0]) && std::isprint(str[0]))
	{
		int num = str[0];
		if(num > 32 && num < 127)
			type = 1;
	}

    if(type == 0)
    {
        for (size_t i = 0; i < str.length() ; i++)
        {
            if(str[i] == '.' && str[i + 1] && str[i + 1] != '.')// check there is no second point
            {
                type = 5;
                break;
            }
        }
        if(type == 0)
        {
            size_t k;
            for (k = 0; k < str.length(); k++)
            {
                if(std::isdigit(str[k]) == 0)
                    break;
            }
            if(k == str.length())
                type = 2;
            else
                type = 6;
        }
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

	//------------------Cast to diffrent values---------------//
    if(type == 1)
        puts("TYPE == CHAR");
    else if(type == 2)
        puts("TYPE == INT");
    else if(type == 3)
        puts("TYPE == FLOAT");
    else if(type == 4)
        puts("TYPE == DOUBLE");
    castToDifferentValues(str, type);
}


void    ScalarConverter::castToDifferentValues(std::string str, int  type)
{
    if(str.compare("nan") == 0 || str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0 || str.compare("+inf") == 0 || str.compare("-inf") == 0)
    {
        std::cout << "char: impossible"<< "Non displayable"<< std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }

    char    out_char = 0;
    int     out_int = 0;
    float   out_float = 0;
    double  out_double = 0;
    
    std::stringstream stream(str);
    
    switch (type)
    {
        case 1://char
            out_char  = str[0];
            out_int = static_cast <int>(out_char);
            out_float = static_cast <float>(out_char);
            out_double = static_cast <double>(out_char);

            std::cout << "char: " << out_char << std::endl;
            std::cout << "int: " << out_int << std::endl;
            std::cout << "float: " << out_float << std::endl;
            std::cout << "double: " << out_double << std::endl;
            break;

        case 2://int
            if(!(stream >> out_int))
                std::cout << "int Overflow Error" << std::endl;
            else
            {
                out_int  = std::stoi(str);
                out_char = static_cast <char>(out_int);
                out_float = static_cast <float>(out_int);
                out_double = static_cast <double>(out_int);

                std::cout << "char: " << out_char << std::endl;
                std::cout << "int: " << out_int << std::endl;
                std::cout << "float: " << out_float << std::endl;
                std::cout << "double: " << out_double << std::endl;
            }
            break;

            case 3://float
                // if(!(stream >> out_float))
                //     std::cout << "float Overflow Error" << std::endl;
                // else
                // {
                    out_float  = std::stof(str);
                    out_char = static_cast <char>(out_float);
                    out_int = static_cast <int>(out_float);
                    out_double = static_cast <double>(out_float);

                    std::cout << "char: " << out_char << std::endl;
                    std::cout << "int: " << out_int << std::endl;
                    std::cout << "float: " << out_float << std::endl;
                    std::cout << "double: " << out_double << std::endl;
                // }
                break;

            case 4://double
                // if(!(stream >> out_double))
                //     std::cout << "double Overflow Error" << std::endl;
                // else
                // {
                    out_double  = std::stod(str);
                    out_char = static_cast <char>(out_double);
                    out_int = static_cast <int>(out_double);
                    out_float = static_cast <float>(out_double);

                    std::cout << "char: " << out_char << std::endl;
                    std::cout << "int: " << out_int << std::endl;
                    std::cout << "float: " << out_float << std::endl;
                    std::cout << "double: " << out_double << std::endl;
                // }
                break;
        default:
            break;
    }

}
