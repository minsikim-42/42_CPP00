/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:12:50 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/11 17:38:34 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern(/* args */);
	Intern(const Intern &origin);
	virtual ~Intern();
	Intern	&operator=(const Intern &origin);

	Form	*makeForm(std::string form, std::string target);

	class	NoMatchException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

#endif
