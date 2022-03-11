#include "Phonebook.hpp"
#include "Contact.hpp"

int	what_is_cmd(std::string cmd)
{
	int			i;
	int			no;
	std::string	exit = "EXIT";
	std::string	add = "ADD";
	std::string	search = "SEARCH";

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
	Phonebook		Phonebook;
	
	while (1)
	{
		std::wcout << "Enter a command (ADD or SEARCH or EXIT): ";
		std::getline(std::cin, cmd);
		if (cmd == "\0")
			break ;
		
		switch (what_is_cmd(cmd)) // cmd == "EXIT" or cmd.compare("EXIT") == 0
		{
			case (1): // EXIT
			{
				exit(1);
			}
			case (2): // ADD
			{
				if (idx >= MAX - 1)
					Phonebook.set_down_index();
				else
					++idx;
				if (Phonebook.add_Q_data(idx) < 0)
					std::cout << "INVALID ERROR\n";
				break ;
			}
			case (3): // SEARCH
			{
				Phonebook.print_Contact();
				break ;
			}
			default : // else
			{
				std::cout << "wrong cmd\n";
			}
		}
	}
	return (0);
}
