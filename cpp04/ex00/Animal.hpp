/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:36:49 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/01 02:18:54 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL

#include<iostream>
#include<string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string newType);
        Animal(const Animal &obj);
        ~Animal();
        std::string Animal::getType()
        void setType(std::string newType);
};

#endif