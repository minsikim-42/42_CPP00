/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:16:08 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/01 21:11:04 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	John("John");
	DiamondTrap	Tom("Tom");
	// DiamondTrap	cp(Tom);

	John.attack("Tom");
	Tom.takeDamage(John.get_attack());
	Tom.beRepaired(50);
	Tom.attack("John");
	John.takeDamage(Tom.get_attack());
	// std::cout << "    cp    :" << cp.get_hit() << "\n    Tom   :" << Tom.get_hit() << std::endl;
	Tom.whoAmI();
	return (0);
}