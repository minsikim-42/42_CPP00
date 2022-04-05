/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:25:32 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 19:42:16 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called\n";
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