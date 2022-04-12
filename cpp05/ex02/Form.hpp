/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:13:07 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/12 17:27:53 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

class Form;
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
	virtual ~Form();
	Form	&operator=(const Form &origin);
	Form(std::string name_, int s_grade, int e_grade);

	std::string	get_name(void) const;
	bool		get_signed(void) const;
	int			get_sign_grade(void) const;
	int			get_execute_grade(void) const;

	void		beSigned(const Bureaucrat &bu);

	virtual void	execute(Bureaucrat const & executor) const = 0;

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
	class notSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif
