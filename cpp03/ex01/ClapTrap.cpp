/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:32:25 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/30 17:27:23 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){};

ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
   std::cout << "Copy constructor Called " << std::endl;
   *this = obj;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default Destructor Called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
        this->EnergyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->Name << " took " << amount << " points of damage!" << std::endl;
    this->HitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->Name << " got repaired " << amount << " points of Hit Points!" << std::endl;
        this->HitPoints += amount;
    }
}

//------------Setter And Getters ---------------------//

std::string ClapTrap::getName()
{
    return(this->Name);
}

void    ClapTrap::setName(std::string newName)
{
    this->Name = newName;
}

unsigned int ClapTrap::getHitPoints(void)
{
    return(this->HitPoints);
}
void ClapTrap::setHitPoints(unsigned int value)
{
    this->HitPoints = value;   
}

unsigned int ClapTrap::getEnergyPoints(void)
{
    return(this->EnergyPoints);
}
void ClapTrap::setEnergyPoints(unsigned int value)
{
    this->EnergyPoints = value;    
}

unsigned int ClapTrap::getAttackDamage(void)
{
    return(this->AttackDamage);
}

void ClapTrap::setAttackDamage(unsigned int value)
{
    this->AttackDamage = value;
}
