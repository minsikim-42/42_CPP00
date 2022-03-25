/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:20:49 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/25 13:41:06 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << this->name_ << " Zombie is dead\n";
}

Zombie::Zombie(std::string name)
{
	this->name_ = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ...\n";
}