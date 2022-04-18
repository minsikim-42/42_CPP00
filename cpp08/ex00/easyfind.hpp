/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:23:04 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/18 21:30:22 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>
#include <iostream>

template<typename T>
typename T::iterator	easyfind(T &t, int i)
{
	typename T::iterator iter = std::find(t.begin(), t.end(), i);
	if (iter == t.end())
		throw std::exception();
	return iter;
}

#endif