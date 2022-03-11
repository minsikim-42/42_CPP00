#include <iostream>

int	ft_is_small(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			char	c;
			if (ft_is_small(argv[i][j])) // toupper
			{
				c = argv[i][j] - 32;
				std::cout << c;
			}
			else
				std::cout << argv[i][j];
		}
	}
	std::cout << std::endl;
	return (0);
}
