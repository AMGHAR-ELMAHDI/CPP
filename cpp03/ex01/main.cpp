/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/07 21:20:53 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap    Scav("Cheesy");
    Scav.attack("Dummy1");
    Scav.takeDamage(2);
    std::cout << "Before  " << Scav.getHitPoints() << std::endl;
    Scav.beRepaired(5);
    std::cout << "After  " << Scav.getHitPoints() << std::endl;
    return 0;
}
