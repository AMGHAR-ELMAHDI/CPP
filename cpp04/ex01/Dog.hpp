/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:36:49 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/02 05:12:58 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
#define DOG

#include<iostream>
#include<string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *br;
    public:
        Dog();
        Dog(std::string newType);
        Dog(const Dog &obj);
        ~Dog();
        void makeSound()const;
};

#endif