/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:00:24 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/16 19:12:48 by eamghar          ###   ########.fr       */
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
        Weapon      Weapon;
        std::string name;
    public:
        HumanA();
        ~HumanA();
        void    attack(void);
};




#endif