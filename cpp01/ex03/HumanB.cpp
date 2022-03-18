/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:31:24 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 16:33:06 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name)
{
	name_ = name;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	weapon_ = &Weapon;
}

void	HumanB::attack(void)
{
	std::cout << name_ << " attacks with his " << weapon_->getType() << std::endl;
}
