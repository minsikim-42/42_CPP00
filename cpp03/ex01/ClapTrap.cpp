/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:43:35 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/23 10:59:25 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	this->Name = _name;
	std::cout << this->Name << " structor called\n";
}

ClapTrap::ClapTrap()
{
	std::cout << "Default structor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << this->Name << " destructor called\n";
}

std::string	ClapTrap::get_name(void) const
{
	return (this->Name);
}

int			ClapTrap::get_hit(void) const
{
	return (this->Hitpoints);
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
	std::cout << "ClapTrap <" << this->Name << \
		"> attack <" << target << ">, causing <" << this->Attack_damage << \
			"> points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints -= amount;
	std::cout << "ClapTrap <" << this->Name << \
		"> takes <" << amount << "> damage!\nremain: " << this->Hitpoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints += amount;
	std::cout << "ClapTrap <" << this->Name << "> " << amount << " repaire!\nremain: " << this->Hitpoints << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &origin)
{
	this->Name = origin.get_name();
	this->Hitpoints = origin.get_hit();
	this->Energy_points = origin.get_energy();
	this->Attack_damage = origin.get_attack();
	return (*this);
}
