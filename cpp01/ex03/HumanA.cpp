/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:00:12 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/03 02:28:49 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::~HumanA()
{
    // std::cout << this->name << "Destructor Called" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &wp) : name(name), weapon(wp)
{
    // std::cout << this->name << "Constructor Called" << std::endl;
}

void    HumanA::attack(void)
{
    if(this->weapon.getType() != "")
        std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
    else
        std::cout << this->name << " doesn't have a weapon to attack." << std::endl;
}

void    HumanA::setName(std::string newName)
{
    this->name = newName;
}

std::string HumanA::getName(void)
{
    return(this->name);
}
