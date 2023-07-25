#ifndef HEADER_HPP
#define HEADER_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact		member[8];
		int			i;

	public:
		void			initIndex(void);
		void			addContactInfo(void);
		void			searchContact(void);
};

#endif