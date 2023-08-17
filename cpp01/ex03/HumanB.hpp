/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:32:55 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/17 02:27:35 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
#define HUMANB

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Weapon.hpp"


class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        // HumanB();
        HumanB(std::string name);
        ~HumanB();
        void    attack(void);
        void    setName(std::string newName);
        void    setWeapon(std::string *wp);
        std::string getName(void);
};




#endif