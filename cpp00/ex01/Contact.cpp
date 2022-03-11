/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:05:12 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/11 15:08:55 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
	idx = -1;
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::Contact(std::string _first_name, std::string _last_name, \
	std::string _nickname, std::string _phone_number, std::string _darkest_secret)
{
	first_name = _first_name;
	last_name = _last_name;
	nickname = _nickname;
	phone_number = _phone_number;
	darkest_secret = _darkest_secret;
}

int		Contact::get_idx(void) const
{
	return (this->idx);
}

void	Contact::set_contact(std::string _first_name, std::string _last_name, \
	std::string _nickname, std::string _phone_number, std::string _darkest_secret)
{
	first_name = _first_name;
	last_name = _last_name;
	nickname = _nickname;
	phone_number = _phone_number;
	darkest_secret = _darkest_secret;
}

void	Contact::set_idx(int i)
{
	this->idx = i;
}

void	Contact::print_idx(void)
{
	std::cout << idx;
}

void	Contact::print_F(void)
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

void	Contact::print_L(void)
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

void	Contact::print_nick(void)
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

void	Contact::print_all(void)
{
	std::cout << "   first name : " << first_name << std::endl;
	std::cout << "    last name : " << last_name << std::endl;
	std::cout << "     nickname : " << nickname << std::endl;
	std::cout << " phone number : " << phone_number << std::endl;
	std::cout << "darkest_secret: " << darkest_secret << std::endl;
}
