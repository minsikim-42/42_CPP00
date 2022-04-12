/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:22:06 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/12 17:09:45 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(/* args */) : Form("Default", 25, 5), target("Defaults")
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &sh) : Form(sh.get_name(), 25, 5), target(sh.target)
{
	*this = sh;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &)
{
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target_) : Form(target_, 25, 5), target(target_)
{
}

std::string	PresidentialPardonForm::get_target(void) const
{
	return this->target;
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->get_signed() == true)
	{
		if (executor.getGrade() <= this->get_execute_grade())
		{
			std::cout << "---------------------------------------------------------\n";
			std::cout << "Informs that (" << target << ") has been pardoned by Zaphod Beeblebrox.\n";
			std::cout << "---------------------------------------------------------\n";
		}
		else
		{
			throw Bureaucrat::GradeTooLowException();
		}
	}
	else
	{
		throw Form::notSignedException();
	}
}
