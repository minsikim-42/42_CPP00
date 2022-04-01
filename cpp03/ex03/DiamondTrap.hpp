/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:31:41 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/01 20:54:19 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	Name;
	// using	ClapTrap::Name;
	using	FragTrap::Hit_points;
	using	ScavTrap::Energy_points;
	using	FragTrap::Attack_damage;

public:
	DiamondTrap(std::string _name);
	DiamondTrap(const DiamondTrap &origin);
	DiamondTrap();
	~DiamondTrap();

	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount); // energy
	using	ScavTrap::attack; // Scav // energy
	void	whoAmI();
	
	DiamondTrap	&operator=(const DiamondTrap &origin);
};

#endif
