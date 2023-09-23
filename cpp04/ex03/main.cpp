/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/23 20:01:29 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << "------------------------------------------" << std::endl;
    IMateriaSource* src = new MateriaSource();

    std::cout << "------------------------------------------" << std::endl;
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    std::cout << "------------------------------------------" << std::endl;

    ICharacter* me = new Character("me");
    AMateria* tmp;

    std::cout << "------------------------------------------" << std::endl;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    std::cout << "------------------------------------------" << std::endl;
    
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    std::cout << "------------------------------------------" << std::endl;

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    std::cout << "------------------------------------------" << std::endl;

    delete bob;
    delete me;
    delete src;

    return 0;
}