/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 10:42:53 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/18 15:45:15 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array
{
private:
	unsigned int	len;
	T				*arr;
public:
	Array(/* args */) : len(0), arr(new T[len]()) {};
	Array(const unsigned int n) : len(n), arr(new T[len]()) {};
	Array(const Array &origin) : len(origin.size()), arr(new T[len]())
	{
		*this = origin;
	}
	~Array() { delete[] arr; };
	Array &operator=(const Array &origin)
	{
		delete[] arr;
		len = origin.size();
		arr = new T[len]();
		for (unsigned int i = 0; i < len; i++)
		{
			arr[i] = origin.arr[i];
		}
		return *this;
	}

	unsigned int	size() const { return len; }
	void			set_arr(int i, T t) { arr[i] = t; }
	T	&operator[](const unsigned int &i) const;

	class IndexException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "** Wrong index **";
		}
	};
};

template<typename T>
T	&Array<T>::operator[](const unsigned int &idx) const
{
	if (idx >= len)
		throw Array::IndexException();
	else
		return arr[idx];
}

#endif