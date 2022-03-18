/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:28:53 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/17 21:02:28 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private :
	int	fixedPoint; // 고정소수점
	static const int	fixedPoint2; // 분수부분 비트
public :
	Fixed();
	Fixed(const Fixed &a);
	~Fixed();
	Fixed	&operator=(const Fixed &origin); // 대입 연산자 오버로드
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
