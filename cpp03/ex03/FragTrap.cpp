/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:21:16 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/03 17:46:31 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "(FragTrap)" << "Default constructor called\n";
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	this->Name = _name;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "(FragTrap) " << this->Name << " constructor called\n";
}

FragTrap::FragTrap(const FragTrap &origin) : ClapTrap(origin)
{
	*this = origin;
	std::cout << "(FragTrap) " << Name << " Copy constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "(FragTrap) " << this->Name << " destructor called\n";
}

FragTrap	&FragTrap::operator=(const FragTrap &origin)
{
	this->Name = origin.Name;
	this->Hit_points = origin.Hit_points;
	this->Energy_points = origin.Energy_points;
	this->Attack_damage = origin.Attack_damage;
	return (*this);
}

void	FragTrap::attack(std::string const & target)
{
	if (this->Energy_points == 0 || Hit_points == 0)
	{
		std::cout << "It cant do anything\n";
		return ;
	}
	this->Energy_points--;
	std::cout << "FragTrap " << this->Name << \
		" attack " << target << ", causing " << this->Attack_damage << \
			" points of damage!\n";
}

// void	FragTrap::takeDamage(unsigned int amount)
// {
// 	Hit_points -= amount;
// 	if (Hit_points < 0)
// 		Hit_points = 0;
// 	std::cout << "FragTrap " << this->Name << \
// 		" takes " << amount << " damage!\nremain: " << this->Hit_points << std::endl;
// }

// void	FragTrap::beRepaired(unsigned int amount)
// {
// 	if (this->Energy_points == 0 || Hit_points == 0)
// 	{
// 		std::cout << "It cant do anything\n";
// 		return ;
// 	}
// 	this->Energy_points--;
// 	this->Hit_points += amount;
// 	if (Hit_points > 100)
// 		Hit_points = 100;
// 	std::cout << "FragTrap " << this->Name << " " << amount << " repaire!\nremain: " << this->Hit_points << std::endl;
// }

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->Name << " : \"Let's high five!!!\"\n";
}