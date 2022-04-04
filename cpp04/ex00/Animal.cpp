/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:50:43 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/04 12:12:35 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
}

Animal::~Animal()
{

}

std::string	Animal::getType(void) const
{
	return (type);
}

void	makeSound(void) const
{
	std::cout << "?\n";
}

Animal	&Animal::operator=(const Animal &animal)
{
	type = animal.getType();
	return (*this);
}
