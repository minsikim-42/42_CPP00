/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:25:32 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 15:26:44 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	brain = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
}

Cat::~Cat()
{
	delete brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Mew~\n";
}

Cat	&Cat::operator=(const Cat &cat)
{
	this->type = cat.getType();
	return (*this);
}