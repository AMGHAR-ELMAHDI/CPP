/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 05:34:25 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/02 22:57:45 by eamghar          ###   ########.fr       */
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
        Weapon();
        Weapon(std::string newType);
        ~Weapon();
        std::string const &getType(void);
        void    setType(std::string new_type);
};


#endif
