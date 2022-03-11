/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:05:46 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/11 21:11:33 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
// class ClassAddress;

class Contact
{
	private :
	
	int			idx;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

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
