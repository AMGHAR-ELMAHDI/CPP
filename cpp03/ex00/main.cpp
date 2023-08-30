/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/30 17:25:38 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap    clap1("Cheesy");
    clap1.attack("Dumbass1");
    clap1.takeDamage(2);
    std::cout << "first  " << clap1.getHitPoints() << std::endl;
    clap1.beRepaired(5);
    std::cout << "second  " << clap1.getHitPoints() << std::endl;
    return 0;
}
