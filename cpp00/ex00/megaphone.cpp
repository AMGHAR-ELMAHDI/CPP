/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:24:06 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/12 18:26:27 by eamghar          ###   ########.fr       */
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
		int j = 0;
		while (av[i][j])
		{
			av[i][j] = std::toupper(av[i][j]);
			std::cout << av[i][j];
			j++;
		}
	}
	std::cout << "\n";
	return 0;
}