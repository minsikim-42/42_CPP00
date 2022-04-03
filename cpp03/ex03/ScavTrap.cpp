/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:25:14 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/03 18:00:37 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "(ScavTrap) " << "Default constructor called\n";
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	this->Name = _name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "(ScavTrap) " << this->Name << " constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &origin) : ClapTrap(origin)
{
	*this = origin;
	std::cout << "(ScavTrap) " << Name << " Copy constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "(ScavTrap) " << this->Name << " destructor called\n";
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &origin)
{
	this->Name = origin.Name;
	this->Hit_points = origin.Hit_points;
	this->Energy_points = origin.Energy_points;
	this->Attack_damage = origin.Attack_damage;
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	if (this->Energy_points == 0 || Hit_points == 0)
	{
		std::cout << "It cant do anything\n";
		return ;
	}
	this->Energy_points--;
	std::cout << "ScavTrap " << this->Name << \
		" attack " << target << ", causing " << this->Attack_damage << \
			" points of damage!\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode.\n";
}
