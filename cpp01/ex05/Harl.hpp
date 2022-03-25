/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:32:46 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/25 14:33:03 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
private :
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
public :
	Harl();
	~Harl();
	void	complain(std::string level);

};

#endif