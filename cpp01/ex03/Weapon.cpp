/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 05:32:27 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/16 19:05:54 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << this->type <<"Constructor called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << this->type <<"Destructor called" << std::endl;
}
std::string const &Weapon::getType(void)
{
    return(this->type);
}

void    Weapon::setType(std::string new_type)
{
    this->type = new_type;
}
