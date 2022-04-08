/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikkim <minsikkim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:36:25 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/09 00:41:38 by minsikkim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{

}

Form::Form(const Form &origin)
{
	this->name = origin.get_name();
	this->is_signed = origin.is_signed = false;
	this->sign_grade = origin.get_sign();
	this-> execute_grade = origin.get_execute();
	return *this;
}

Form::~Form()
{

}

Form	&Form::operator=(const Form &)
{
	return *this;
}
