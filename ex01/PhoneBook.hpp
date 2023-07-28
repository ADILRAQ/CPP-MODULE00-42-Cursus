/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:09:02 by araqioui          #+#    #+#             */
/*   Updated: 2023/07/28 08:54:27 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact		member[8];
		int			i;

	public:
		void		initIndex(void);
		void		addContactInfo(void);
		void		searchContact(void);
};

#endif