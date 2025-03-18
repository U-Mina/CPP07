/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:59:37 by ewu               #+#    #+#             */
/*   Updated: 2025/03/18 12:36:22 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>
// #include "Array.hpp"

template <typename T>
Array<T>::Array() : array(nullptr), volum(0)
//create an empty array in the initialization line
{
	//std::cout << "non-para default constructor\n";
}

template <typename T>
Array<T>::Array(unsigned int n) : volum(n)
{
	array = new T[n];
}

template <typename T>
Array<T>::Array(const Array& other)
{
	volum = other.volum;
	array = new T[volum];
	for (unsigned int i = 0; i < volum; ++i)
		array[i] = other.array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] array;
		volum = other.volum;
		array = new T[volum];
		for (unsigned int i = 0; i < volum; ++i)
			array[i] = other.array[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] array;
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= volum)
		throw std::out_of_range("index is out of bounds\n");
	return array[index];
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= volum)
		throw std::out_of_range("index is out of bounds\n");
	return array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return volum;
}
