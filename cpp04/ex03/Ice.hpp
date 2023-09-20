/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:20:59 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/20 01:49:51 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include<iostream>
#include<string>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string const &type);
        Ice(const Ice &obj);
        std::string const &getType() const;
        void setType(const std::string);
        Ice &operator=(const Ice &other);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
        ~Ice();
};


// AMateria* MateriaSource::getMateria( std::string const & type )
// {
//     for (int i = 0; i < 4; i++)
//         if (materias[i] && materias[i]->getType() == type)
//             return materias[i];
//     return NULL;
// }

#endif