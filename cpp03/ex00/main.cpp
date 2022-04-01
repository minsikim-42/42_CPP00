/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:16:08 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/01 21:17:40 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	John("John");
	ClapTrap	Tom("Tom");

	John.attack("Tom");
	Tom.takeDamage(John.get_attack());
	Tom.beRepaired(50);
	Tom.takeDamage(23);
	Tom.beRepaired(50);
	return (0);
}