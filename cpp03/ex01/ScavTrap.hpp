/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:43:19 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/23 11:28:14 by minsikim         ###   ########.fr       */
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
	ScavTrap();
	~ScavTrap();
	void guardGate();
	ScavTrap operator=(const ScavTrap &origin);
};

#endif