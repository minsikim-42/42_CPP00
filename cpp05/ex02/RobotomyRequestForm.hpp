/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:09:39 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/11 13:09:41 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string		target;
public:
	RobotomyRequestForm(/* args */);
	RobotomyRequestForm(const RobotomyRequestForm &sh);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &);
	RobotomyRequestForm(std::string target);

	std::string	get_target(void) const;

	void	make_robot(std::string target) const;

	void	execute(Bureaucrat const & executor) const;
};

#endif
