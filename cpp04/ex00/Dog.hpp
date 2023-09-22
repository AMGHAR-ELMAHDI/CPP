/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:36:49 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/22 17:46:56 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
#define DOG

#include<iostream>
#include<string>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string newType);
        Dog(const Dog &obj);
        Dog &operator=(const Dog &other);
        ~Dog();
        void makeSound()const;
};

#endif