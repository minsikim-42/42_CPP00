/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:36:44 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 17:40:33 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(const Brain &Brain)
{
	*this = Brain;
}

Brain::~Brain()
{
}

std::array<std::basic_string, 100>	Brain::get_ideas(void) const
{
	return (ideas);
}

Brain	&Brain::operator=(const Brain &Brain)
{
	this->ideas = Brain.get_ideas();
	return (*this);
}