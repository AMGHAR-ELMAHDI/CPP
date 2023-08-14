/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:55:35 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/14 01:44:55 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << this->name <<"BraiiiiiiinnnzzzZ...\n";
}

void    Zombie::setName(std::string namee)
{
    this->name = name;
}

Zombie* newZombie( std::string name )
{
    Zombie newZ;

    newZ.setName(name);
    return(&newZ);
}

void randomChump( std::string name)
{
    newZombie(name)->announce();
}
