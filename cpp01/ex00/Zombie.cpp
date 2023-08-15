/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:55:35 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/15 16:36:35 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ...\n";
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}
Zombie::Zombie() {};

Zombie::~Zombie()
{
    std::cout << this->name << " Destructor called\n";       
}

Zombie::Zombie(std::string name) : name(name) {};
