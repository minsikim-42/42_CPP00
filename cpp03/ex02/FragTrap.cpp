/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:21:16 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/23 11:24:34 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "(FR)" << this->Name << " constructor called\n";
	this->Name = _name;
	this->Hitpoints = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap()
{
	std::cout << "(FR)" << this->Name << " Default constructor called\n";
	this->Hitpoints = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "(FR)" << this->Name << " destructor called\n";
}

FragTrap	FragTrap::operator=(const FragTrap &origin)
{
	this->Name = origin.get_name();
	this->Hitpoints = origin.get_hit();
	this->Energy_points = origin.get_energy();
	this->Attack_damage = origin.get_attack();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "(FR)" << this->Name << " : \"Let's high five!!!\"\n";
}
