/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:25:14 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/23 11:10:33 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "(SC)" << this->Name << " constructor called\n";
	this->Name = _name;
	this->Hitpoints = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap()
{
	std::cout << "(SC)" << this->Name << " Default constructor called\n";
	this->Hitpoints = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "(SC)" << this->Name << " destructor called\n";
}

ScavTrap	ScavTrap::operator=(const ScavTrap &origin)
{
	this->Name = origin.get_name();
	this->Hitpoints = origin.get_hit();
	this->Energy_points = origin.get_energy();
	this->Attack_damage = origin.get_attack();
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "(SC)" << this->Name << " is now in Gate keeper mode.\n";
}
