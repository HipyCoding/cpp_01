/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:16:06 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 15:49:26 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{}

Harl::Harl(const Harl& other)
{
	*this = other;
}

Harl::~Harl(void) {}

Harl& Harl::operator=(const Harl& other)
{
	(void)other;
	return *this;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string whining)
{
	int i = 0;

	std::string cases[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	MethodPtr	complaint[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	MethodPtr	ptr;

	while (i < 4)
	{
		if (cases[i].compare(whining) == 0)
		{
			ptr = complaint[i];
			(this->*ptr)();
		}
		i++;
	}
}
