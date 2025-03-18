/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:56:10 by ewu               #+#    #+#             */
/*   Updated: 2025/03/18 11:27:51 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "iter.hpp"

//test case with instantiated ft: test 1
void print_i(const int& i)
{
	std::cout << "Print int array: " << i << "\n";
}

void print_f(const float& f)
{
	std::cout << "Print float array: " << std::fixed << std::setprecision(2) << f << 'f' << "\n";
}

//test 2
void print_s(const std::string& s)
{
	std::cout << "Print string array: " << s << "\n";
}

int main()
{
	int iarr[] = {42, 33, 10, 1, 1, 2};
	size_t ilen = sizeof(iarr) / sizeof(iarr[0]);
	//std::cout << "Int array is: " << "\n";
	iter(iarr, ilen, print_i);
	std::cout << std::endl;

	float farr[] = {0.1f, 0.22f, 42.42f, -2.22f, -5.2222f};
	size_t flen = sizeof(farr)  / sizeof(farr[0]);
	//std::cout << "Float array is: " << "\n";
	iter(farr, flen, print_f);
	std::cout << std::endl;

	std::string sarr[] = {"hello", "this is", "a test case", "of iter() function"};
	size_t slen = sizeof(sarr)  / sizeof(sarr[0]);
	//std::cout << "String array is: " << "\n";
	iter(sarr, slen, print_s);
	std::cout << std::endl;

	return 0;
}
