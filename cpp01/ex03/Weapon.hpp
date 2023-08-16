/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 05:34:25 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/16 19:01:08 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON

#include <iostream>
#include <cstdlib>
#include <iomanip>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(/* args */);
        ~Weapon();
        std::string const &Weapon::getType(void);
        void        setType(std::string);
};


#endif
