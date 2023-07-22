#include "header.hpp"

void	PhoneBook::addContactInfo(void)
{
}

void	searchContact()
{

}

int	main(void)
{
	PhoneBook	phone;
	std::string	choice;

	PhoneBook::i = 0;
	while (1)
	{
		std::cin >> choice;
		if (choice == "ADD")
		{
			phone.addContactInfo();
		}
		// else if (choice == "SEARCH")
		// {

		// }
		// else if (choice == "EXIT")
		// {
			
		// }
		else
			std::cout << "Error: False choice" << std::endl;
	}
}