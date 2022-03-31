/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:57:01 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/30 17:08:49 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP
# include <iostream>

class ClapTrap
{
private:
	std::string	Name;
	int			Hit_points;
	int			Energy_points;
	int			Attack_damage;

public:
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap &origin);
	ClapTrap();
	~ClapTrap();
	std::string	get_name(void) const;
	int			get_hit(void) const;
	int			get_energy(void) const;
	int			get_attack(void) const;

	void attack(std::string const & target); // energy
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount); // energy

	ClapTrap	&operator=(const ClapTrap &origin);
};

#endif