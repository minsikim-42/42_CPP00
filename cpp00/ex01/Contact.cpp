/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:05:12 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 16:25:19 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
	idx_ = -1;
	first_name_ = "";
	last_name_ = "";
	nickname_ = "";
	phone_number_ = "";
	darkest_secret_ = "";
}

Contact::Contact(std::string _first_name, std::string _last_name, \
	std::string _nickname, std::string _phone_number, std::string _darkest_secret)
{
	first_name_ = _first_name;
	last_name_ = _last_name;
	nickname_ = _nickname;
	phone_number_ = _phone_number;
	darkest_secret_ = _darkest_secret;
}

int		Contact::get_idx(void) const
{
	return (this->idx_);
}

void	Contact::set_contact(std::string _first_name, std::string _last_name, \
	std::string _nickname, std::string _phone_number, std::string _darkest_secret)
{
	first_name_ = _first_name;
	last_name_ = _last_name;
	nickname_ = _nickname;
	phone_number_ = _phone_number;
	darkest_secret_ = _darkest_secret;
}

void	Contact::set_idx(int i)
{
	this->idx_ = i;
}

void	Contact::print_idx(void)
{
	std::cout << idx_;
}

void	Contact::print_F(void)
{
	int		count = 0;

	while (first_name_[count])
		count++;
	if (count > 10)
	{
		int i = -1;
		while (++i < 9)
			std::cout << first_name_[i];
		std::cout << ".";
		return ;
	}
	int i = -1;
	while (++i < 10 - count)
		std::cout << " ";
	std::cout << first_name_;
}

void	Contact::print_L(void)
{
	int		count = 0;

	while (last_name_[count])
		count++;
	if (count > 10)
	{
		int i = -1;
		while (++i < 9)
			std::cout << last_name_[i];
		std::cout << ".";
		return ;
	}
	int i = -1;
	while (++i < 10 - count)
		std::cout << " ";
	std::cout << last_name_;
}

void	Contact::print_nick(void)
{
	int		count = 0;

	while (nickname_[count])
		count++;
	if (count > 10)
	{
		int i = -1;
		while (++i < 9)
			std::cout << nickname_[i];
		std::cout << ".";
		return ;
	}
	int i = -1;
	while (++i < 10 - count)
		std::cout << " ";
	std::cout << nickname_;
}

void	Contact::print_all(void)
{
	std::cout << "   first name : " << first_name_ << std::endl;
	std::cout << "    last name : " << last_name_ << std::endl;
	std::cout << "     nickname : " << nickname_ << std::endl;
	std::cout << " phone number : " << phone_number_ << std::endl;
	std::cout << "darkest_secret: " << darkest_secret_ << std::endl;
}
