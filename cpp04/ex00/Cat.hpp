/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:46:29 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/06 14:16:14 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &cat);
	~Cat();
	void	makeSound(void) const;
	Cat	&operator=(const Cat &cat);
};

#endif