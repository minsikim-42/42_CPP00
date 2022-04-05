/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:25:32 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 20:33:35 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called\n";
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &Wrongcat)
{
	std::cout << "Copy WrongCat constructor called\n";
	*this = Wrongcat;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Mew~\n";
}

WrongCat	&WrongCat::operator=(const WrongCat &Wrongcat)
{
	this->type = Wrongcat.getType();
	return (*this);
}