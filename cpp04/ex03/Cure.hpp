/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:20:59 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/22 18:53:50 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include<iostream>
#include<string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(std::string const &type);
        Cure(const Cure &obj);
        std::string const &getType() const;
        void setType(const std::string);
        Cure &operator=(const Cure &other);
        virtual void use(ICharacter& target);
        virtual AMateria*   clone() const;
       virtual ~Cure();
};

#endif