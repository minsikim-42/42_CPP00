/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:16:08 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/03 17:38:30 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	// ScavTrap* John = new ScavTrap("John");
	ClapTrap	test("test");
	ScavTrap	John("John");
	ScavTrap	Tom("Tom");

	John.attack("Tom");
	Tom.takeDamage(John.get_attack());
	Tom.beRepaired(50);
	std::cout << " Tom:" << Tom.get_hit() << std::endl;
	Tom.guardGate();
	Tom.takeDamage(111);
	Tom.beRepaired(50);
	Tom.attack("John");
	test.attack("John");
	return (0);
}