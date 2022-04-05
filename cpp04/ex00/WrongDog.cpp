/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:50:36 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 20:34:26 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	std::cout << "Default WrongDog constructor called\n";
	type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &WrongDog)
{
	std::cout << "Copy WrongDog constructor called\n";
	*this = WrongDog;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor called\n";
}

void	WrongDog::makeSound(void) const
{
	std::cout << "Bark!\n";
}

WrongDog	&WrongDog::operator=(const WrongDog &Wrongdog)
{
	this->type = Wrongdog.getType();
	return (*this);
}
