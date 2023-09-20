/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:36:49 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/20 19:11:25 by eamghar          ###   ########.fr       */
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
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        std::string getType(void)const;
        void setType(std::string newType);
        virtual void makeSound(void)const;
};

#endif
