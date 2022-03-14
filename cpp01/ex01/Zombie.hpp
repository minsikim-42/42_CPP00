/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:22:01 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/14 13:41:33 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include "iostream"

class	Zombie
{
private :
	std::string	name;
	
public :
	Zombie();
	~Zombie();
	Zombie(std::string _name);
	void	set_name(std::string _name);
	void	announce(void);
	Zombie* newZombie(std::string _name);
};

Zombie* zombieHorde(int N, std::string _name);

#endif