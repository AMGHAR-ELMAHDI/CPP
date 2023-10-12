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
    //char 1 // int 2 // float 3 // double 4 // float or double 5 // error 6

//check after . if there is only digit and f
    int type = 0;

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
            if(str[i] == '.')
            {
                type = 5;
                int j = i;
                while(str[++j])
                {
                    if(std::isdigit(str[j]) == 0 && str[j] != 'f')
                    {
                        type = 6;
                        std::cout << "Error" << std::endl;
                        return;
                    }
                }
                break;
            }
        }
        if(type == 0)
        {
            size_t k;
            for (k = 0; k < str.length(); k++)
            {
                if(std::isdigit(str[k]) == 0 && str[k] != '-')
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

    if(type == 3)
    {
        int count = 0;
        for (size_t i = 0; i < str.length(); i++)
        {
            if(str[i] == 'f')
                count++;
        }
        if(count != 1)
            type = 6;
    }
	//------------------Cast to diffrent values---------------//
    if(type == 1)
        std::cout << "TYPE == CHAR" << std::endl;
    else if(type == 2)
        std::cout << "TYPE == INT" << std::endl;
    else if(type == 3)
        std::cout << "TYPE == FLOAT" << std::endl;
    else if(type == 4)
        std::cout << "TYPE == DOUBLE" << std::endl;
    else
        std::cout << "TYPE == STRING" << std::endl;
    castToDifferentValues(str, type);
}

int    checSpecialCases(std::string str)
{
    if(str.compare("nan") == 0 || str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0 || str.compare("+inf") == 0 || str.compare("-inf") == 0)
    {
        std::cout << "char : " << "impossible" << std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        if (str.compare("+inf") == 0 || str.compare("-inf") == 0 || str.compare("nan") == 0)
        {
            std::cout << "float : " << str + 'f' << std::endl;
            std::cout << "double : " << str << std::endl;
        }
        else if (str.compare("+inff") == 0 || str.compare("-inff") == 0 || str.compare("nanf") == 0)
        {
            std::cout << "float : " << str << std::endl;
            std::cout << "double : " << str.substr(0, str.length() - 1) << std::endl;
        }
        return(1);
    }
    return(0);
}

void    ScalarConverter::castToDifferentValues(std::string str, int  type)
{
    int printable = 0;
    char    out_char = 0;
    int     out_int = 0;
    float   out_float = 0;
    double  out_double = 0;

    std::stringstream stream(str);
    std::stringstream stream1(str.substr(0, str.length() - 1));

    if(checSpecialCases(str))
        return;

    const char *ww = str.c_str();
    int num = std::atoi(ww);
    if(num >= 32 && num < 127)
        printable = 1;
    
    switch (type)
    {
        case 1://char
            out_char  = str[0];
            out_int = static_cast <int>(out_char);
            out_float = static_cast <float>(out_char);
            out_double = static_cast <double>(out_char);

            std::cout << "char: " << out_char << std::endl;
            std::cout << "int: " << out_int << std::endl;
            std::cout << "float: " << out_float << ".0f" << std::endl;
            std::cout << "double: " << out_double << ".0" <<std::endl;
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

                    if(printable)
                    std::cout << "char: " << out_char << std::endl;
                else
                    std::cout << "char: " << "Non displayable" << std::endl;
                std::cout << "int: " << out_int << std::endl;
                std::cout << "float: " << out_float << ".0f" << std::endl;
                std::cout << "double: " << out_double << ".0" <<std::endl;
            }
            break;

            case 3://float
                if(!(stream1 >> out_float))
                    std::cout << "float Overflow Error" << std::endl;
                else
                {
                    out_float  = std::stof(str);
                    out_char = static_cast <char>(out_float);
                    out_int = static_cast <int>(out_float);
                    out_double = static_cast <double>(out_float);

                    if(printable)
                        std::cout << "char: " << out_char << std::endl;
                    else
                        std::cout << "char: " << "Non displayable" << std::endl;
                    std::cout << "int: " << out_int << std::endl;
                    std::cout << "float: " << out_float << ".0f" << std::endl;
                    std::cout << "double: " << out_double << ".0" <<std::endl;
                }
                break;

            case 4://double
                if(!(stream >> out_double))
                    std::cout << "double Overflow Error" << std::endl;
                else
                {
                    out_double  = std::stod(str);
                    out_char = static_cast <char>(out_double);
                    out_int = static_cast <int>(out_double);
                    out_float = static_cast <float>(out_double);

                    if(printable)
                        std::cout << "char: " << out_char << std::endl;
                    else
                        std::cout << "char: " << "Non displayable" << std::endl;
                    std::cout << "int: " << out_int << std::endl;
                    std::cout << "float: " << out_float << ".0f" << std::endl;
                    std::cout << "double: " << out_double << ".0" <<std::endl;
                }
                break;
        default:
            std::cout << "Error" << std::endl;
            break;
    }

}
