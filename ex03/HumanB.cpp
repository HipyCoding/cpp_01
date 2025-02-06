/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HUmanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:11:59 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 15:39:43 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : name(""), weapon(NULL)
{}

HumanB::HumanB(const std::string name) : name(name), weapon(NULL)
{}

HumanB::HumanB(const HumanB& other) : name(other.name), weapon(other.weapon)
{}

HumanB& HumanB::operator=(const HumanB& other)
{
	if (this != &other)
	{
		name = other.name;
		weapon = other.weapon;
	}
	return *this;
}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon& weap)
{
	weapon = &weap;
}

void HumanB::attack() const
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
