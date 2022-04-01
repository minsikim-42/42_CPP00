/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:20:03 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/01 21:22:15 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	std::string	Name;

public:
	FragTrap(std::string _name);
	FragTrap();
	~FragTrap();

	void attack(std::string const & target); // energy
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount); // energy

	void		highFivesGuys(void);
	FragTrap	&operator=(const FragTrap &origin);
};

#endif