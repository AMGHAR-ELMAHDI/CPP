/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:23:54 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/03 02:05:59 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Zombie.hpp"

int main( void )
{
    std::cout << "Creating zombie on the stack." << std::endl;
    Zombie zombi1("CheesyStack");
    
    std::cout << "Creating zombie on the heap." << std::endl;
    Zombie *zombi2 = newZombie("CheesyHeap");
    zombi2->announce();
    delete zombi2;

    std::cout << "Calling randomChump()." << std::endl;
    randomChump("randZ");
    return 0;
}
