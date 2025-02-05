/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:12:14 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 16:22:55 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{}

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
