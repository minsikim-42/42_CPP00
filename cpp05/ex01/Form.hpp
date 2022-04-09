/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:13:07 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/09 12:07:45 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>


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

	std::string	get_name(void) const;
	bool		get_signed(void) const;
	const int	get_sign_grade(void) const;
	const int	get_execute_grade(void) const;

	class	GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class	GradeTooLowException;
};

#endif