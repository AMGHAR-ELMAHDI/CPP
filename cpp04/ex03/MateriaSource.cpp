/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 01:09:53 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/20 02:07:54 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource Default Constructor Called" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        this->Materials[i] = NULL;
    }   
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor Called" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        // if(this->Materials[i])
        //     delete this->Materials[i];
    }
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
        for (size_t i = 0; i < 4; i++)
        {
            this->Materials[i] = other.Materials[i];
        }
    }
    return *this;
};


void MateriaSource::learnMateria(AMateria *newMateria)
{
    for (size_t i = 0; i < 4; i++)
    {
        if(this->Materials[i] == NULL)
        {
            this->Materials[i] = newMateria;
            std::cout << "MateriaSource learned " << newMateria->getType() << std::endl;
            return;
        }
    }
    std::cout << "MateriaSource can't learn " << newMateria->getType() << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < 4; i++)
    {
        if(this->Materials[i] && this->Materials[i]->getType() == type)
            return(this->Materials[i]->clone());
    }
    return(NULL);
    
}

// void MateriaSource::getMateria(std::string const & type )
// {
// }
