/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:55:43 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/14 01:41:20 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <cstdlib>
#include <iomanip>

class Zombie
{
    private:
        std::string name;
    public:
        void    announce( void );
        void    setName(std::string name);
};


#endif
