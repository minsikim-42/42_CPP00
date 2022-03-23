/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:57:01 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/23 10:59:15 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP
# include <iostream>

class ClapTrap
{
protected:
	std::string	Name;
	int			Hitpoints;
	int			Energy_points;
	int			Attack_damage;
public:
	ClapTrap(std::string _name);
	ClapTrap();
	~ClapTrap();
	std::string	get_name(void) const;
	int			get_hit(void) const;
	int			get_energy(void) const;
	int			get_attack(void) const;

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap	&operator=(const ClapTrap &origin);
};

#endif