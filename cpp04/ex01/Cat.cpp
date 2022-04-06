/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:25:32 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/06 17:33:47 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called\n";
	brain = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Copy Cat constructor called\n";
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Mew~\n";
}

void	Cat::add_idea(std::string idea_)
{
	this->brain->set_idea(idea_);
}

void	Cat::show_my_ideas(void) const
{
	this->brain->get_ideas();
}

Cat	&Cat::operator=(const Cat &cat)
{
	this->type = cat.getType();
	this->brain = new Brain(*(cat.brain));
	return (*this);
}
