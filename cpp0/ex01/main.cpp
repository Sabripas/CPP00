/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:31:17 by ssteveli          #+#    #+#             */
/*   Updated: 2024/09/24 17:51:40 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook 	ph1;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Enter a command > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			ph1.add();
		if (str == "SEARCH")
		{
			ph1.search();
			ph1.info();
		}
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}