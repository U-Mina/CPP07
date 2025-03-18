/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:55:17 by ewu               #+#    #+#             */
/*   Updated: 2025/03/18 10:34:46 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

/**
 * TEMPLATES: for generic programming
 * AIM: work with diff data type!
 * KEYWORD: template <typename my_templ_name>
 * extra knowledge: class template => create generic CLASS!
*/
template <typename SW>
void swap(SW& a, SW& b)
{
	SW tmp = a;
	a = b;
	b = tmp;
}

template <typename MI>
MI min(MI& c, MI& d)
{
	if (c >= d)
		return d;
	return c;
}

template <typename MX>
MX max(MX& e, MX& f)
{
	if (e > f)
		return e;
	return f;
}

#endif