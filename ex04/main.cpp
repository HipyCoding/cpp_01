/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:06:23 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 20:59:32 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

bool	check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "invalid arguments, please run with:" << std::endl;
		std::cerr << "./replacer <filename> <string to replace> <string to replace with>" << std::endl;
		return (false);
	}
	std::string s1(argv[2]);
	if (s1.empty())
	{
		std::cerr << "no <string to replace>" << std::endl;
		return (false);
	}
	return (true);
}

bool	check_file(const std::string& file, std::ifstream& in, std::ofstream& out)
{
	in.open(file.c_str());
	if (!in)
	{
		std::cerr << "could not access input file." << std::endl;
		return (false);
	}
	out.open((file + ".replace").c_str());
	if (!out)
	{
		std::cerr << "could not create output file." << std::endl;
		in.close();
		return (false);
	}
	return (true);
}

int	main(int argc, char **argv)
{
	if (!check_args(argc, argv))
		return (1);
	std::ifstream	in;
	std::ofstream	out;
	if (!check_file(argv[1], in, out))
		return (1);
	std::stringstream	buffer;
	buffer << in.rdbuf();
	replacer(buffer.str(), argv[2], argv[3], out);
	in.close();
	out.close();
	return (0);
}
