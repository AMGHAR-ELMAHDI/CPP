/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:44:24 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/17 09:02:38 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria Default Constructor Called" << std::endl;
    this->type = "AMateria";
}

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

void AMateria::setType(const std::string newStr)
{
    this->type = newStr;
};

AMateria* AMateria::clone()const {};


AMateria::AMateria(const AMateria &obj)
{
    std::cout << "AMateria Copy constructor Called " << std::endl;
    *this = obj;
};

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "ClapTrap Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
};

