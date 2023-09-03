/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:23:54 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/03 21:48:17 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int     n = 5;
    Zombie *arr = zombieHorde(n, "Cheesy");
    if(arr)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i].announce();
        }
        arr[0].setName("fiddler");
        std::cout << arr[0].getName() << std::endl;
        delete[] arr;
    }
    return(0);
}