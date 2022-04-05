/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:50:36 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 14:20:28 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called\n";
	type = "Dog";
}

Dog::Dog(const Dog &Dog)
{
	*this = Dog;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark!\n";
}

Dog	&Dog::operator=(const Dog &dog)
{
	this->type = dog.getType();
	return (*this);
}
