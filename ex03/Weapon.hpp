/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:12:16 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 16:22:15 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon(std::string type);
		~Weapon();

		const std::string&	getType() const;
		void	setType(std::string newType);
};

#endif
