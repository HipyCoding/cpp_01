/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:26:26 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 16:40:14 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string newName)
{
	name = newName;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is hit by a destructor" << std::endl;
}

void Zombie::announce() const
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& zombieName)
{
		name = zombieName;
}

