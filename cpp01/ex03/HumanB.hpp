/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:30:16 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/12 18:16:50 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon	*weapon;
	std::string	name;
public:
	HumanB();
	HumanB(std::string _name);
	~HumanB();
	void	setWeapon(Weapon &_Weapon);
	void	attack(void);
};

#endif
