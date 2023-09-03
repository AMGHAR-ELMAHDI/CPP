/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:34 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/03 02:37:58 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << " Constructor called " << std::endl;
}

Harl::~Harl()
{
    std::cout << " Destructor called " << std::endl;
}

void    Harl::complain( std:: string level )
{
    int i = 0;

    t_func  funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    
    while (i < 4 && levels[i].compare(level))
        i++;
    if (i < 4)
        (this->*funcs[i])();
}

void Harl::debug( void )
{
    std::cout << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << " I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}

void Harl::error( void )
{
    std::cout << " This is unacceptable! I want to speak to the manager now." << std::endl;
}
