/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:08:43 by araqioui          #+#    #+#             */
/*   Updated: 2023/07/26 09:08:44 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phone;
	std::string	choice;

	phone.initIndex();
	std::cout << "Enter the choice: ";
	while (std::getline(std::cin, choice))
	{
			if (choice == "\0")
			{}
			else if (choice == "ADD")
			{
				phone.addContactInfo();
			}
			else if (choice == "SEARCH")
			{
				phone.searchContact();
			}
			else if (choice == "EXIT")
			{
				break ;
			}
			else
				std::cout << "Error: False choice !" << std::endl;
		std::cout << "Enter the choice: ";
	}
}
