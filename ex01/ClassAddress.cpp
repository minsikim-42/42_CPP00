/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAddress.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:05:12 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/09 16:16:55 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAddress.hpp"

ClassAddress::ClassAddress( void )
{
	idx = -1;
	first_name = " ";
	last_name = " ";
	nickname = " ";
	phone_number = " ";
	darkest_secret = " ";
}

void	ClassAddress::add_Q_data(int idx)
{
	std::string	cmd;

	this->set_idx(idx);
	std::cout << "firsh name : ";
	std::getline(std::cin, cmd);
	this->set_first_name(cmd);
	std::cout << "last name : ";
	std::getline(std::cin, cmd);
	this->set_last_name(cmd);
	std::cout << "nickname : ";
	std::getline(std::cin, cmd);
	this->set_nickname(cmd);
	std::cout << "phone number : ";
	std::getline(std::cin, cmd);
	this->set_phone_number(cmd);
	std::cout << "darkest secret : ";
	std::getline(std::cin, cmd);
	this->set_darkest_secret(cmd);
	std::cout << "\n";
}

int		ClassAddress::re_idx(void)
{
	return (idx);
}

void	ClassAddress::set_idx(int i)
{
	idx = i;
}

void	ClassAddress::set_first_name(std::string cmd)
{
	this->first_name = cmd;
}

void	ClassAddress::set_last_name(std::string cmd)
{
	this->last_name = cmd;
}

void	ClassAddress::set_nickname(std::string cmd)
{
	this->nickname = cmd;
}

void	ClassAddress::set_phone_number(std::string cmd)
{
	this->phone_number = cmd;
}

void	ClassAddress::set_darkest_secret(std::string cmd)
{
	this->darkest_secret = cmd;
}

void	ClassAddress::print_idx(void)
{
	std::cout << idx;
}

void	ClassAddress::print_F(void)
{
	int		count = 0;

	while (first_name[count])
		count++;
	if (count > 10)
	{
		int i = -1;
		while (++i < 9)
			std::cout << first_name[i];
		std::cout << ".";
		return ;
	}
	int i = -1;
	while (++i < 10 - count)
		std::cout << " ";
	std::cout << first_name;
}

void	ClassAddress::print_L(void)
{
	int		count = 0;

	while (last_name[count])
		count++;
	if (count > 10)
	{
		int i = -1;
		while (++i < 9)
			std::cout << last_name[i];
		std::cout << ".";
		return ;
	}
	int i = -1;
	while (++i < 10 - count)
		std::cout << " ";
	std::cout << last_name;
}

void	ClassAddress::print_nick(void)
{
	int		count = 0;

	while (nickname[count])
		count++;
	if (count > 10)
	{
		int i = -1;
		while (++i < 9)
			std::cout << nickname[i];
		std::cout << ".";
		return ;
	}
	int i = -1;
	while (++i < 10 - count)
		std::cout << " ";
	std::cout << nickname;
}

void	ClassAddress::print_all(void)
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
}
