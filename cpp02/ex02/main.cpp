/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 20:30:35 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/30 14:25:20 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a:" << a << std::endl;
	std::cout << "++a:" << ++a << std::endl;
	std::cout << "a:" << a << std::endl;
	std::cout << "a++:" << a++ << std::endl;
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "max a,b:" << Fixed::max( a, b ) << std::endl;
	std::cout << "min a,b:" << Fixed::min( a, b ) << std::endl;
	std::cout << "a > b?:" << ( a > b ) << std::endl;
	std::cout << "a < b?:" << ( a < b ) << std::endl;
	std::cout << "a == b?:" << ( a == b ) << std::endl;
	std::cout << "a = b?:" << ( a = b ) << std::endl;
	std::cout << "a:" << a << std::endl;
	std::cout << "a == b?:" << ( a == b ) << std::endl;
	return 0;
}