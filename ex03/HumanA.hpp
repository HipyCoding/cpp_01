/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:11:55 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 15:25:55 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

// We use reference to weapon to make sure its never NULL,
// since A allwas has a weapon.

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;

	public:
		HumanA(const std::string name, Weapon& weapon);
		HumanA(const HumanA& other);
		HumanA &operator=(const HumanA& other);
		~HumanA();
	
	void	attack() const;
};

#endif
