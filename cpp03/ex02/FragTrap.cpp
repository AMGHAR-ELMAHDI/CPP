/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:58:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/07 21:45:56 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    this->Name = "Frag";
    this->EnergyPoints = 100;
    this->HitPoints = 100;
    this->AttackDamage = 30;
};

FragTrap::FragTrap(std::string scavName)
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    this->Name = scavName;
    this->EnergyPoints = 100;
    this->HitPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Default Destructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
   std::cout << "FragTrap Copy constructor Called " << std::endl;
   *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

void FragTrap::highFive(void)
{
   std::cout << "FragTrap requests a High five :)" << std::endl;
}
