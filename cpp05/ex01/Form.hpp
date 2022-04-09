/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikkim <minsikkim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:13:07 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/09 16:23:56 by minsikkim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"


class Form{
private:
	const std::string	name;
	bool	is_signed;
	const int	sign_grade;
	const int	execute_grade;

public:
	Form();
	Form(const Form &origin);
	~Form();
	Form	&operator=(const Form &origin);
	Form(std::string name_, int s_grade, int e_grade);

	std::string	get_name(void) const;
	bool		get_signed(void) const;
	int			get_sign_grade(void) const;
	int			get_execute_grade(void) const;

	void		beSigned(const Bureaucrat &bu);

	class	GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class	GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif