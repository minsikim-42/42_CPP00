/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:05:46 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 16:23:01 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
// class ClassAddress;

class Contact
{
	private :
	
	int			idx_;
	std::string	first_name_;
	std::string	last_name_;
	std::string	nickname_;
	std::string	phone_number_;
	std::string	darkest_secret_;

	public :
	
	Contact( void );
	Contact(std::string _first_name, std::string _last_name, \
		std::string _nickname, std::string _phone_number, std::string _darkest_secret);

	int		get_idx(void) const;
	
	void	set_idx(int i);
	void	set_contact(std::string _first_name, std::string _last_name, \
		std::string _nickname, std::string _phone_number, std::string _darkest_secret);

	void	print_idx(void);
	void	print_F(void);
	void	print_L(void);
	void	print_nick(void);
	void	print_all(void);
};

#endif
