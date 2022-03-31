/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:43:19 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/30 17:01:00 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(std::string _name);
	ScavTrap(const ScavTrap &origin);
	ScavTrap();
	~ScavTrap();
	void guardGate();

	void attack(std::string const & target); // energy
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount); // energy

	ScavTrap operator=(const ScavTrap &origin);
};

#endif