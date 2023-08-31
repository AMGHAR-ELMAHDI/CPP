/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/30 18:57:58 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap    Scav("Cheesy");
    Scav.attack("Dumbass1");
    Scav.takeDamage(2);
    std::cout << "first  " << Scav.getHitPoints() << std::endl;
    Scav.beRepaired(5);
    std::cout << "second  " << Scav.getHitPoints() << std::endl;
    return 0;
}
