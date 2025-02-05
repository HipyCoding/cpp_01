/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HUmanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:11:59 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 16:30:36 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : name(name), weapon(NULL)
{}

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
