/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/23 19:52:19 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "------------------------------------------" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "------------------------------------------" << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
    }

    std::cout << "------------------------------------------" << std::endl;
    
    const Animal* animals[2] = { i, j};

    std::cout << "------------------------------------------" << std::endl;
    
    animals[0]->makeSound();
    animals[1]->makeSound();
    
    std::cout << "------------------------------------------" << std::endl;

    std::cout << animals[1]->getType()<< std::endl;
    
    std::cout << "------------------------------------------" << std::endl;
    
    delete j;
    delete i;

    return 0;
}