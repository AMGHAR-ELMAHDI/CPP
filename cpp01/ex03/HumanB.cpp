/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:32:05 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/06 14:16:59 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {};

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
    // std::cout << this->name << " Constructor Called" << std::endl;
}
HumanB::~HumanB()
{
    // std::cout << this->name << " Destructor Called" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

std::string HumanB::getName(void)
{
    return(this->name);
}

void    HumanB::setWeapon(Weapon &wp)
{
    this->weapon = &wp;
}