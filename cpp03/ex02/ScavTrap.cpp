/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:46:21 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/07 21:29:04 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
    this->Name = "Scav";
    this->EnergyPoints = 50;
    this->HitPoints = 100;
    this->AttackDamage = 20;
};

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

ScavTrap::ScavTrap(const ScavTrap &obj)
{
   std::cout << "ScavTrap Copy constructor Called " << std::endl;
   *this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->EnergyPoints == 0 || this->HitPoints == 0)
        return;
    std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    this->EnergyPoints--;
}

