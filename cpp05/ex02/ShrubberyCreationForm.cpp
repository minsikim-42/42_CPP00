/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:22:06 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/12 17:09:25 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(/* args */) : Form("Default", 145, 137), target("Defaults")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sh) : Form(sh.get_name(), 145, 137), target(sh.target)
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

ShrubberyCreationForm::ShrubberyCreationForm(std::string target_) : Form(target_, 145, 137), target(target_)
{
}

std::string	ShrubberyCreationForm::get_target(void) const
{
	return this->target;
}

void	ShrubberyCreationForm::make_tree(std::string target) const
{
	std::string		tree =
"-------------\n\
minsikim tree\n\
-------------\n\
  treettt\n\
tttrtttttttrer\n\
rttrttrttttt\n\
 rrrr t rrrrer\n\
  reeree t\n\
   eeeer\n\
     e\n\
    ee\n\
    ee\n\
    ee\n\
   eeee\n\
 eee treee\n";
	std::ofstream	file;
	file.open(target + "_shrubbery");
	if (file.is_open())
	{
		file.write(tree.c_str(), tree.length());
	}
	file.close();
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->get_signed() == true)
	{
		if (executor.getGrade() <= this->get_execute_grade())
		{
			std::cout << "-------------------\n";
			std::cout << "make tree Success!!\n";
			std::cout << "-------------------\n";
			this->make_tree(this->target);
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
