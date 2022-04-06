/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:46:29 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/06 14:33:35 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat &cat);
	~Cat();
	void	makeSound(void) const;
	void	add_idea(std::string idea_);
	void	show_my_ideas(void) const;
	Cat	&operator=(const Cat &cat);
};

#endif