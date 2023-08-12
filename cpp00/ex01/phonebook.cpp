/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:02:32 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/12 01:40:53 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void    PhoneBook::setarr(Contact oo, int index)
{
    arr[index] = oo;
}

Contact PhoneBook::getarr(int index)
{
    return(arr[index]);
}

void    PhoneBook::add(Contact o, PhoneBook phone)
{
    std::string str;

    (void)o;
    for (int i = 0; i < 8; i++)
    {
        str = phone.getarr(i).getFirstName();
        std::cout << str << "\n";
    }
}
