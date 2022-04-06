/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:57:51 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/06 22:59:01 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default name"), grade(0)
{

}
	
Bureaucrat::Bureaucrat(const Bureaucrat &origin)
{
	*this = origin;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &origin)
{
	this->grade = origin.grade;
	this->name = origin.getName();
	return *this;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void		Bureaucrat::incrementGrade(unsigned int amount)
{
	if (grade - amount < 1)
		throw 1;
	this->grade -= amount;
}

void		Bureaucrat::decrementGrade(unsigned int amount)
{
	if (grade + amount > 150)
		throw 1;
	this->grade += amount;
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bu)
{
	out << bu.getName() << ", bureaucrat grade " << bu.getGrade() << std::endl;
	return (out);
}
