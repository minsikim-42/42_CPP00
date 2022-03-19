/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:35:56 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/19 20:44:29 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fixedPoint2 = 8;

Fixed::Fixed(/* args */) : fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called\n";
	*this = a;
}

Fixed::Fixed(const int i) : fixedPoint(i << fixedPoint2)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f) : fixedPoint(roundf(f * (1 << fixedPoint2)))
{
	std::cout << "Float constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed	&Fixed::operator=(const Fixed &b)
{
	std::cout << "Assignation operator= called\n";
	this->fixedPoint = b.getRawBits();
	// this->fixedPoint2 = b.fixedPoint2;
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &b)
{
	std::cout << "Assignation operator+ called\n";
	this->fixedPoint = this->getRawBits() + b.getRawBits();
	// this->fixedPoint2 = b.fixedPoint2;
	return (*this);
}

Fixed	Fixed::operator-(const Fixed &b)
{
	std::cout << "Assignation operator- called\n";
	this->fixedPoint = this->getRawBits() - b.getRawBits();
	// this->fixedPoint2 = b.fixedPoint2;
	return (*this);
}

Fixed	Fixed::operator*(const Fixed &b)
{
	std::cout << "Assignation operator* called\n";
	this->fixedPoint = this->getRawBits() * b.getRawBits() >> fixedPoint2;
	// this->fixedPoint2 = b.fixedPoint2;
	return (*this);
}

Fixed	Fixed::operator/(const Fixed &b)
{
	std::cout << "Assignation operator/ called\n";
	this->fixedPoint = (float)this->getRawBits() / b.getRawBits() * (1 <<fixedPoint2);
	// this->fixedPoint2 = b.fixedPoint2;
	return (*this);
}

bool	Fixed::operator>(const Fixed &a)
{
	return (this->getRawBits() > a.getRawBits());
}

bool	Fixed::operator>=(const Fixed &a)
{
	return (this->getRawBits() >= a.getRawBits());
}

bool	Fixed::operator<(const Fixed &a)
{
	return (this->getRawBits() < a.getRawBits());
}

bool	Fixed::operator<=(const Fixed &a)
{
	return (this->getRawBits() <= a.getRawBits());
}

bool	Fixed::operator==(const Fixed &a)
{
	return (this->getRawBits() == a.getRawBits());
}

bool	Fixed::operator!=(const Fixed &a)
{
	return (this->getRawBits() != a.getRawBits());
}

Fixed	&Fixed::operator++(void)
{
	std::cout << "Assignation ++operator called\n";
	this->fixedPoint++;
	// this->fixedPoint2 = b.fixedPoint2;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	std::cout << "Assignation operator++ called\n";
	Fixed	temp = *this;
	++*this;
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	std::cout << "Assignation --operator called\n";
	this->fixedPoint--;
	// this->fixedPoint2 = b.fixedPoint2;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	std::cout << "Assignation operator-- called\n";
	Fixed	temp = *this;
	--this->fixedPoint;
	// this->fixedPoint2 = b.fixedPoint2;
	return (temp);
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

float	Fixed::toInt(void) const
{
	return (this->getRawBits() >> fixedPoint2);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (1 << fixedPoint2));
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &Fixed)
{
	out << Fixed.toFloat();
	return out;
}
