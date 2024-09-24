/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:13:29 by ssteveli          #+#    #+#             */
/*   Updated: 2024/07/12 15:19:34 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; av[i]; i++){
			for (int j = 0; av[i][j]; j++)
				std::cout << (char) toupper(av[i][j]);
		}
	}
	std::cout << std::endl;
	return (0);
}