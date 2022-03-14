/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:26:40 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/12 18:33:36 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string _Type)
{
	this->Type = _Type;
}

std::string	Weapon::getType(void)
{
	return (Type);
}

void	Weapon::setType(std::string _Type)
{
	Type = _Type;
}
