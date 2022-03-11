/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:36:45 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/11 18:28:05 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	input;
	int			i;
	Zombie*		zoms;

	
	std::cout << "N : ";
	std::getline(std::cin, input);
	i = std::atoi(input.c_str());
	std::cout << "name : ";
	std::getline(std::cin, input); 
	zoms = zombieHorde(i, input);
	for (int j = 0; j < i; j++)
	{
		std::cout << "j:" << j << ", name:";
		zoms[j].announce();
		std::cout << std::endl;
	}
	delete[] zoms;
	// system("leaks Zombie");
	return (0);
}