#include "ClassData.hpp"
#include "ClassAddress.hpp"

int	what_is_cmd(std::string cmd)
{
	int		i;
	int		no;
	char	exit[5] = "EXIT";
	char	add[4] = "ADD";
	char	search[7] = "SEARCH";

	no = 0;
	for (i = 0; cmd[i]; i++)
	{
		if (cmd[i] != exit[i])
			no = -1;
	}
	if (no == 0 && i == 4)
		return (1);
	no = 0;
	for (i = 0; cmd[i]; i++)
	{
		if (cmd[i] != add[i])
			no = -1;
	}
	if (no == 0 && i == 3)
		return (2);
	no = 0;
	for (i = 0; cmd[i]; i++)
	{
		if (cmd[i] != search[i])
			no = -1;
	}
	if (no == 0 && i == 6)
		return (3);
	return (no);
}

int	main()
{
	std::string		cmd;
	int	idx = -1;
	ClassData		data;
	
	while (1)
	{
		std::wcout << "Enter a command (ADD or SEARCH or EXIT): ";
		std::getline(std::cin, cmd);
		
		switch (what_is_cmd(cmd))
		{
			case (1): // EXIT
			{
				exit(1);
			}
			case (2): // ADD
			{
				if (idx >= MAX - 1)
					data.set_down_index();
				else
					++idx;
				std::cout << idx << std::endl;
				data.set_address(idx);
				break ;
			}
			case (3): // SEARCH
			{
				data.print_address();
				break ;
			}
			default :
			{
				std::cout << "wrong cmd\n";
			}
		}
	}
	return (0);
}