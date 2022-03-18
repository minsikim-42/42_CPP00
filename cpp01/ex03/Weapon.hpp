/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:50:12 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 21:19:44 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
private :
	std::string	Type_;
public :
	Weapon();
	Weapon(std::string Type);
	std::string	getType(void);
	void		setType(std::string Type);
};

#endif