/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:20:59 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/22 19:06:17 by eamghar          ###   ########.fr       */
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
        virtual ~Ice();
};

#endif