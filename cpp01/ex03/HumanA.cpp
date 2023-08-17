/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:00:12 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/17 02:18:06 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

// HumanA::HumanA() {};

HumanA::~HumanA()
{
    std::cout << this->name << "Destructor Called" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &wp) : name(name), weapon(wp) {};

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void    HumanA::setName(std::string newName)
{
    this->name = newName;
}

std::string HumanA::getName(void)
{
    return(this->name);
}
