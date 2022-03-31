/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:16:08 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/30 15:29:48 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	John("John");
	ClapTrap	Tom("Tom");

	John.attack(Tom.get_name());
	Tom.takeDamage(3);
	Tom.beRepaired(4);
	Tom.takeDamage(23);
	return (0);
}