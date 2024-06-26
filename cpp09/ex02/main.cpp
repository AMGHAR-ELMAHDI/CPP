/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/27 22:06:39 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if(ac >= 2)
    {
        PmergeMe            a;
        PmergeMeDeque       b;

        if(a.parseInput(av, ac - 1) || b.parseInput(av, ac - 1))
            std::cout << "Error" << std::endl;
    }
    else
        std::cout << "Wrong Number Of Arguments" << std::endl;
    return(0);
}
