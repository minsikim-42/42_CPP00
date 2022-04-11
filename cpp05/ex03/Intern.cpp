/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:15:52 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/11 20:19:28 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}
	
Intern::Intern(const Intern &origin)
{
	*this = origin;
}

Intern::~Intern()
{

}

Intern	&Intern::operator=(const Intern &)
{
	return *this;
}

int		find_form(std::string form)
{
	std::string	std_arr[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (std_arr[i] == form)
		{
			return (i);
		}
	}
	return (-1);
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	Form	*f;
	switch (find_form(form))
	{
		case (0): // robo
			f = new RobotomyRequestForm(target);
			break;
		case (1): // sh tree
			f = new ShrubberyCreationForm(target);
			break;

		case (2): // president
			f = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::NoMatchException();
			break;
	}
	return (f);
	
}

const char	*Intern::NoMatchException::what() const throw()
{
	return ("No match form");
}
