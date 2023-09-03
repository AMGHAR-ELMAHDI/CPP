/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:34 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/03 02:40:41 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    // std::cout << " Constructor called " << std::endl;
}

Harl::~Harl()
{
    // std::cout << " Destructor called " << std::endl;
}

void Harl::complain(std::string level)
{
    size_t index = 0;
    size_t num = -1;

    while ((index = level.find("DEBUG")) != std::string::npos)
    {
        num = 0;
        break;
    }
    while ((index = level.find("INFO")) != std::string::npos)
    {
        num = 1;
        break;
    }
    while ((index = level.find("WARNING")) != std::string::npos)
    {
        num = 2;
        break;
    }
    while ((index = level.find("ERROR")) != std::string::npos)
    {
        num = 3;
        break;
    }

    switch (num)
    {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

void Harl::debug( void )
{
    std::cout << " [ DEBUG ] " << std::endl;
    std::cout << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}
void Harl::info( void )
{
    std::cout << " [ INFO ] " << std::endl;
    std::cout << " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning( void )
{
    std::cout << " [ WARNING ] " << std::endl;
    std::cout << " I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error( void )
{
    std::cout << " [ ERROR ] " << std::endl;
    std::cout << " This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}
