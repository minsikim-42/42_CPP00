/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassData.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 22:37:13 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/09 16:57:39 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassData.hpp"

ClassData::ClassData(void) : idx(-1)
{
	
}

ClassData::~ClassData(void)
{
	
}

void	ClassData::set_index(int idx)
{
	this->idx = idx;
}

void	ClassData::set_down_index(void)
{
	int		i = 0;

	while (this->address[i].re_idx() >= 0 && i < MAX - 1)
	{
		this->address[i] = this->address[i + 1];
		this->address[i].set_idx(i);
		i++;
	}
}

void	ClassData::set_address(int idx)
{
	if (idx < MAX)
	{
		address[idx].add_Q_data(idx);
	}
}

void	ClassData::print_address(void)
{
	if (this->address->re_idx() < 0)
	{
		std::cout << "NO ADDRESS\n";
		return ;
	}
	std::cout << "------------------------------------------\n";
	std::cout << "| idx|      first|       last|       nick|\n";
	std::cout << "------------------------------------------\n";
	for (int i = 0; i < MAX && this->address[i].re_idx() >= 0; i++)
	{
		std::cout << "|   ";
		this->address[i].print_idx();
		std::cout << "| ";
		this->address[i].print_F();
		std::cout << "| ";
		this->address[i].print_L();
		std::cout << "| ";
		this->address[i].print_nick();
		std::cout << "|\n";
	}
	std::cout << "------------------------------------------\n";
	std::cout << "\n";
	
	std::string	cmd;
	while (1)
	{
		std::cout << "select index : ";
		std::getline(std::cin, cmd);
		int	j = 0;
		while (cmd[j])
			j++;
		if (j != 1)
		{
			std::cout << "wrong index\n\n";
			break ;
		}
		j = cmd[0] - 48;
		if (0 <= j && j < MAX && this->address[j].re_idx() >= 0)
			this->address[j].print_all();
		else
			std::cout << "wrong index\n";
		std::cout << "\n";
		break ;
	}
}
