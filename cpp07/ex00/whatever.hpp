/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:13:57 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/17 21:30:49 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b)
{
	T	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T		min(const T &a, const T &b)
{
	if (b > a)
		return a;
	else
		return b;
}

template<typename T>
T		max(const T &a, const T &b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif