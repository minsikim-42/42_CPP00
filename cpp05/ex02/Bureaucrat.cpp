/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:57:51 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/11 20:39:03 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default name"), grade(150)
{

}

Bureaucrat::Bureaucrat(std::string name_, int grade_) : name(name_), grade(grade_)
{
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
	
Bureaucrat::Bureaucrat(const Bureaucrat &origin)
{
	*this = origin;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &)
{
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

void		Bureaucrat::incrementGrade(int amount)
{
	if (grade - amount < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->grade -= amount;
}

void		Bureaucrat::decrementGrade(int amount)
{
	if (grade + amount > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += amount;
}

void		Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "Sign-success!!\n(" << this->name;
		std::cout << "-Bureaucrat signed " << form.get_name() << "-form)\n" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Sign-Failed!!\n(";
		std::cerr << this->name;
		std::cerr << "-Bureaucrat couldn't sign ";
		std::cerr << this->name << "-form because ";
		std::cerr << e.what() << ")" << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cerr << "^Exec-Successed!!^\n(";
		std::cout << this->name << "-Bureaucrat excute " << form.get_name() << "-Form)\n\n";
	}
	catch (std::exception &e)
	{
		std::cerr << "Exec-Failed!!\n(";
		std::cerr << e.what() << ")\n" << std::endl;
	}
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat's grade is too high";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat's grade is too low";
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bu)
{
	out << bu.getName() << ", bureaucrat grade " << bu.getGrade() << std::endl;
	return (out);
}
