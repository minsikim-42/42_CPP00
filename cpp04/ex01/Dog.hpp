/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:50:04 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 15:25:25 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	Dog(const Dog &Dog);
	~Dog();
	void	makeSound(void) const;
	Dog	&operator=(const Dog &Dog);
};

#endif