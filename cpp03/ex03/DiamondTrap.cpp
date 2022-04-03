/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:49:46 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/03 17:59:02 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	this->Hit_points = 100; // Frag
	this->Energy_points = 50; // Scav
	this->Attack_damage = 30; // Frag
	std::cout << "(DiamondTrap) Default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name_) : ClapTrap(name_), FragTrap(name_), ScavTrap(name_)
{
	this->Name = name_;
	this->Hit_points = 100; // Frag
	this->Energy_points = 50; // Scav
	this->Attack_damage = 30; // Frag
	ClapTrap::Name += "_clap_name";
	std::cout << "(DiamondTrap) " << this->Name << " constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &origin) : ClapTrap(origin), FragTrap(origin), ScavTrap(origin)
{
	*this = origin;
	std::cout << "(DiamondTrap) " << this->Name << " Copy constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "(DiamondTrap) " << this->Name << " destructor called\n";
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "   this   :" << this->Name << std::endl;
	std::cout << " ClapTrap :" << ClapTrap::Name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &origin)
{
	this->Name = origin.Name;
	this->Hit_points = origin.Hit_points;
	this->Energy_points = origin.Energy_points;
	this->Attack_damage = origin.Attack_damage;
	return (*this);
}
