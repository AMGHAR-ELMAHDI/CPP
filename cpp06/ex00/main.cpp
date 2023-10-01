/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/01 17:40:14 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        std::string ex = av[1];
        ScalarConverter::convert(ex);
    }
    return(0);
}
