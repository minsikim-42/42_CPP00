/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikkim <minsikkim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:36:25 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/09 16:27:38 by minsikkim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), is_signed(false), sign_grade(0), execute_grade(0)
{

}

Form::Form(const Form &origin) : name(origin.get_name()), is_signed(false), sign_grade(origin.get_sign_grade()), execute_grade(origin.get_execute_grade())
{

}

Form::~Form()
{

}

Form	&Form::operator=(const Form &)
{
	return *this;
}

Form::Form(std::string name_, int s_grade, int e_grade) : name(name_), is_signed(false), sign_grade(s_grade), execute_grade(e_grade)
{
	if (this->sign_grade < 1 || this->execute_grade < 1)
		throw Form::GradeTooHighException();
	else if (this->sign_grade > 150 || this->execute_grade > 150)
		throw Form::GradeTooLowException();
}

std::string	Form::get_name(void) const
{
	return (this->name);
}

bool		Form::get_signed(void) const
{
	return (is_signed);
}

int	Form::get_sign_grade(void) const
{
	return (sign_grade);
}

int	Form::get_execute_grade(void) const
{
	return (execute_grade);
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Form's grade is too high";
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Form's grade is too low";
}

void		Form::beSigned(const Bureaucrat &bu)
{
	if (bu.getGrade() >= this->sign_grade)
		throw Bureaucrat::GradeTooLowException();
	else
		is_signed = true;
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
	out << "name : " << form.get_name() << std::endl;
	out << "is signed : " << (form.get_signed() == true ? "true" : "false") << std::endl;
	out << "sign grade : " << form.get_sign_grade() << std::endl;
	out << "exec grade : " << form.get_execute_grade() << std::endl;

	return out;
}
