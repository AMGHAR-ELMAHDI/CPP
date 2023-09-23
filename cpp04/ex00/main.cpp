/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/23 02:36:56 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal    *meta = new (std::nothrow) Animal();
    const Animal    *j = new (std::nothrow) Dog();
    const Animal    *i = new (std::nothrow) Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;
    return 0;
}


// int main( void )
// {
//     std::cout << "--------------- Animal ---------------" << std::endl;

//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << "J Type: " << j->getType() << " " << std::endl;
//     std::cout << "I Type: " << i->getType() << " " << std::endl;
//     i->makeSound();
//     meta->makeSound();

//     delete  meta;
//     delete  j;
//     delete  i;

//     std::cout << std::endl << "------------- Wrong Animal -------------" << std::endl;

//     const WrongAnimal *wrong = new WrongAnimal();
//     const WrongAnimal *wrongCat = new WrongCat();

//     std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
//     std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
//     wrong->makeSound();
//     wrongCat->makeSound();

//     delete  wrong;
//     delete  wrongCat;

//     return 0;
// }