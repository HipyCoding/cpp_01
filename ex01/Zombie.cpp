/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:26:26 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 14:56:22 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("unnamed") {}

Zombie::Zombie(const std::string& zombieName) : name(zombieName) {}

Zombie::Zombie(const Zombie& other) : name(other.name) {}

Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other) {
		name = other.name;
	}
	return *this;
}

Zombie::~Zombie()
{
	std::cout << name << " is hit by destructor" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& zombieName)
{
		name = zombieName;
}

