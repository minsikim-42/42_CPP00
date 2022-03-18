/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:30:16 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 16:32:06 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon	*weapon_;
	std::string	name_;
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &Weapon);
	void	attack(void);
};

#endif
