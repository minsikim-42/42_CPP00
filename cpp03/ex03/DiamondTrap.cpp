/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:49:46 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/02 16:13:20 by minsikim         ###   ########.fr       */
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

void	DiamondTrap::takeDamage(unsigned int amount)
{
	Hit_points -= amount;
	if (Hit_points < 0)
		Hit_points = 0;
	std::cout << "DiamondTrap " << this->Name << \
		" takes " << amount << " damage!\nremain: " << this->Hit_points << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points == 0 || Hit_points == 0)
	{
		std::cout << "It cant do anything\n";
		return ;
	}
	this->Energy_points--;
	this->Hit_points += amount;
	if (Hit_points > 100) // frag
		Hit_points = 100;
	std::cout << "DiamondTrap " << this->Name << " " << amount << " repaire!\nremain: " << this->Hit_points << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "   this   :" << this->Name << std::endl;
	std::cout << " ClapTrap :" << ClapTrap::Name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &origin)
{
	this->Name = origin.get_name();
	this->Hit_points = origin.get_hit();
	this->Energy_points = origin.get_energy();
	this->Attack_damage = origin.get_attack();
	return (*this);
}
