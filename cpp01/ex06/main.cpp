/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:53:07 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/25 16:27:15 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	Harl;
	std::string	arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	if (argc != 2)
	{
		std::cout << "Invalid input\n";
		exit(0);
	}
	std::string	str = "";
	for (int i = 0; argv[i]; i++)
		str += argv[i];
	int find = -1;
	for (int i = 0; str[i]; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (str.compare(i, arr[j].size(), arr[j]) == 0)
				find = j;
		}
	}
	switch(find)
	{
		case(0) :
		{
			Harl.complain(arr[0]);
		}
		case(1) :
		{
			Harl.complain(arr[1]);
		}
		case(2) :
		{
			Harl.complain(arr[2]);
		}
		case(3) :
		{
			Harl.complain(arr[3]);
			break ;
		}
		default :
		{
			std::cout << "[ Probably complaining about insignificant problems ]\n";
		}
	}
	
	return (0);
}
