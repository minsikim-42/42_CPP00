/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:36:25 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/09 11:38:25 by minsikim         ###   ########.fr       */
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

std::string	Form::get_name(void) const
{
	return (this->name);
}

bool		Form::get_signed(void) const
{
	return (is_signed);
}

const int	Form::get_sign_grade(void) const
{
	return (sign_grade);
}

const int	Form::get_execute_grade(void) const
{
	return (execute_grade);
}
