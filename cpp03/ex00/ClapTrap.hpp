/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:31:29 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/30 17:21:37 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include<iostream>
#include<string>
#include<fstream>

class ClapTrap
{
    private:
        std::string     Name;
        unsigned int    HitPoints;
        unsigned int    EnergyPoints;
        unsigned int    AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        //--- Name setter and getter ---//
        std::string getName(void);
        void setName(std::string newName);
        //--- Hit Points setter and getter ---//
        unsigned int getHitPoints(void);
        void setHitPoints(unsigned int value);
        //--- EnergyPoints setter and getter ---//
        unsigned int getEnergyPoints(void);
        void setEnergyPoints(unsigned int value);
        //--- AttackDamage setter and getter ---//
        unsigned int getAttackDamage(void);
        void setAttackDamage(unsigned int value);
};

#endif
