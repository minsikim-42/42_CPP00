/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:09:19 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 17:46:08 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include "Animal.hpp"

class Brain : public Animal
{
private: //?
	std::string	idea;
	std::array<std::string, 100> ideas;
public:
	Brain();
	Brain(const Brain &brain);
	~Brain();
	std::array<std::string, 100>	get_ideas(void) const;
	Brain	&operator=(const Brain &brain);
};

#endif