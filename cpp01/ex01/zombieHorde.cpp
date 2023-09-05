/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:08:41 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/05 01:34:08 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    if (N < 1)
        return (NULL);

    Zombie *arr = new (std::nothrow)Zombie[N];
    if(arr)
    {
        for(int i = 0; i < N; i++)
            arr[i].setName(name);
    }
    return arr;
}
