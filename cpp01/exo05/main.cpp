#include<iostream>
#include<string>
#include<fstream>

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    newHarl;

    if(ac == 2)
    {
        newHarl.complain(av[1]);
    } 
}
