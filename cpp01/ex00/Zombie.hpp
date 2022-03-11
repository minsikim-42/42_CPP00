/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:13:42 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/11 17:01:40 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private :
	std::string	name;
public :
	Zombie();
	Zombie(std::string name);
	void		announce(void);
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif