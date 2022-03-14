/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:28:04 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/14 13:41:49 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << "Zombie is dead\n";
}

Zombie::Zombie(std::string _name)
{
	this->name = _name;
}

void	Zombie::set_name(std::string _name)
{
	this->name = _name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << std::endl;
}

Zombie*	Zombie::newZombie(std::string _name)
{
	Zombie*	zom;

	zom = new Zombie(_name);
	return (zom);
}
