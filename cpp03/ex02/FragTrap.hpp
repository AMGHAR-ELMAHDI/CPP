/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:57:01 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/30 21:05:35 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP

#include<iostream>
#include<string>
#include<fstream>
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &obj);
        ~FragTrap();
        void highFivesGuys(void);
};

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

FragTrap::FragTrap(const FragTrap &obj)
{
   std::cout << "Copy constructor Called " << std::endl;
   *this = obj;
}

void FragTrap::highFivesGuys(void)
{
   std::cout << "FragTrap H " << std::endl;
}


#endif
