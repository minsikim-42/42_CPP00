/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:36:44 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/15 17:09:01 by minsikim         ###   ########.fr       */
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

void	Brain::set_idea(std::string idea_)
{
	if (i == 100)
	{
		std::cout << "Idea is full\n";
		return ;
	}
	ideas[i] = idea_;
	i++;
}

void	Brain::get_ideas(void) const
{
	for (int k = 0; k < this->i; k++)
	{
		std::cout << ideas[k] << std::endl;
	}
}

Brain	&Brain::operator=(const Brain &Brain)
{
	this->i = Brain.i;
	for (int j = 0; j < i; j++)
	{
		this->ideas[j] = Brain.ideas[j];
	}
	return (*this);
}