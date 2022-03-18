/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 22:11:04 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 16:26:43 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX 8
# include <iostream>

class Phonebook;

# include "Contact.hpp"

class Phonebook
{
	int				idx_;
	Contact	Contact[MAX];

public:
	Phonebook();
	~Phonebook();
	int	add_Q_data(int idx);
	int	check_number(std::string pn);
	void	set_index(int i);
	void	set_down_index(void);
	void	print_Contact(void);
};

#endif
