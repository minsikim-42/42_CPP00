/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:16:08 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/30 17:16:22 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	John("John");
	FragTrap	Tom("Tom");
	FragTrap	cp = Tom;

	John.attack(Tom.get_name());
	cp.takeDamage(3);
	Tom.beRepaired(3);
	std::cout << cp.get_hit() << Tom.get_hit();
	Tom.highFivesGuys();
	return (0);
}