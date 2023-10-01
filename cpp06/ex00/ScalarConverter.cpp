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
	std::cout << "inside: " << str << std::endl;
    //char 1 // int 2 // float 3 // double 4 // float or double = 5

    if(str.compare("nan") == 0 || str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0 || str.compare("+inf") == 0 || str.compare("-inf") == 0)
    {
        std::cout << "char: impossible"<< "Non displayable"<< std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }

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
            if(str[i] == '.')// check there is no second point
            {
                type = 5;
                break;
            }
        }
        if(type == 0)
            type = 2;
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
    
    std::cout << "type is: " << type << std::endl;
	
	//------------------Cast to diffrent values---------------//

    cast
}


void    ScalarConverter::castToDifferentValues(std::string str, int  type)
{

}






//f ate the end is float else is double  
//if there is no point its int
//32 > 127
//string ::string

/*
    case CHAR:
        _c = _str[0];
        _n = static_cast< int >( _c );
        _f = static_cast< float >( _c );
        _d = static_cast< double >( _c );
        break;
    case INT:
        _n = std::stoi( _str );
        _f = static_cast< float >( _n );
        _d = static_cast< double >( _n );
        _c = static_cast< char >( _n );
        break;
    case FLOAT:
        _f = std::stof( _str );
        _n = static_cast< int >( _f );
        _d = static_cast< double >( _f );
        _c = static_cast< char >( _f );
        break;
    case DOUBLE:
        _d = std::stod( _str );
        _n = static_cast< int >( _d );
        _f = static_cast< float >( _d );
        _c = static_cast< char >( _d );
*/