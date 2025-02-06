/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:26:32 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 15:04:30 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;

	Zombie* horde = new Zombie[N];
	while (i < N)
	{
		horde[i].setName(name + std::to_string(i + 1));
		i++;
	}
	return (horde);
}
