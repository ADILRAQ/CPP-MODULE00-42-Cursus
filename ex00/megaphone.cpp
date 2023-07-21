#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 0;
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
			{
				if (97 <= av[i][j] && av[i][j] <= 122)
				{
					av[i][j] -= 32;
				}
			}
			std::cout << av[i];
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
