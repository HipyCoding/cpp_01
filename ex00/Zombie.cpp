/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:23:48 by candrese          #+#    #+#             */
/*   Updated: 2025/02/04 16:00:39 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string& zombieName) : name(zombieName) 
{
	++total_zombies;
}

Zombie::~Zombie()
{
	--total_zombies;
	std::cout << name << " is hit by destructor" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

size_t Zombie::getZombieCount()
{
	return total_zombies;
}
