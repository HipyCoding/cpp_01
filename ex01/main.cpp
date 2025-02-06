/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:26:21 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 15:05:13 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	int n = 0;
	int i = 0;
	
	std::cout << "enter number of zombies? ";
	std::cin >> n;
	if(n < 0)
	{
		std::cout << "invalid number! " << std::endl;
		return (0);
	}

	Zombie* horde = zombieHorde(n, "Zombie");

	while (i < n) 
	{
		horde[i].announce();
		i++;
	}

	delete[] horde;
	return (0);
}
