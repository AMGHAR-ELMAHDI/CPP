/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:36:49 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/02 05:05:58 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
#define CAT

#include<iostream>
#include<string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain   *br;
    public:
        Cat();
        Cat(std::string newType);
        Cat(const Cat &obj);
        ~Cat();
        void makeSound()const;
};

#endif