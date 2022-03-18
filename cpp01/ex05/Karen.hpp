/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:39:42 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 17:54:33 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class Karen
{
private :
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
public :
	Karen();
	~Karen();
	void	complain(std::string level);

};

#endif