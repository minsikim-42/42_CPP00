/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:50:43 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 19:43:14 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called\n";
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Copy Animal constructor called\n";
	*this = animal;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";	
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
