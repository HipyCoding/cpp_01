/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christian <christian@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:23:48 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 02:59:09 by christian        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string& zombieName) : name(zombieName) 
{}

Zombie::~Zombie()
{
	std::cout << name << " is hit by destructor" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// size_t Zombie::getZombieCount()
// {
// 	return total_zombies;
// }
