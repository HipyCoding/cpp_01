/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:12:14 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 15:37:12 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("random weapon") {}

Weapon::Weapon(std::string type) : type(type)
{}

Weapon::Weapon(const Weapon& other) : type(other.type)
{}

Weapon& Weapon::operator=(const Weapon& other)
{
	if (this != &other)
		type = other.type;
	return *this;
}

Weapon::~Weapon()
{}

const std::string& Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string newType)
{
	type = newType;
}
