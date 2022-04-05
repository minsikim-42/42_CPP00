/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:50:43 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 14:02:43 by minsikim         ###   ########.fr       */
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

void	Animal::makeSound(void) const
{
	std::cout << "Animal\n";
}

Animal	&Animal::operator=(const Animal &animal)
{
	type = animal.getType();
	return (*this);
}
