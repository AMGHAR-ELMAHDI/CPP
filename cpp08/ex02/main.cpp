/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/18 19:08:10 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


int main()
{
    MutantStack<int> mstack;
    
    std::cout << "----------------------------------" << std::endl;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "Stack Top Value before 'POP' is: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Stack Top Value after 'POP' is: " << mstack.top() << std::endl;
    
    std::cout << "Stack size: "<< mstack.size() << std::endl;
    
    std::cout << "----------------------------------" << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::it it = mstack.begin();
    MutantStack<int>::it ite = mstack.end();
    
    std::cout << "Stack Begin Iterator Value is: " << *it << std::endl;
    std::cout << "Stack End Iterator Value is: " << *ite << std::endl;
    
    std::cout << "-------Current Stack Values-------" << std::endl;
    
    ++it;
    --it;
    
    while (*it && it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::stack<int> s(mstack);

    std::cout << "----------------------------------" << std::endl;
    return 0;
}
