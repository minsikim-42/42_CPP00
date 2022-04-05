/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:44:36 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 14:04:51 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(const Animal &origin);
	virtual ~Animal();
	std::string	getType(void) const;
	virtual void	makeSound(void) const;
	Animal	&operator=(const Animal &origin);
};

#endif
