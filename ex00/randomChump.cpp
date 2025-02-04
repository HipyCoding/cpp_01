/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radomChump.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:23:45 by candrese          #+#    #+#             */
/*   Updated: 2025/02/03 23:21:56 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(const std::string& name)
{
	Zombie zombie(name);
	zombie.announce();
}
