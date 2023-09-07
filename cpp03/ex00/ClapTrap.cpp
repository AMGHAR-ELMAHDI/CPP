/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:32:25 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/07 21:22:03 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor Called" << std::endl;
    this->Name = "Clap";
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
};

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor Called" << std::endl;
    this->Name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
   std::cout << "ClapTrap Copy constructor Called " << std::endl;
   *this = obj;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->EnergyPoints == 0 || this->HitPoints == 0)
        return;
    std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    this->EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->EnergyPoints > 0 && this->HitPoints >0)
    {
        std::cout << "ClapTrap " << this->Name << " took " << amount << " points of damage!" << std::endl;
        if(amount > this->HitPoints)
            this->HitPoints = 0;
        else
            this->HitPoints -= amount;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        std::cout << "ClapTrap " << this->Name << " got repaired " << amount << " points of Hit Points!" << std::endl;
        this->HitPoints += amount;
        this->EnergyPoints--;
    }
}

//--- Name setter and getter ---//
std::string ClapTrap::getName()
{
    return(this->Name);
}

void    ClapTrap::setName(std::string newName)
{
    this->Name = newName;
}

//--- Hit Points setter and getter ---//

unsigned int ClapTrap::getHitPoints(void)
{
    return(this->HitPoints);
}
void ClapTrap::setHitPoints(unsigned int value)
{
    this->HitPoints = value;   
}

//--- EnergyPoints setter and getter ---//
unsigned int ClapTrap::getEnergyPoints(void)
{
    return(this->EnergyPoints);
}
void ClapTrap::setEnergyPoints(unsigned int value)
{
    this->EnergyPoints = value;    
}
//--- AttackDamage setter and getter ---//
unsigned int ClapTrap::getAttackDamage(void)
{
    return(this->AttackDamage);
}

void ClapTrap::setAttackDamage(unsigned int value)
{
    this->AttackDamage = value;
}
