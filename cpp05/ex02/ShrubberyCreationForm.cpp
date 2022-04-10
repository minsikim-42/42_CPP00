/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:22:06 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/10 20:35:15 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(/* args */) : Form("Default", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sh)
{
	*this = sh;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &)
{
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target_)
{
	this->target = target_;
}

std::string	ShrubberyCreationForm::get_target(void) const
{
	return this->target;
}

void	ShrubberyCreationForm::make_tree(std::string target)
{
	std::string		tree = "ttttt \
							ttrttt \
							ttrttrtt \
							rrrr  rrrr \
							 reeree r \
							  eee e \
							  eee \
							   ee \
							   eee \
							   ee \
			 				  eeee \
							eee eeeee ";
	std::ofstream	file;
	file.open(target);
	if (file.is_open())
	{
		file.write(tree, tree.length());
	}
	file.close();
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->get_signed() == true)
	{
		if (executor.getGrade() <= this->get_execute_grade())
		{
			std::cout << "ASCII?";
		}
		else
		{
			throw Bureaucrat::GradeTooLowException();
		}
	}
	else
	{
		throw Form::notSignedException();
	}
}
