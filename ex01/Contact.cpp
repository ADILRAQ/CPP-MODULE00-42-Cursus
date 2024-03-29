/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:08:22 by araqioui          #+#    #+#             */
/*   Updated: 2023/07/28 08:47:01 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//--------------Seters--------------//

void 	Contact::setFirstName(std::string firstname)
{
	FirstName = firstname;
}

void	Contact::setLastName(std::string lastname)
{
	LastName = lastname;
}

void	Contact::setNickName(std::string nickname)
{
	NickName = nickname;
}

void	Contact::setPhoneNumber(std::string phonenumber)
{
	PhoneNumber = phonenumber;
}

void	Contact::setDarkestSecret(std::string darkestsecret)
{
	DarkestSecret = darkestsecret;
}

//--------------Geters--------------//

std::string	Contact::getFirstName(void)
{
	return (FirstName);
}

std::string	Contact::getLastName(void)
{
	return (LastName);
}

std::string	Contact::getNickName(void)
{
	return (NickName);
}

std::string	Contact::getPhoneNumber(void)
{
	return (PhoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (DarkestSecret);
}
