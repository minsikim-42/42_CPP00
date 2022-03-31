/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:31:41 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/31 13:40:15 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
protected:
	using	ClapTrap::Name;
	using	ScavTrap::Hit_points;
	using	FragTrap::Energy_points;
	using	ScavTrap::Attack_damage;

public:
	DiamondTrap(std::string _name);
	DiamondTrap();
	~DiamondTrap();
	using	FragTrap::attack;
	DiamondTrap operator=(const DiamondTrap &origin);
	std::string	get_name(void);
};

#endif
