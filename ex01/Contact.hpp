/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:08:26 by araqioui          #+#    #+#             */
/*   Updated: 2023/07/28 08:49:23 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>

class	Contact {
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;

	public:
	// Seters
		void		setFirstName(std::string firstname);
		void		setLastName(std::string lastname);
		void		setNickName(std::string nickname);
		void		setPhoneNumber(std::string phonenumber);
		void		setDarkestSecret(std::string darkestsecret);
	// Geters
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);
};

#endif