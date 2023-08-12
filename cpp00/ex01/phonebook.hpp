/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:03:24 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/12 01:32:12 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK

#include "contact.hpp"
#include <iostream>

class  PhoneBook
{
    private:
        Contact  arr[8];
        
    public:
        void setarr(Contact oo, int index);
        Contact getarr(int index);
        void add(Contact o, PhoneBook phone);
    
    //ADD
    //SEARCH
    //EXIT
};



#endif