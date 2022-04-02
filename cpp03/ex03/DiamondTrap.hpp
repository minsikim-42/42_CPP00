/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:31:41 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/02 15:47:49 by minsikim         ###   ########.fr       */
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
	// using	FragTrap::Hit_points;
	// using	ScavTrap::Energy_points;
	// using	FragTrap::Attack_damage;

public:
	DiamondTrap();
	DiamondTrap(std::string _name);
	DiamondTrap(const DiamondTrap &origin);
	~DiamondTrap();

	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount); // energy
	using	ScavTrap::attack; // Scav // energy
	DiamondTrap	&operator=(const DiamondTrap &origin);
	
	void	whoAmI();
};

#endif
