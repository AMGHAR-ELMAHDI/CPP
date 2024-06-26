/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:24:06 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/25 02:04:10 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	int i = 0;
	while (av[++i])
	{
		std::string str = av[i];
		int j = -1;
		while (str[++j])
			std::cout << (char)std::toupper(str[j]);
	}
	std::cout << std::endl;
	return 0;
}
