/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:28:04 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/25 13:46:01 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << this->name_ << "Zombie is dead\n";
}

Zombie::Zombie(std::string name)
{
	this->name_ = name;
}

void	Zombie::set_name(std::string name)
{
	this->name_ = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie*	zom;

	zom = new Zombie(name);
	return (zom);
}
