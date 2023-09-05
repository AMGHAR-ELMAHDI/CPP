/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:44:24 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/02 05:44:25 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria Constructor Called" << std::endl;
    this->type = type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor Called" << std::endl;
}

std::string const& AMateria::getType() const
{
    return(this->type);
}

AMateria* AMateria::clone()const {};


