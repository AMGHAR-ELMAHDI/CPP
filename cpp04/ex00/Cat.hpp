/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:36:49 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/20 18:56:01 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
#define CAT

#include<iostream>
#include<string>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string newType);
        Cat(const Cat &obj);
        Cat &operator=(const Cat &other);
        ~Cat();
        void makeSound()const;
};

#endif