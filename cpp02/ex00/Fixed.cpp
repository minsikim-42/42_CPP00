/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:35:56 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/17 21:04:59 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(/* args */) : fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called\n";
	*this = a;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed	&Fixed::operator=(const Fixed &b)
{
	std::cout << "Assignation operator called\n";
	this->fixedPoint = b.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->fixedPoint = raw;
}
