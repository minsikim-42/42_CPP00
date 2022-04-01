/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:43:42 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/01 16:47:26 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : Name(_name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "(ClapTrap) " << this->Name << " constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &origin)
{
	*this = origin;
	std::cout << "(ClapTrap) " << Name << " Copy constructor called\n";
}

ClapTrap::ClapTrap()
{
	std::cout << "(ClapTrap) Default constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "(ClapTrap) " << this->Name << " destructor called\n";
}

std::string	ClapTrap::get_name(void) const
{
	return (this->Name);
}

int			ClapTrap::get_hit(void) const
{
	return (this->Hit_points);
}

int			ClapTrap::get_energy(void) const
{
	return (this->Energy_points);
}

int			ClapTrap::get_attack(void) const
{
	return (this->Attack_damage);
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->Energy_points == 0 || Hit_points == 0)
	{
		std::cout << "It cant do anything\n";
		return ;
	}
	this->Energy_points--;
	std::cout << "ClapTrap " << this->Name << \
		" attack " << target << ", causing " << this->Attack_damage << \
			" points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	Hit_points -= amount;
	if (Hit_points < 0)
		Hit_points = 0;
	std::cout << "ClapTrap " << this->Name << \
		" takes " << amount << " damage!\nremain: " << this->Hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points == 0 || Hit_points == 0)
	{
		std::cout << "It cant do anything\n";
		return ;
	}
	this->Energy_points--;
	this->Hit_points += amount;
	if (Hit_points > 10)
		Hit_points = 10;
	std::cout << "ClapTrap " << this->Name << " " << amount << " repaire!\nremain: " << this->Hit_points << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &origin)
{
	this->Name = origin.get_name();
	this->Hit_points = origin.get_hit();
	this->Energy_points = origin.get_energy();
	this->Attack_damage = origin.get_attack();
	return (*this);
}
