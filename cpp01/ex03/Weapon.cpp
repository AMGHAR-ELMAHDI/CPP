/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 05:32:27 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/02 23:01:34 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string newType)
{
    this->setType(newType);
    std::cout << this->type << " Weapon Constructor called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << this->type << " Weapon Destructor called" << std::endl;
}

std::string const &Weapon::getType(void)
{
    return this->type;
}

void Weapon::setType(std::string new_type)
{
    this->type = new_type;
}