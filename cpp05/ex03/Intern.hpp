/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:12:50 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/12 17:22:24 by minsikim         ###   ########.fr       */
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
	~Intern();
	Intern	&operator=(const Intern &origin);

	Form	*new_pre(std::string form);
	Form	*new_robo(std::string form);
	Form	*new_sh(std::string form);

	Form	*makeForm(std::string form, std::string target);

	class	NoMatchException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

#endif
