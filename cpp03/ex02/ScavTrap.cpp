/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:46:21 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/30 18:59:03 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){};

ScavTrap::ScavTrap(std::string scavName)
{
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
    this->Name = scavName;
    this->EnergyPoints = 50;
    this->HitPoints = 100;
    this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Default Destructor Called" << std::endl;
}

// ScavTrap::ScavTrap(const ScavTrap &obj)
// {
//    std::cout << "ScavTrap Copy constructor Called " << std::endl;
//    *this = obj;
// }

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->EnergyPoints > 0)
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
        this->EnergyPoints--;
    }
}

