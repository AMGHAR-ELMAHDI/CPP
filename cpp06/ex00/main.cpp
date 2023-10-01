/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/01 17:08:00 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        char    out_char = 0;
        int     out_int = 0;
        float   out_float = 0;
        double  out_double = 0;
        
        std::string ex = av[1];
        std::stringstream stream(ex);
        
        if(!(stream >> out_int))
        {
            std::cout << "Overflow Error" << std::endl;
        }
        else
        {
            out_int  = std::stoi(ex);
	        out_char = static_cast <char>(out_int);
	        out_float = static_cast <float>(out_int);
	        out_double = static_cast <double>(out_int);
            
            std::cout << "char: " << out_char << std::endl;
            std::cout << "int: " << out_int << std::endl;
            std::cout << "float: " << out_float << std::endl;
            std::cout << "double: " << out_double << std::endl;
        }
        std::cout << "----------------------------------" << std::endl;
        // ScalarConverter::convert(ex);
    
    }
    return(0);
}
