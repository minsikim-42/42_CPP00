/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:53:07 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 21:30:57 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char *argv[])
{
	Karen	karen;
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
			karen.complain(arr[0]);
		}
		case(1) :
		{
			karen.complain(arr[1]);
		}
		case(2) :
		{
			karen.complain(arr[2]);
		}
		case(3) :
		{
			karen.complain(arr[3]);
			break ;
		}
		default :
		{
			std::cout << "[ Probably complaining about insignificant problems ]\n";
		}
	}
	
	return (0);
}
