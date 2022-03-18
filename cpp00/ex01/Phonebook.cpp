/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 22:37:13 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 16:29:31 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) : idx_(-1)
{
	
}

Phonebook::~Phonebook(void)
{
	
}

int	Phonebook::add_Q_data(int idx)
{
	std::string	fn;
	std::string	ln;
	std::string	nn;
	std::string	pn;
	std::string	ds;

	std::cout << "firsh name : ";
	if (std::getline(std::cin, fn) == NULL)
		exit(-1);
	std::cout << "last name : ";
	if (std::getline(std::cin, ln) == NULL)
		exit(-1);
	std::cout << "nickname : ";
	if (std::getline(std::cin, nn) == NULL)
		exit(-1);
	do
	{
		std::cout << "phone number : ";
		if (std::getline(std::cin, pn) == NULL)
			exit(-1);
	}
	while (this->check_number(pn) < 0);
	std::cout << "darkest secret : ";
	if (std::getline(std::cin, ds) == NULL)
		exit(-1);
	std::cout << "\n";
	this->Contact[idx].set_idx(idx);
	this->Contact[idx].set_contact(fn, ln, nn, pn, ds);
	return (0);
}

int		Phonebook::check_number(std::string pn)
{
	int		i = -1;

	while (pn[++i])
	{
		if (pn[i] > '9' || pn[i] < '0')
		{
			std::cout << "! Only input number !\n";
			return (-1);
		}
	}
	return (1);
}

void	Phonebook::set_index(int idx)
{
	this->idx_ = idx;
}

void	Phonebook::set_down_index(void)
{
	int		i = 0;

	while (this->Contact[i].get_idx() >= 0 && i < MAX - 1)
	{
		this->Contact[i] = this->Contact[i + 1];
		this->Contact[i].set_idx(i);
		i++;
	}
}

void	Phonebook::print_Contact(void)
{
	if (this->Contact->get_idx() < 0)
	{
		std::cout << "NO Contact\n";
		return ;
	}
	std::cout << "=============================================\n";
	std::cout << "|       idx|     first|      last|      nick|\n";
	std::cout << "---------------------------------------------\n";
	for (int i = 0; i < MAX && this->Contact[i].get_idx() >= 0; i++)
	{
		std::cout << "|         ";
		this->Contact[i].print_idx(); // getter
		std::cout << "|";
		this->Contact[i].print_F();
		std::cout << "|";
		this->Contact[i].print_L();
		std::cout << "|";
		this->Contact[i].print_nick();
		std::cout << "|\n";
	}
	std::cout << "=============================================\n";
	std::cout << "\n";
	
	std::string	cmd;
	while (1)
	{
		std::cout << " select index : ";
		if (std::getline(std::cin, cmd) == NULL)
			exit(-1);
		int	j = 0;
		while (cmd[j])
			j++;
		if (j != 1)
		{
			std::cout << "wrong index\n";
			continue ;
		}
		j = cmd[0] - 48;
		if (0 <= j && j < MAX && this->Contact[j].get_idx() >= 0)
			this->Contact[j].print_all();
		else
		{
			std::cout << "wrong index\n";
			continue ;
		}
		std::cout << "\n";
		break ;
	}
}
