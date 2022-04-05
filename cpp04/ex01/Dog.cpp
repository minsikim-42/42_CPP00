/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:50:36 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 15:27:08 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	brain = new Brain();
	type = "Dog";
}

Dog::Dog(const Dog &Dog)
{
	*this = Dog;
}

Dog::~Dog()
{
	delete brain;
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
