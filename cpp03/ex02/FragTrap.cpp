/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:58:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/30 20:58:13 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){};

FragTrap::FragTrap(std::string name)
{
    this->Name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}

// FragTrap::FragTrap(const FragTrap &obj)
// {
//    std::cout << "Copy constructor Called " << std::endl;
//    *this = obj;
// }

void FragTrap::highFivesGuys(void)
{
   std::cout << "FragTrap H " << std::endl;
}
