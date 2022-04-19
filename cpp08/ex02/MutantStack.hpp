/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:37:45 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/19 18:42:08 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
	std::vector<T>	con;
public:
	MutantStack(/* args */);
	MutantStack(const MutantStack &origin);
	~MutantStack();
	MutantStack &operator=(const MutantStack &);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() ////////////
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
	const iterator begin() const
	{
		return (this->c.begin());
	}
	const iterator end() const
	{
		return (this->c.end());
	}

	const_iterator &cbegin() const ////////
	{
		return (this->c.cbegin());
	}
	const_iterator &cend() const
	{
		return (this->c.cend());
	}

	reverse_iterator rbegin() //////////
	{
		return (this->c.rbegin());
	}
	reverse_iterator rend()
	{
		return (this->c.rend());
	}
	const reverse_iterator rbegin() const //////////
	{
		return (this->c.rbegin());
	}
	const reverse_iterator rend() const
	{
		return (this->c.rend());
	}

	const_reverse_iterator &crbegin() const //////////
	{
		return (this->c.cbegin());
	}
	const_reverse_iterator &crend() const
	{
		return (this->c.crend());
	}
};

template<typename T>
MutantStack<T>::MutantStack(/* args */)
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &origin)
{
	*this = origin;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &)
{
	return *this;
}

#endif
