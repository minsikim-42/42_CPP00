/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:50:36 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/06 14:34:04 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called\n";
	brain = new Brain();
	type = "Dog";
}

Dog::Dog(const Dog &Dog)
{
	std::cout << "Copy Dog constructor called\n";
	*this = Dog;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark!\n";
}

void	Dog::add_idea(std::string idea_)
{
	this->brain->set_idea(idea_);
}

void	Dog::show_my_ideas(void) const
{
	this->brain->get_ideas();
}

Dog	&Dog::operator=(const Dog &dog)
{
	this->type = dog.getType();
	return (*this);
}
