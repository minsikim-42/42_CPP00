/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:22:06 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/12 17:09:37 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(/* args */) : Form("Default", 72, 45), target("Defaults")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ro) : Form(ro.get_name(), 72, 45), target(ro.target)
{
	*this = ro;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target_) : Form(target_, 72, 45), target(target_)
{
}

std::string	RobotomyRequestForm::get_target(void) const
{
	return this->target;
}

void	RobotomyRequestForm::make_robot(std::string target) const
{
	srand((unsigned int)time(NULL));
	if (rand() % 10 > 4)
	{
		std::cout << "** success!! **\n";
		std::cout << target << " has been robotomized!\n";
		std::cout << "-----------------------------\n";
	}
	else
	{
		std::cout << "** Failed!! **\n";
		std::cout << "-----------------------------\n";
	}
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->get_signed() == true)
	{
		if (executor.getGrade() <= this->get_execute_grade())
		{
			std::cout << "-----------------------------\n";
			std::cout << "Makes some drilling noises...\n";
			this->make_robot(this->target);
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
