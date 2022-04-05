/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:36:44 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 19:43:49 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : i(0)
{
	std::cout << "Default Brain constructor called\n";
}

Brain::Brain(const Brain &Brain)
{
	std::cout << "Copy Brain constructor called\n";
	*this = Brain;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

Brain	&Brain::operator=(const Brain &Brain)
{
	this->i = Brain.i;
	for (int j = 0; j < i; j++)
	{
		this->ideas[i] = Brain.ideas[i];
	}
	return (*this);
}