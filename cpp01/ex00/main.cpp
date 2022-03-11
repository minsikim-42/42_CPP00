/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:48:47 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/11 17:11:17 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zom;
	std::string	name;

	std::cout << "Naming Zombie : ";
	if (std::getline(std::cin, name) == NULL)
		return (-1);
	std::cout << "newZombie announce:\n";
	zom = newZombie(name);
	zom->announce();
	delete zom;
	std::cout << "randomChump(name):\n";
	randomChump(name);
	// system("leaks Zombie");
	return (0);
}