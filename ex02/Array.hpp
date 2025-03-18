/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:33:42 by ewu               #+#    #+#             */
/*   Updated: 2025/03/18 12:33:01 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>

/**
 * CLASS TEMPLATE:
 * cons with no para: default cons
 * copy construtor: deep cooy of other.array
 * destructor: delate and clean
 * assignment operator: deep copy
 * overload operator[]
 */

template <typename T>
class Array
{
private:
	T* array;
	unsigned int volum;
	
public:
	Array();//default cons without para, create empty array
	Array(unsigned int n);
	Array(const Array& other);//deep copy
	Array& operator=(const Array& other);
	~Array();
	
	const T& operator[](unsigned int index) const;// non mutable
	T& operator[](unsigned int index);//non const
	unsigned int size() const;
};

#include "Array.tpp"//shoube be include at the end

#endif