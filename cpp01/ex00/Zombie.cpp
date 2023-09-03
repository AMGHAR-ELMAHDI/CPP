/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:55:35 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/03 02:16:38 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

std::string  Zombie::getName()
{
    return(this->name);
}

Zombie::Zombie() {};

Zombie::~Zombie()
{
    std::cout << this->name << " Destructor called" << std::endl;       
}

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << this->name << " Constructor called" << std::endl;
}
