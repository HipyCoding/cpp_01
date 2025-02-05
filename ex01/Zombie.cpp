/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christian <christian@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:26:26 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 04:18:08 by christian        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name)
{
	this->name = name;
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
		this->name = zombieName;
}

