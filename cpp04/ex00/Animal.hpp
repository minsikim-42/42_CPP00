/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:44:36 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/04 12:12:30 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
private:
	std::string	type;

public:
	Animal();
	Animal(const Animal &origin);
	~Animal();
	std::string	getType(void) const;
	void	makeSound(void) const;
	Animal	&operator=(const Animal &origin);
};

#endif
