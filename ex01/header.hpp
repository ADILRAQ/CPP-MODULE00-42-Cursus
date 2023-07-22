#ifndef HEADER_HPP
#define HEADER_HPP

# include <iostream>

class	Contact {
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
};

class PhoneBook {
	private:
		Contact		member[8];
	public:
		static int	i;
		void	addContactInfo(void);
		void	setFirstName(void);
		void	setLastName(void);
		void	setNickName(void);
		void	setPhoneNumber(void);
		void	setDarkestSecret(void);
};

#endif