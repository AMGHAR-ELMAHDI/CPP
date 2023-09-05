/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:32:55 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/04 21:29:29 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "Weapon.hpp"


class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void    attack(void);
        void    setWeapon(Weapon &wp);
        std::string getName(void);
};




#endif