/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 04:31:34 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/20 02:07:08 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria    *inventory[4];
    public:
        Character();
        Character(std::string const &Name);
        Character(const Character &obj);
        std::string const &getName() const;
        void setName(const std::string);
        Character &operator=(const Character &other);
        ~Character();
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};



#endif