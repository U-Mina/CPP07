/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:38:05 by ewu               #+#    #+#             */
/*   Updated: 2025/03/18 10:55:56 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

/**
 * IT* arr => PTR to the begining of IT type array
 * void(*ft)(IT const&): PTR to function
 * void => return nothing; (*ft) => declare a PTR named 'ft'
 * (IT const&)=> 'ft' take ONE para, which is a const REF to an obj of IT type
*/
template <typename IT>
void iter(IT* arr, size_t len, void(*ft)(const IT&))
{
	for (size_t i = 0; i < len; ++i)
		ft(arr[i]);
}

#endif