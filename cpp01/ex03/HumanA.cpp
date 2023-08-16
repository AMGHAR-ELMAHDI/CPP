/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:00:12 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/16 19:13:35 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA()
{
    std::cout << this->name << "Constructor Called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->name << "Destructor Called" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->Weapon << std::endl;
}
