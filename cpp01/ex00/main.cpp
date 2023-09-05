/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:23:54 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/04 21:35:56 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    std::cout << "Creating zombie on the stack." << std::endl;
    Zombie zombi1("CheesyStack");
    
    std::cout << "Creating zombie on the heap." << std::endl;
    Zombie *zombie2 = newZombie("CheesyHeap");
    if(zombie2)
    {
        zombie2->announce();
        delete zombie2;
    }
    else
    {
        std::cout << "Can't allocate zombie2" << std::endl;
        return(1);
    }

    std::cout << "Calling randomChump()." << std::endl;
    randomChump("randZ");
    return 0;
}
