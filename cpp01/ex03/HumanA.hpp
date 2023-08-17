/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:00:24 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/17 02:21:00 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
#define HUMANA

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon      &weapon;
    public:
        // HumanA();
        HumanA(std::string namee, Weapon &wp);
        ~HumanA();
        void    attack(void);
        void    setName(std::string newName);
        std::string getName(void);
};

#endif