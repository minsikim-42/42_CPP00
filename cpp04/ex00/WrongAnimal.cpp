/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:50:43 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 20:32:09 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &Wronganimal)
{
	std::cout << "Copy WrongAnimal constructor called\n";
	*this = Wronganimal;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal\n";
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &Wronganimal)
{
	type = Wronganimal.getType();
	return (*this);
}
