/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:51:50 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/25 13:57:19 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): weapon_(weapon)
{
	name_ = name;
}

HumanA::~HumanA()
{
	
}

void	HumanA::attack(void)
{
	std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}
