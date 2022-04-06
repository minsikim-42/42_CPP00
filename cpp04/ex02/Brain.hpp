/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:09:19 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/06 14:29:29 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
private:
	std::string	ideas[100];
	int			i;

public:
	Brain();
	Brain(const Brain &brain);
	~Brain();
	void	get_ideas(void) const;
	void	set_idea(std::string idea);
	Brain	&operator=(const Brain &brain);
};

#endif