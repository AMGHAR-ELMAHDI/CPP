/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/21 18:18:04 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        BitcoinExchange     a;
        
        if(a.parseDataFile() == 1 || a.parseInputFile(av[1]) == 1)
            return(std::cout << "Input File Error" << std::endl, 1);
    }
    else
        std::cout << "Wrong Number Of Arguments" << std::endl;
    return(0);
}
