/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:07:37 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 20:46:12 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::complain(std::string level)
{
	void	(Karen::*fn_list[4])(void) = {(&Karen::debug), (&Karen::info), \
			(&Karen::warning), (&Karen::error)};
	std::string	arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == arr[i])
			(this->*fn_list[i])();
	}
}

void	Karen::debug(void)
{
	std::cout << "D: What a wonderful restaurant! i love stake medium\n";
}

void	Karen::info(void)
{
	std::cout << "I: What the... it doesn't looks medium\n";
}

void	Karen::warning(void)
{
	std::cout << "W: I think if he was great chef, this terrible situation shouldn't have happened\n";
}

void	Karen::error(void)
{
	std::cout << "E: no..no.. look at this. this stake is so fresh that it can run arround!!\nfux up!!!\n";
}
