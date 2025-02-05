/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 23:31:19 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 16:41:06 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "string:		" << &str << std::endl;
	std::cout << "stringPTR:	" << stringPTR << std::endl;
	std::cout << "stringREF:	" << &stringREF << std::endl;

	std::cout << "\nstring:		" << str << std::endl;
	std::cout << "stringPTR:	" << *stringPTR << std::endl;
	std::cout << "stringREF:	" << stringREF << std::endl;

	return 0;
}
