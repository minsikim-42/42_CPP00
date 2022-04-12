/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:15:52 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/12 17:09:10 by minsikim         ###   ########.fr       */
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

Intern &Intern::operator=(const Intern &)
{
    return *this;
}

int find_form(std::string form)
{
    std::string std_arr[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (std_arr[i] == form)
        {
            return (i);
        }
    }
    return (-1);
}

Form	*Intern::new_pre(std::string form)
{
	return (new PresidentialPardonForm);
}
Form	*Intern::new_robo(std::string form)
{
	return (new RobotomyRequestForm);
}
Form	*Intern::new_sh(std::string form)
{
	return (new ShrubberyCreationForm);
}

Form *Intern::makeForm(std::string form, std::string target)
{
    typedef Form *(Intern::*f_ptr)(std::string target);
	f_ptr	f_list[3] = {
		&Intern::new_pre, 
		&Intern::new_robo, 
		&Intern::new_sh
		};

    int i = find_form(form);
	if (i != -1)
	{
		f_ptr	f = f_list[i]; // f = &Intern::new_pre; *f = Intern::new_pre
		return ((this->*f)(target));
	}
	else
		throw Intern::NoMatchException();
}

const char *Intern::NoMatchException::what() const throw()
{
    return ("No match form");
}
