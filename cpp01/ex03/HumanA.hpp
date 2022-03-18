/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:47:58 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 16:31:35 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon	&weapon_;
	std::string	name_;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack(void);
};

#endif