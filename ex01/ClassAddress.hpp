/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAddress.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:05:46 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/09 16:11:36 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSADDRESS_HPP
# define CLASSADDRESS_HPP

# include <iostream>
// class ClassAddress;

class ClassAddress
{
	int			idx;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	public :
	ClassAddress( void );

	void	add_Q_data(int i);

	int		re_idx(void);

	void	set_idx(int i);
	void	set_first_name(std::string cmd);
	void	set_last_name(std::string cmd);
	void	set_nickname(std::string cmd);
	void	set_phone_number(std::string cmd);
	void	set_darkest_secret(std::string cmd);

	void	print_idx(void);
	void	print_F(void);
	void	print_L(void);
	void	print_nick(void);
	void	print_all(void);
};

#endif