/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/06 22:33:53 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate(void)
{
    srand(time(NULL));
    int r  = (rand() % 100);
    std::cout << "r==> " << r << std::endl;  
    if(r >= 0 && r <= 40)
        return(new A());
    else if(r > 40 && r <= 80)
        return(new B());
    else if(r > 80)
        return(new C());
    else
        return(new A());
}

// void identify(Base *p)
// {
    
// }

// void identify(Base &p)
// {
    
// }

int main()
{
    std::cout << "----------------------------------------------------" << std::endl;
    return(0);
}
