/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:20:03 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/23 11:22:29 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(std::string _name);
	FragTrap();
	~FragTrap();
	void		highFivesGuys(void);
	FragTrap	operator=(const FragTrap &origin);
};

#endif