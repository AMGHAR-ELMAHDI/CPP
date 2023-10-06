/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/06 22:41:13 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate(void)
{
    srand(time(NULL));
    int r  = (rand() % 100);
    int i;
    std::cout << "r==> " << r << std::endl;
    if(r >= 0 && r <= 40)
        i = 1;        
    else if(r > 40 && r <= 80)
        i = 2;
    else if(r > 80)
        i = 3;
    else
        i = 1;
    Base   *bptr1 = new A();
    Base   *bptr2 = new B();
    Base   *bptr3 = new C();
    switch (i)
    {
        case 0:
            delete bptr2;
            delete bptr3;
            return(bptr1);
        case 1:
            delete bptr1;
            delete bptr3;
            return(bptr2);
        case 2:
            delete bptr1;
            delete bptr2;
            return(bptr3);
        default:
            break;
    }
    delete bptr2;
    delete bptr3;
    return(bptr1);
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
