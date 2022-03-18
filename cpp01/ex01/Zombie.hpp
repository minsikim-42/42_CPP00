/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:22:01 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 16:30:38 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include "iostream"

class	Zombie
{
private :
	std::string	name_;
	
public :
	Zombie();
	~Zombie();
	Zombie(std::string name);
	void	set_name(std::string name);
	void	announce(void);
	Zombie* newZombie(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
