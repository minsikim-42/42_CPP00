/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:31:24 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/12 18:29:25 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string _name)
{
	name = _name;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &_Weapon)
{
	weapon = &_Weapon;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
