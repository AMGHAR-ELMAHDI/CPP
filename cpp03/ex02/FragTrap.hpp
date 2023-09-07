/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:57:01 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/07 21:29:30 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP

#include<iostream>
#include<string>
#include<fstream>
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &obj);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif
