/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:47:58 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/12 18:31:04 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon	&weapon;
	std::string	name;
public:
	HumanA(std::string _name, Weapon& _weapon);
	~HumanA();
	void	attack(void);
};

#endif