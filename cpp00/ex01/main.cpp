#include "Phonebook.hpp"
#include "Contact.hpp"

int	what_is_cmd(std::string cmd)
{
	std::string	exit = "EXIT";
	std::string	add = "ADD";
	std::string	search = "SEARCH";

	if (cmd == "EXIT")
		return (1);
	else if (cmd == "ADD")
		return (2);
	else if (cmd == "SEARCH")
		return (3);
	return (-1);
}

int	main()
{
	std::string		cmd;
	int	idx = -1;
	Phonebook		Phonebook;
	
	while (1)
	{
		std::cout << "Enter a command (ADD or SEARCH or EXIT): ";
		std::getline(std::cin, cmd);
		if (cmd == "\0" && std::cin.eof() == 1)
			exit(0);
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
					std::cout << "! INVALID ERROR !\n";
				break ;
			}
			case (3): // SEARCH
			{
				Phonebook.print_Contact();
				break ;
			}
			default : // else
			{
				std::cout << "! wrong cmd !\n";
			}
		}
	}
	return (0);
}
