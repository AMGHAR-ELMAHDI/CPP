/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/23 19:42:21 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void    ds()
{
    system("leaks exec");
}


// int main( void )
// {
//     std::cout << "---------------------" << std::endl;
    
//     const Animal *dog = new Dog();
//     const Animal *cat = new Cat();
//     const Animal *animals[10];
    
//     std::cout << "---------------------" << std::endl;

//     for (int i = 0;i < 5; i++)
//     {
//         animals[i] = dog;
//     }
//     for (int i = 5; i < 10; i++)
//     {
//         animals[i] = cat;
//     }
    
//     std::cout << "---------------------" << std::endl;

//     std::cout << animals[8]->getType() << std::endl;
//     animals[8]->makeSound();
    
//     std::cout << "---------------------" << std::endl;

//     Dog basic;
//     {
//         Dog tmp = basic;
//     }
    
//     std::cout << "---------------------" << std::endl;

//     delete dog;
//     delete cat;
    
//     return 0;
// }


int main()
{   
    std::cout << "---------------------" << std::endl;
    const Animal* dg = new Dog();
    const Animal* ct = new Cat();
    const Animal *arr[100];
    std::cout << "---------------------" << std::endl;

    for (int i = 0;i < 50; i++)
    {
        arr[i] = dg;
    }
    for (int i = 50;i < 100; i++)
    {
        arr[i] = ct;
    }
    
    
    std::cout << arr[60]->getType() << std::endl;
    arr[60]->makeSound();
    
    // std::cout << "---------------------" << std::endl;
    
    // std::cout << arr[51]->getType() << std::endl;
    // arr[51]->makeSound();
    
    // std::cout << "---------------------" << std::endl;

    // Dog basic;
    // {
    //     std::cout << "----------88-----------" << std::endl;
    //     Dog tmp = basic ;   
    //     std::cout << "-----------88----------" << std::endl;
    // }
    
    std::cout << "---------------------" << std::endl;
    delete dg;
    delete ct;
    std::cout << "---------------------" << std::endl;
}