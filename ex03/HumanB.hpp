/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:12:02 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 15:37:30 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

// here we use pointer to weapon, which means it can be NULL,
// since B can also not have a weapon.

class HumanB
{
	private:
		std::string	name;
		Weapon*		weapon;

	public:
		HumanB();
		HumanB(const std::string name);
		HumanB(const HumanB& other); // Copy constructor
		HumanB& operator=(const HumanB& other); // Copy assignment operator
		~HumanB();

	void	setWeapon(Weapon& weapon);
	void	attack() const;
};

#endif
