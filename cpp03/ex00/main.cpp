/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:16:08 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/21 15:24:38 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	John("John");
	FragTrap	Tom("Tom");

	John.attack(Tom.get_name());
	Tom.takeDamage(3);
	Tom.beRepaired(3);
	return (0);
}