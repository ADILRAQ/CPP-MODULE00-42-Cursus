/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:08:57 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/03 16:40:02 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::initIndex(void)
{
	i = 0;
	fullContactList = false;
}

static std::string	readInput(void)
{
	std::string	str;

	while (1)
	{
		if (!std::getline(std::cin, str))
			std::exit(EXIT_FAILURE);
		else if (!str[0])
			std::cout << "Enter valid info: ";
		else
			return (str);
	}
}

void  PhoneBook::addContactInfo(void)
{
	if (i == 8)
	{
		i = 0;
		fullContactList = true;
	}
	std::cout << "Enter contact info :" << std::endl;
	std::cout << "\tFirst Name: ";
	member[i].setFirstName(readInput());
	std::cout << "\tLast Name: ";
	member[i].setLastName(readInput());
	std::cout << "\tNickname: ";
	member[i].setNickName(readInput());
	std::cout << "\tPhone Number: ";
	member[i].setPhoneNumber(readInput());
	std::cout << "\tDarkest Secret: ";
	member[i].setDarkestSecret(readInput());
	i++;
}

static void	printMenuBar(void)
{
	std::cout << "     Index|" \
				<< "First Name|" \
				<< " Last Name|" \
				<< "  Nickname|" \
				<< std::endl;
}

static void	printInfo(std::string str, int countSpaces)
{
	int	i;

	i = -1;
	if (countSpaces < 0)
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".|";
	}
	else
	{
		while (countSpaces)
		{
			std::cout << " ";
			countSpaces--;
		}
		while (str[++i])
			std::cout << str[i];
		std::cout << "|";
	}
}

static void	printAllContacts(Contact member[8])
{
	int	j;
	int	countSpaces;

	printMenuBar();
	j = -1;
	while (++j < 8)
	{
		std::cout << j << "         |";
		countSpaces = 10 - member[j].getFirstName().length();
		printInfo(member[j].getFirstName(), countSpaces);
		countSpaces = 10 - member[j].getLastName().length();
		printInfo(member[j].getLastName(), countSpaces);
		countSpaces = 10 - member[j].getNickName().length();
		printInfo(member[j].getNickName(), countSpaces);
		std::cout << "\n";
	}
}

void	PhoneBook::searchContact(void)
{
	int	id;

	printAllContacts(member);
	std::cout << "\tEnter contact Index: ";
	std::cin >> id;
	if (std::cin.eof())
		std::exit(EXIT_FAILURE);
	std::cin.ignore();
	if (0 > id || id > 7)
		std::cout << "\tIndex out of range !" << std::endl;
	else if (!i && fullContactList == false)
		std::cout << "\tNo contact available !" << std::endl;
	else if (id >= i && fullContactList == false)
		std::cout << "\tNo contact available at " << id << "!" << std::endl;
	else
	{
		std::cout << "\tFirst Name: " << member[id].getFirstName() << std::endl;
		std::cout << "\tLast Name: " << member[id].getLastName() << std::endl;
		std::cout << "\tNickname: " << member[id].getNickName() << std::endl;
		std::cout << "\tPhone Number: " << member[id].getPhoneNumber() << std::endl;
		std::cout << "\tDarkest Secret: " << member[id].getDarkestSecret() << std::endl;
	}
}
