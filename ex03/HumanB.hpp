/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:12:02 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 16:19:49 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
	std::string	name;
	Weapon*		weapon;

public:
	HumanB(const std::string name);
	~HumanB();

	void	setWeapon(Weapon& weapon);
	void	attack() const;
};

#endif
