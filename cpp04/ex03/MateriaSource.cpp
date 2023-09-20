/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 01:09:53 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/20 01:20:09 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource Default Constructor Called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor Called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    std::cout << "MateriaSource Copy constructor Called " << std::endl;
    *this = obj;
};

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "MateriaSource Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        //to add later
    }
    return *this;
};


void MateriaSource::learnMateria(AMateria*)
{
    
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    
}
