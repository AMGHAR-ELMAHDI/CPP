/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:44:29 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/17 08:58:24 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>
#include<string>

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(const AMateria &obj);
        std::string const &getType() const;
        void setType(const std::string);
        AMateria &operator=(const AMateria &other);
        virtual AMateria* clone() const = 0;
        // virtual void use(ICharacter& target);
        ~AMateria();
};


#endif