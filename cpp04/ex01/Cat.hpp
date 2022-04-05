/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:46:29 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 15:25:11 by minsikim         ###   ########.fr       */
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
	Cat	&operator=(const Cat &cat);
};

#endif