/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:36:45 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/25 13:50:09 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	input;
	int			i;
	Zombie*		zoms;

	
	std::cout << "N : "; ///////////
	std::getline(std::cin, input);
	i = std::atoi(input.c_str());
	if (i == 0)
		std::cout << "error";
	std::cout << "name : ";
	std::getline(std::cin, input); 
	zoms = zombieHorde(i, input);
	for (int j = 0; j < i; j++)
	{
		std::cout << "j:" << j << ", ";
		zoms[j].announce();
		std::cout << std::endl;
	}
	delete[] zoms;
	// system("leaks Zombie");
	return (0);
}