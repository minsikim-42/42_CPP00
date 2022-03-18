/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:16:41 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 16:31:11 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zom;

	zom = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zom[i].set_name(name);
	}
	return (zom);
}
