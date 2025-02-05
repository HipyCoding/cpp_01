/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:17:18 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 20:47:28 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void	replacer(std::string buffer, char *dest, char *src, std::ofstream &out)
{
	size_t		start = 0;
	size_t		next_position;
	std::string	s1(dest);
	std::string	s2(src);
	std::string	str("");

	while ((next_position = buffer.find(s1, start)) != std::string::npos)
	{
		str += buffer.substr(start, next_position - start);
		str += s2;
		start = next_position + s1.length();
	}
	str += buffer.substr(start, buffer.length() - start);
	out << str;
}
