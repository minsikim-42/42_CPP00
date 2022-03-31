/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:16:08 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/30 17:08:00 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	// ScavTrap* John = new ScavTrap("John");
	ScavTrap	John("John");
	ScavTrap	Tom("Tom");
	ScavTrap	cp(Tom);

	John.attack(Tom.get_name());
	cp.takeDamage(33);
	Tom.takeDamage(22);
	Tom.beRepaired(44);
	std::cout << "cp:" << cp.get_hit() << " Tom:" << Tom.get_hit() << std::endl;
	Tom.guardGate();
	// delete John;
	return (0);
}