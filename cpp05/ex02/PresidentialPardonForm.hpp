/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:09:39 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/11 13:39:47 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string		target;
public:
	PresidentialPardonForm(/* args */);
	PresidentialPardonForm(const PresidentialPardonForm &sh);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &);
	PresidentialPardonForm(std::string target);

	std::string	get_target(void) const;

	void	make_robot(std::string target) const;

	void	execute(Bureaucrat const & executor) const;
};

#endif
