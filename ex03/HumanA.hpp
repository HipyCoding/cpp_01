/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:11:55 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 15:52:14 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;

	public:
		HumanA(const std::string name, Weapon& weapon);
		~HumanA();
	
	void	attack() const;
};

#endif
