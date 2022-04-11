/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:09:39 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/11 10:52:16 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string		target;
public:
	ShrubberyCreationForm(/* args */);
	ShrubberyCreationForm(const ShrubberyCreationForm &sh);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
	ShrubberyCreationForm(std::string target);

	std::string	get_target(void) const;

	void	make_tree(std::string target) const;

	void	execute(Bureaucrat const & executor) const;
};

#endif
