/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 02:57:09 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/18 02:57:10 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *newZ = new Zombie(name);

    return(newZ);
}
