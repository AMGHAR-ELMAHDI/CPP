/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:08:41 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/03 21:47:36 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    if(N < 1)
        return(nullptr);

    Zombie *arr = new (std::nothrow)Zombie[N];

    for(int i = 0; i < N; i++)
        arr[i].setName(name);
    return arr;
}
