/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:37:44 by ewu               #+#    #+#             */
/*   Updated: 2025/03/18 12:52:09 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> array(7);
    std::cout << "volum is: " << array.size() <<'\n';
    for (unsigned int i = 0; i < array.size(); ++i)
    {
        array[i] = i % 3;
        std::cout << "Array at index " << i << " is value: " << array[i] <<'\n';
    }
    //out of range test
    try
    {
        std::cout << "Array at index 9 is value: " << array[9] <<'\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Array<std::string> s(3);
    // s = {"to", "create", "a string of 3 elements"};
    s[0] = "to";
    s[1] = "create";
    s[2] = "a string of 3 elements";
    for (unsigned int i = 0; i < s.size(); ++i)
    {
        array[i] = i % 3;
        std::cout << "String at index " << i << " is: " << array[i] <<'\n';
    }
    //out of range test
    try
    {
        std::cout << "String at index 5 is value: " << s[5] <<'\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}

// #define MAX_VAL 750
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
