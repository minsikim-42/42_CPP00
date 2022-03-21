/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:57:01 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/21 16:18:10 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap
{
private:
	std::string	Name;
	int			Hitpoints;
	int			Energy_points;
	int			Attack_damage;
public:
	FragTrap(std::string _name);
	~FragTrap();
	std::string	get_name(void) const;
	int			get_hit(void) const;
	int			get_energy(void) const;
	int			get_attack(void) const;

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	FragTrap	&operator=(const FragTrap &origin);
};

#endif