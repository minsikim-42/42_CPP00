/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:16:08 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/01 21:20:50 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int	main()
{
	FragTrap	John("John");
	ScavTrap	Tom("Tom");

	John.attack("Tom");
	Tom.takeDamage(John.get_attack());
	Tom.beRepaired(50);
	std::cout << "" << Tom.get_hit() << std::endl;
	John.highFivesGuys();
	Tom.guardGate();
	return (0);
}